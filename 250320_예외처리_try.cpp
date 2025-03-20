#include <iostream>

using namespace std;

void Divide(int x, int y) {
	if (y == 0) {
		throw y;
	}
	cout << "������ �Ѵ� >> " << x / y << endl;
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
			throw "������ �� ���� �����Դϴ�";
		}
		
		Divide(a, b);		
	}
	catch (int exp)
	{
		cout << "������ ���� 0�� �����ϴ�" << endl;
	}
	catch (const char* msg) {
		cout << msg << endl;
	}
}