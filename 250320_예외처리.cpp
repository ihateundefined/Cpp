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
		cout << "0�� �ƴ� ������ �Է��ϼ���!" << endl;
		cin >> a;
		cin >> b;
	}

	cout << "������ �Ѵ� >> " << a / b << endl;
}