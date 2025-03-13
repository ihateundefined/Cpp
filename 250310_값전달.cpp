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

// call by value
void setRect(MousePoint pt1, MousePoint pt2)
{
	cout << pt1.getX() << ", " << pt1.getY() << endl;
	cout << pt2.getX() << ", " << pt2.getY() << endl;

	// �߰��� ���� �����ص� ������ �� �Ǵ� ���� Ȯ���� �� �ִ�
	pt1.setXY(1000, 2000);
	cout << pt1.getX() << ", " << pt1.getY() << endl; // 1000, 2000
	cout << pt2.getX() << ", " << pt2.getY() << endl;

} // pt1�� �� ������ ����鼭 ���� �޸𸮿��� �����

void CopyObject(MousePoint pt1, MousePoint pt2)
{
	cout << pt1.getX() << ", " << pt1.getY() << endl;
	cout << pt2.getX() << ", " << pt2.getY() << endl;

	pt1 = pt2;

	cout << pt1.getX() << ", " << pt1.getY() << endl;
	cout << pt2.getX() << ", " << pt2.getY() << endl;
}

void main()
{
	// ���� ���� ���� call by value
	// setRect(10, 20); // Ÿ���� �� �����Ƿ� �ȵ�

	MousePoint mp1(10, 20);
	MousePoint mp2(30, 40);

	// mp1�� 10�� 20�� pt1, pt2�� ����! => �޸� ���� �ƴ�
	// pt1 = mp1 <- �̷��� ������ �Ǵ� ��Ȳ�� => �� �ȿ� �ִ� ��Ұ� ���簡 ��
	// mp2�� 30�� 40�� pt1, pt2�� ����!
	//setRect(mp1, mp2);
	CopyObject(mp1, mp2);

	// ���� ������ �ִ� mp1�� ���� �׳� ������ ��
	// pt1�̶��� ����� ����
	// 10, 20
	cout << mp1.getX() << ", " << mp1.getY() << endl;
	cout << mp2.getX() << ", " << mp2.getY() << endl;
}