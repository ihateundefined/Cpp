/*
* ������ Draw �Լ��� �����ε� �Ͻÿ�.
* �ﰢ�� �׸���, �簢�� �׸���, �� �׸��� ����� ���� 3���� �Լ��� �����ε�
* �簢�� (int left, int top, int right, int bottom)
* ��(int x, int y, int radian)
*/

#include <iostream>

using namespace std;

void Draw(int first, int second, int third) {
	cout << "�ﰢ�� �׸��� >> " << first << second << third << endl;
}

void Draw(int left, int top, int right, int bottom) {
	cout << "�簢�� �׸��� >> " << left << top << right << bottom << endl;
}

void Draw(int x, int y, double radian) {
	cout << "�� �׸��� >> " << x << y << radian << endl;
}

void main()
{
	int a;
	int b;
	int c;
	int d;
	double e;
		
	cout << "���� 4�� �Է��ϱ� >>> " << endl;
	cin >> a >> b >> c >> d;
	Draw(a, b, c, d);

	cout << "���� 3�� �Է��ϱ� >>> " << endl;
	cin >> a >> b >> c;
	Draw(a, b, c);

	cout << "���� 2��, �Ҽ� 1�� �Է��ϱ� >>> " << endl;
	cin >> a >> b >> e;
	Draw(a, b, e);
}