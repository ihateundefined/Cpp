#include <iostream>
#include <string.h>

using namespace std;

class Employee {
protected:
	char* strName;
	char* strAddress;

public:
	Employee() {
		strName = NULL;
		strAddress = NULL;
		cout << "default 생성자" << endl;
	}
	Employee(const char* pName, const char* pAddress) {
		strName = new char[strlen(pName) + 1];
		strAddress = new char[strlen(pAddress) + 1];
		strcpy_s(strName, strlen(pName) + 1, pName);
		strcpy_s(strAddress, strlen(pAddress) + 1, pAddress);
	}
	void DisplayEmployee() {
		cout << "이름 : " << strName << endl;
		cout << "주소 : " << strAddress << endl;
	}
	~Employee() {
		delete[] strName;
		delete[] strAddress;
	}
	// 부모가 뒤로 빠지고, 자식에게 같은 함수가 있다면 그걸 사용
	// 즉, 오버라이딩 예정인 함수를 사용
	virtual double PayCheck() const {
		return 0.0;
	}
};

class Regular : public Employee {
protected:
	double salary;
public:
	Regular() {

	}
	Regular(const char* pName, const char* pAddress, double pSalary) : Employee(pName, pAddress) {
		salary = pSalary;
		cout << "이름 : " << strName << endl;
		cout << "주소 : " << strAddress << endl;
	}
	~Regular() {
	}
	// 이게 host가 되는 것임
	// 부모 method에 virtaul을 붙여준다
	double PayCheck() const {
		return salary;
	}
};

class SalesMan : public Regular
{
private:
	double allowance;
public:
	SalesMan() {

	}
	SalesMan(const char* pName, const char* pAddress, double pSalary, double allowance) : Regular(pName, pAddress, pSalary) {
		this->allowance = allowance;
	}
	~SalesMan() {
	}
	double PayCheck() const {
		return Regular::PayCheck() + allowance;
	}
};

class Temporary : public Employee {
private:
	double dailyPay;
	int days;
public:
	Temporary() {
	}
	Temporary(const char* pName, const char* pAddress, double pDailyPay, int pDays) : Employee(pName, pAddress) {
		dailyPay = pDailyPay;
		days = pDays;
	}
	~Temporary() {
	}
	double PayCheck() const {
		return days * dailyPay;
	}
};

void main()
{
	Regular rgl1("polarBear", "northPole", 300);
	cout << "정규 직원 급여" << rgl1.PayCheck() << endl;

	Temporary tmp1("penguin", "southPole", 20, 30);
	cout << "계약 직원 급여" << tmp1.PayCheck() << endl;

	SalesMan slm1("tiger", "africa", 300, 100);
	cout << "영업 사원 급여" << slm1.PayCheck() << endl;

	// emp1을 통해서 regular에 접근하고 싶은 상황임
	// paycheck에 virtual 넣어주었기 때문에
	// employee의 paycheck가 아니고
	// regular의 paycheck가 될 것
	//Employee* emp1 = (Employee*) & rgl1;
	//Employee* emp1 = (Employee*)&tmp1;
	// 부모 객체 = 자식 객체
	Employee* emp1 = (Employee*)&slm1;
	cout << emp1->PayCheck() << endl;
}