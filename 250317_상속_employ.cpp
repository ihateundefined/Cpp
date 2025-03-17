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
		// strlen -> 문자열의 길이 return
		// 문자열 마지막에 NULL 위해서 + 1 하기
		strName = new char[strlen(pName) + 1];
		strAddress = new char[strlen(pAddress) + 1];
		strcpy_s(strName, strlen(pName) + 1, pName);
		strcpy_s(strAddress, strlen(pAddress) + 1, pAddress);
		cout << strName << strAddress << "객체 생성 완료" << endl;
	}
	void DisplayEmployee() {
		cout << "이름 : " << strName << endl;
		cout << "주소 : " << strAddress << endl;
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