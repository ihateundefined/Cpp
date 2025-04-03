#include <iostream>

using namespace std;

// 참조자는 반드시 값이 있음
void printDouble(const double& rd)
{
	cout << rd << endl;
}

// 다만 포인터를 매개변수로 받을 경우, null일수도 있으니 반드시 확인해야 함
void printDouble(const double* pd)
{
	// null 포인터 검사
	if (pd) {
		cout << *pd << endl;
		cout << pd << endl;
	}
}

void main()
{
	string s("abc");
	string& rs = s;

	double pi = 3.14;
	//const double& rd = pi;

	// 참조자
	printDouble(pi);
	// 포인터
	printDouble(&pi);
}