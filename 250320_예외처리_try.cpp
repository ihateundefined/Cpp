#include <iostream>

using namespace std;

void Divide(int x, int y) {
	if (y == 0) {
		throw y;
	}
	cout << "나누기 한다 >> " << x / y << endl;
}

void main()
{
	int a = 0;
	int b = 0;

	cin >> a;
	cin >> b;
	
	try
	{
		if (a < 0) {
			throw "나누어 질 수가 음수입니다";
		}
		
		Divide(a, b);		
	}
	catch (int exp)
	{
		cout << "나누는 수에 0이 들어갔습니다" << endl;
	}
	catch (const char* msg) {
		cout << msg << endl;
	}
}