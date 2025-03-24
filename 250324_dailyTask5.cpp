/*
MousePoint Ŭ������ ������� �Ѵ�.
�� Ŭ������ Ŭ���� ���ø����� ������.
�� �� ������� x, y�� T������ ����.
������ ��ü�� �����Ͽ� ������� ������ ����.
*/

#include <iostream>

using namespace std;

template<class T>

class MousePoint
{
private:
	T x;
	T y;

public:
	MousePoint(T a, T b) {
		x = a;
		y = b;
	}
	T getX() {
		return x;
	}
	T getY() {
		return y;
	}
};

void main()
{
	MousePoint<int> mp(1, 2);
	cout << mp.getX() << mp.getY() << endl;
}