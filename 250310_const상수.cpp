#include <iostream>

using namespace std;

class MousePoint
{
private:
	int x;
	int y;

public:
	// �����ڿ��� const �Ұ� ... ������ ��ü�� �ʱ�ȭ ���� �Լ��̹Ƿ� �� ������ ���� const�� �Ұ�
	MousePoint() {
		cout << "������ ȣ��" << endl;
	}

	MousePoint(int a, int b) {
		x = a;
		y = b;
	}

	// ���� ����
	// ���� �����ϴ� ��� const�� ������ ����
	void setXY(int a, int b) {
		this->x = a;
		this->y = b;
	}

	int getX() const {
		// ���� �Ұ�
		// const ����Լ��� const�� �������� ���� �ٸ� ����Լ��� ȣ���� �� ����
		//x = 100;
		//this->setXY(100, 200);
		//setxy(100, 200);

		return x;
	}

	// �б� ���� ������ ��� ... const ����
	// ���� �������� �ʴ� ��쿡�� const�� ��
	int getY() const {
		return y;
	}
};

void setRect(MousePoint pt1, MousePoint pt2)
{
	cout << pt1.getX() << ", " << pt1.getY() << endl;
	cout << pt2.getX() << ", " << pt2.getY() << endl;

	pt1.setXY(1000, 2000);
	cout << pt1.getX() << ", " << pt1.getY() << endl;
	cout << pt2.getX() << ", " << pt2.getY() << endl;
}

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
	MousePoint mp1(10, 20);
	MousePoint mp2(30, 40);

	CopyObject(mp1, mp2);

	cout << mp1.getX() << ", " << mp1.getY() << endl;
	cout << mp2.getX() << ", " << mp2.getY() << endl;

	// a��� ������ ���ȭ�� �Ǹ鼭 100�̶�� ���� ������ ��
	const int a = 100;
	// a = 200; ���� a�� ���� �����ϴ� ���� �Ұ���

	// const�� ���ؼ� �� �ȿ� �ִ� ������ ���ȭ�� �� => ������ �Ұ�
	const MousePoint pt(10, 20);
	MousePoint pt2(100, 200);
	// pt = pt2; ���� ����� �Ǵ� pt�� ����� ���� �߻�

	// ����
	pt.getX();
	pt.getY();

	// const ��ü�� const ����Լ��� ȣ�� �� �� �ִ�
	// pt.setXY(); �Ұ�
}