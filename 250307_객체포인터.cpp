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

	~MousePoint()
	{
		cout << "destructor �Ҹ��� ȣ��" << endl;
	}

	int getX() {
		return x;
	}

	int getY() {
		return y;
	}

	void setXY(int a, int b)
	{
		x = a;
		y = b;
	}
};

void main()
{
	// ��ü ������ -> �ᱹ �ּҰ��� �����ϴ� �����̴�
	MousePoint* pObj;
	MousePoint pt(10, 20);
	pObj = &pt;

	// ȭ��ǥ .. ��������
	// . ��������
	cout << pObj->getX() << endl;
	cout << pObj->getY() << endl;
}