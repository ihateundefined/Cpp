/*
Employee 클래스를 상속받는 Manager 클래스를 만들어,
Display() 메서드를 오버라이딩하여 매니저의 역할을 출력하시오.
(예 : 매니저의 역할은 관리이다.
역할은 char* pRole로 선언하고 오버라이딩 된 Display() 함수를 호출하면
"이름 : XXX
 주소 : XXX
 역할 : 관리"
로 출력)
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
	Manager(const char* pRole) : Employee (pName, pAddr)
	{
		this->pRole = pRole;
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
	Employee emp("kim", "seoul");
	emp.Display();

	Manager mng("park", "incheon", "관리");
}
