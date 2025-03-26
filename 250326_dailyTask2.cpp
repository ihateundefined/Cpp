/*
앞의 Employee 클래스를 기반
앞에서 작성했던 Employee의 Display() 메소드를
Manager 또는 Developer의 객체를 Employee 포인터로 가리킬 때
Display() 의 동작을 출력해보자.
*/

#include <iostream>

using namespace std;

class Employee
{
public:
	Employee();
	Employee(const char* szName, const char* szAddr);
	~Employee();
	virtual void Display();
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
	cout << "인자가 2개인 생성자 호출" << endl;
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

void Employee::Display()
{
	cout << "이름 :" << pName << endl;
	cout << "주소 :" << pAddr << endl;
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
		cout << "이름 :" << pName << endl;
		cout << "주소 :" << pAddr << endl;
		cout << "역할 : " << pRole << endl;
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
		cout << "이름 :" << pName << endl;
		cout << "주소 :" << pAddr << endl;
		cout << "프로그래밍 언어 : " << pLanguage << endl;
	}
};

void main()
{
	Manager mng("kale", "Paris", "관리자");
	Developer dev("laurence", "LA", "C++");

	Employee* emp1 = (Employee*)&mng;
	Employee* emp2 = (Employee*)&dev;
	emp1->Display();
	emp2->Display();
}