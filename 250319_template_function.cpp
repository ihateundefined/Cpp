#include <iostream>

using namespace std;

/*
// ������ �ڵ�
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

// �Լ� ���ø� ȭ
template <class T>
T Max(T a, T b)
{
	return (a > b) ? a : b;
}

// �Լ��� Ŭ���� ����ø��� �ٿ���� ��
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