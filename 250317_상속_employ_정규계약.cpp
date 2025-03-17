#include <iostream>

using namespace std;

class Employee {
// 외부에서 봤을 때는 private
// 상속받은 자식에서 접근 가능
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
		cout << strName << strAddress << "employee 생성자 작동" << endl;
	}
	void DisplayEmployee() {
		cout << "이름 : " << strName << endl;
		cout << "주소 : " << strAddress << endl;
	}
	~Employee() {
		delete[] strName;
		delete[] strAddress;
		cout << "employee 소멸자 작동" << endl;
	}
};

// C랑 C++은 상속 받을 때 : 사용
// java랑 js는 extends 사용
class Regular : Employee {
private:
	double salary;
public:
	Regular() {

	}
	Regular(const char* pName, const char* pAddress, double pSalary) : Employee(pName, pAddress) {
		salary = pSalary;
		cout << strName << strAddress << salary << "regualr 생성자 작동" << endl;
		cout << "이름 : " << strName << endl;
		cout << "주소 : " << strAddress << endl;
	}
	~Regular() {
		cout << "regular 소멸자 작동" << endl;
	}
	double PayCheck() const {
		return salary;
	}
};

class Temporary : Employee {
private:
	double dailyPay;
	int days;
public:
	Temporary() {
	}
	Temporary(const char* pName, const char* pAddress, double pDailyPay, int pDays) : Employee(pName, pAddress) {
		dailyPay = pDailyPay;
		days = pDays;
		cout << strName << strAddress << dailyPay << days << "temporary 생성자 작동" << endl;
	}
	~Temporary() {
		cout << "temporary 소멸자 작동" << endl;
	}
	double PayCheck() const {
		return days * dailyPay;
	}
};

void main()
{
	Employee emp1("titi", "seoul");
	emp1.DisplayEmployee();

	Employee emp2("kiki", "incheon");
	emp2.DisplayEmployee();

	Regular rgl1("polarBear", "northPole", 300);
	cout << "정규 직원 급여" << rgl1.PayCheck() << endl;

	Temporary tmp1("penguin", "southPole", 20, 30);
	cout << "계약 직원 급여" << tmp1.PayCheck() << endl;
}