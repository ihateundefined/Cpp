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
		// this-> �ǹ̰� �� ��Ȯ����
		// ���� ��ü�� �ִ� x, y��� �ǹ�
		this->x = a;
		this->y = b;
	}
	

	//void setXY(int x, int y)
	//{
	//	// �� ���� ���� �Ű� ���� �������� ���� ��ü���� ������ ����
	//	x = x;
	//	y = y;
	//}
};

void main()
{
	MousePoint* pObj;
	MousePoint pt(10, 20);
	pObj = &pt;

	cout << pObj->getX() << endl;
	cout << pObj->getY() << endl;
}