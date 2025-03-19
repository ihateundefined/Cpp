#include <iostream>

using namespace std;

/*
// 기존의 코드
int Max(int a, int b)
{
	return (a > b) ? a : b;
}

void Swap(int& a, int& b)
{
	int temp = 0;
	temp = a;
	a = b;
	b = temp;
}
*/

// 함수 템플릿 화
template <class T>
T Max(T a, T b)
{
	return (a > b) ? a : b;
}

// 함수나 클래스 선언시마다 붙여줘야 함
template <class T>
void Swap(T& a, T& b)
{
	T temp = 0;
	temp = a;
	a = b;
	b = temp;
}

void main()
{
	//int x = 10, y = 20;
	//char x = 'A', y = 'B';
	//cout << Max(x, y) << endl;
	
	//int x = 10, y = 20;
	char x = 'A', y = 'B';
	cout << x << ", " << y << endl;
	Swap(x, y);
	cout << x << ", " << y << endl;
}