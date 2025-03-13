#include <iostream>

using namespace std;

class MousePoint
{
private:
	int x;
	int y;

public:
	MousePoint()
	{
		cout << "default ������ ȣ��" << endl;
	}

	MousePoint(int a, int b)
	{
		x = a;
		y = b;
	}

	int getX() {
		return x;
	}

	int getY() {
		return y;
	}

	void setXY(int a, int b)
	{
		this->x = a;
		this->y = b;
	}
};

void setRect(MousePoint pt1, MousePoint pt2)
{
	cout << pt1.getX() << ", " << pt1.getY() << endl;
	cout << pt2.getX() << ", " << pt2.getY() << endl;

	pt1.setXY(1000, 2000);
	cout << pt1.getX() << ", " << pt1.getY() << endl; // 1000, 2000
	cout << pt2.getX() << ", " << pt2.getY() << endl;

}

// �̷��� & ����ϸ�, ������ �޸𸮸� ����
// mp1�� �޸𸮸� �����ϴ� �� : reference ���
MousePoint CopyObject(MousePoint& pt1, MousePoint& pt2)
{
	pt1 = pt2;

	cout << pt1.getX() << ", " << pt1.getY() << endl;
	cout << pt2.getX() << ", " << pt2.getY() << endl;

	return pt1;
}

void main()
{
	MousePoint mp1(10, 20);
	MousePoint mp2(30, 40);

	// mp1�� �޸𸮿� pt1�� �޸� ����
	// mp2�� �޸𸮿� pt2�� �޸� ����
	mp1 = CopyObject(mp1, mp2); // mp1 = pt1�� �ǹ� ... ���� ���簡 �ȴ�

	cout << mp1.getX() << ", " << mp1.getY() << endl;
	cout << mp2.getX() << ", " << mp2.getY() << endl;
}