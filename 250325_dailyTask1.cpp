/*
Employee Ŭ������ ���

Employee Ŭ������ ��ӹ޴� Manager Ŭ������ �����,
Display() �޼��带 �������̵��Ͽ� �Ŵ����� ������ ����Ͻÿ�.
(�� : �Ŵ����� ������ �����̴�. ������ char* pRole�� �����ϰ� �������̵� �� Display() �Լ��� ȣ���ϸ�

"�̸� : XXX
 �ּ� : XXX
 ���� : ���� "

�� ���)

*/

#include <iostream>

using namespace std;

class Employee
{
public:
	Employee();
	Employee(char* szName, char* szAddr);
	~Employee();
	void Display();
private:
	char* pName;
	char* pAddr;
};

class Manager {

};

Employee::Employee()
{
	pName = NULL;
	pAddr = NULL;
}

Employee::Employee(char* strName, char* strAddr)
{
	cout << "���ڰ� 2���� ������ ȣ��" << endl;
	pName = new char[strlen(strName) + 1];
	pAddr = new char[strlen(strAddr) + 1];
	strcpy(pName, strName);
	strcpy(pAddr, strAddr);
}

Employee::~Employee()
{
}

void Employee::Display()
{
	cout << "�̸� :" << pName << endl;
	cout << "�ּ� :" << pAddr << endl;
}

void main()
{
	Employee emp("kim", "seoul");
	emp.Display();
}