/*
앞의 Employee 클래스를 기반
이번에는 파생 클래스로 Developer를 작성하여
Display()를 오버라이딩 한 후 출력하라.

"이름 : XXX
 주소 : XXX
 프로그래밍 언어 : C++")
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

void main()
{

}