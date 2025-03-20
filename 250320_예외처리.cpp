#include <iostream>

using namespace std;

void main()
{
	int a = 0;
	int b = 0;

	cin >> a;
	cin >> b;

	while (a == 0 || b == 0)
	{
		cout << "0이 아닌 정수를 입력하세요!" << endl;
		cin >> a;
		cin >> b;
	}

	cout << "나누기 한다 >> " << a / b << endl;
}