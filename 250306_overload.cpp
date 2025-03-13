/*
// C에서는 함수를 호출할 때 이름으로 호출해서 overload 불가
#include <stdio.h>

int AddI(int a, int b)
{
	return a + b;
}

double AddD(double a, double b)
{
	return a + b;
}

void main()
{
	printf("%d\n", AddI(10, 20));
	printf("%.2f\n", AddD(1.11, 2.22));

}
*/

/*
// C++의 overloading
#include <iostream>

using namespace std;

int Add(int a, int b)
{
	return a + b;
}

double Add(double a, double b)
{
	return a + b;
}

void main()
{
	cout << Add(1, 2) << endl;
	cout << Add(1.1, 2.2) << endl;
}
*/