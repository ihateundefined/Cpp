/*
Employee Ŭ������ ��ӹ޴� Manager Ŭ������ �����,
Display() �޼��带 �������̵��Ͽ� �Ŵ����� ������ ����Ͻÿ�.
(�� : �Ŵ����� ������ �����̴�.
������ char* pRole�� �����ϰ� �������̵� �� Display() �Լ��� ȣ���ϸ�
"�̸� : XXX
 �ּ� : XXX
 ���� : ����"
�� ���)
*/
#include <iostream>

using namespace std;

class Employee
{
public:
	Employee();
	Employee(const char* szName, const char* szAddr);
	~Employee();
	void Display();
protected:
	char* pName;
	char* pAddr;
};

Employee::Employee()
{
	pName = NULL;
	pAddr = NULL;
}

Employee::Employee(const char* strName, const char* strAddr)
{
	cout << "���ڰ� 2���� ������ ȣ��" << endl;
	pName = new char[strlen(strName) + 1];
	pAddr = new char[strlen(strAddr) + 1];
	strcpy(pName, strName);
	strcpy(pAddr, strAddr);
}

Employee::~Employee()
{
	delete[] pName;
	delete[] pAddr;
}

void Employee::Display()
{
	cout << "�̸� :" << pName << endl;
	cout << "�ּ� :" << pAddr << endl;
}

class Manager : public Employee {
private:
	char* pRole;
public:
	Manager();
	~Manager()
	{
		delete[] pRole;
	};
	Manager(const char* pRole) : Employee (pName, pAddr)
	{
		this->pRole = pRole;
	}
	void Display()
	{
		cout << "�̸� :" << pName << endl;
		cout << "�ּ� :" << pAddr << endl;
		cout << "���� : " << pRole << endl;
	}
};

void main()
{
	Employee emp("kim", "seoul");
	emp.Display();

	Manager mng("park", "incheon", "����");
}
