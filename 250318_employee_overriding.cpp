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
		cout << "default ������" << endl;
	}
	Employee(const char* pName, const char* pAddress) {
		strName = new char[strlen(pName) + 1];
		strAddress = new char[strlen(pAddress) + 1];
		strcpy_s(strName, strlen(pName) + 1, pName);
		strcpy_s(strAddress, strlen(pAddress) + 1, pAddress);
		cout << strName << strAddress << "employee ������ �۵�" << endl;
	}
	void DisplayEmployee() {
		cout << "�̸� : " << strName << endl;
		cout << "�ּ� : " << strAddress << endl;
	}
	~Employee() {
		delete[] strName;
		delete[] strAddress;
		cout << "employee �Ҹ��� �۵�" << endl;
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
		cout << strName << strAddress << salary << "regualr ������ �۵�" << endl;
		cout << "�̸� : " << strName << endl;
		cout << "�ּ� : " << strAddress << endl;
	}
	~Regular() {
		cout << "regular �Ҹ��� �۵�" << endl;
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
		cout << strName << strAddress << salary << allowance << "������� ������ �۵�" << endl;
	}
	~SalesMan() {
		cout << "salesman �Ҹ��� �۵�" << endl;
	}
	double PayCheck() const {
		return Regular::PayCheck() + allowance;
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
		cout << strName << strAddress << dailyPay << days << "temporary ������ �۵�" << endl;
	}
	~Temporary() {
		cout << "temporary �Ҹ��� �۵�" << endl;
	}
	double PayCheck() const {
		return days * dailyPay;
	}
};

void main()
{
	SalesMan slm1("tiger", "africa", 300, 100);
	cout << "���� ��� �޿�" << slm1.PayCheck() << endl;
}