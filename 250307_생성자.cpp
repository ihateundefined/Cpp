#include <iostream>

using namespace std;

class MousePoint
{
private:
	int x;
	int y;

public:
	MousePoint(int a, int b)
	{
		x = a;
		y = b;
	}

	MousePoint()
	{
		cout << "default ������ ȣ�� " << endl;
		x = 0;
		y = 0;
	}

	~MousePoint()
	{
		cout << "�Ҹ��� ȣ�� " << endl;
	}

	int getX() {
		return x;
	}

	int getY() {
		return y;
	}
};

void main()
{
	MousePoint point(10, 20);
	MousePoint pointDefault;
	cout << "������ " << point.getX() << " " << point.getY() << endl;
}