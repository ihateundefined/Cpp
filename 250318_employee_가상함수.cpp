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
	}
	void DisplayEmployee() {
		cout << "�̸� : " << strName << endl;
		cout << "�ּ� : " << strAddress << endl;
	}
	~Employee() {
		delete[] strName;
		delete[] strAddress;
	}
	// �θ� �ڷ� ������, �ڽĿ��� ���� �Լ��� �ִٸ� �װ� ���
	// ��, �������̵� ������ �Լ��� ���
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
		cout << "�̸� : " << strName << endl;
		cout << "�ּ� : " << strAddress << endl;
	}
	~Regular() {
	}
	// �̰� host�� �Ǵ� ����
	// �θ� method�� virtaul�� �ٿ��ش�
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
	cout << "���� ���� �޿�" << rgl1.PayCheck() << endl;

	Temporary tmp1("penguin", "southPole", 20, 30);
	cout << "��� ���� �޿�" << tmp1.PayCheck() << endl;

	SalesMan slm1("tiger", "africa", 300, 100);
	cout << "���� ��� �޿�" << slm1.PayCheck() << endl;

	// emp1�� ���ؼ� regular�� �����ϰ� ���� ��Ȳ��
	// paycheck�� virtual �־��־��� ������
	// employee�� paycheck�� �ƴϰ�
	// regular�� paycheck�� �� ��
	//Employee* emp1 = (Employee*) & rgl1;
	//Employee* emp1 = (Employee*)&tmp1;
	// �θ� ��ü = �ڽ� ��ü
	Employee* emp1 = (Employee*)&slm1;
	cout << emp1->PayCheck() << endl;
}