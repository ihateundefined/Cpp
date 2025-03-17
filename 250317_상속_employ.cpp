#include <iostream>

using namespace std;

class Employee {
private:
	char* strName;
	char* strAddress;

public:
	Employee() {
		strName = NULL;
		strAddress = NULL;
	}
	Employee(const char* pName, const char* pAddress) {
		// strlen -> ���ڿ��� ���� return
		// ���ڿ� �������� NULL ���ؼ� + 1 �ϱ�
		strName = new char[strlen(pName) + 1];
		strAddress = new char[strlen(pAddress) + 1];
		strcpy_s(strName, strlen(pName) + 1, pName);
		strcpy_s(strAddress, strlen(pAddress) + 1, pAddress);
		cout << strName << strAddress << "��ü ���� �Ϸ�" << endl;
	}
	void DisplayEmployee() {
		cout << "�̸� : " << strName << endl;
		cout << "�ּ� : " << strAddress << endl;
	}
	~Employee() {
		delete[] strName;
		delete[] strAddress;
	}
};

void main()
{
	Employee emp1("titi", "seoul");
	emp1.DisplayEmployee();

	Employee emp2("kiki", "incheon");
	emp2.DisplayEmployee();
}