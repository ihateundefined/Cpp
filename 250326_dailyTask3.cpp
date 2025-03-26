/*
���� Employee Ŭ������ ������� �Ѵ�.
�տ��� �ۼ��ߴ� Employee�� Display() �Լ��� ���� ���� �Լ��� �����
Manager �Ǵ� Developer Ŭ�������� �������̵��϶�.
*/

#include <iostream>

using namespace std;

class Employee
{
public:
	Employee();
	Employee(const char* szName, const char* szAddr);
	virtual ~Employee();
	virtual void Display()=0;
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
	strcpy_s(pName, strlen(strName) + 1, strName);
	strcpy_s(pAddr, strlen(strAddr) + 1, strAddr);
}

Employee::~Employee()
{
	delete[] pName;
	delete[] pAddr;
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
	Manager(const char* pName, const char* pAddr, const char* strRole) : Employee(pName, pAddr)
	{
		pRole = new char[strlen(strRole) + 1];
		strcpy_s(pRole, strlen(strRole) + 1, strRole);
	}
	void Display()
	{
		cout << "�̸� :" << pName << endl;
		cout << "�ּ� :" << pAddr << endl;
		cout << "���� : " << pRole << endl;
	}
};

class Developer : public Employee {
private:
	char* pLanguage;
public:
	Developer();
	~Developer()
	{
		delete[] pLanguage;
	};
	Developer(const char* pName, const char* pAddr, const char* strLanguage) : Employee(pName, pAddr)
	{
		pLanguage = new char[strlen(strLanguage) + 1];
		strcpy_s(pLanguage, strlen(strLanguage) + 1, strLanguage);
	}
	void Display()
	{
		cout << "�̸� :" << pName << endl;
		cout << "�ּ� :" << pAddr << endl;
		cout << "���α׷��� ��� : " << pLanguage << endl;
	}
};

void main()
{
	Manager mng("kale", "Paris", "������");
	Developer dev("laurence", "LA", "C++");

	Employee* emp1 = &mng;
	Employee* emp2 = &dev;
	
	emp1->Display();
	emp2->Display();
}