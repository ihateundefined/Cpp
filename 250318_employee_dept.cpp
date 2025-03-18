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

class Department {
private:
	Employee* employee[10];
	int count;
public:
	Department() {
		count = 0;
	}
	void AddEmployee(Employee& emp) {
		this->employee[count] = &emp;
		count++;
	}
	void Display() const {
		for (int i = 0; i < count; i++) {
			cout << "급여 : " << employee[i]->PayCheck() << endl;
		}
	}
	~Department() {

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

	Department dept;
	dept.AddEmployee(rgl1);
	dept.AddEmployee(tmp1);
	dept.AddEmployee(slm1);
	dept.Display();
}