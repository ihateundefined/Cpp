#include <iostream>

using namespace std;

class Employee {
// �ܺο��� ���� ���� private
// ��ӹ��� �ڽĿ��� ���� ����
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

// C�� C++�� ��� ���� �� : ���
// java�� js�� extends ���
class Regular : Employee {
private:
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
	Employee emp1("titi", "seoul");
	emp1.DisplayEmployee();

	Employee emp2("kiki", "incheon");
	emp2.DisplayEmployee();

	Regular rgl1("polarBear", "northPole", 300);
	cout << "���� ���� �޿�" << rgl1.PayCheck() << endl;

	Temporary tmp1("penguin", "southPole", 20, 30);
	cout << "��� ���� �޿�" << tmp1.PayCheck() << endl;
}