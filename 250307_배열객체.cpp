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
	//MousePoint pt[3];
		
	// �ʱ�ȭ
	MousePoint pt[3] = { 
		MousePoint (10, 20), 
		MousePoint(100, 200), 
		MousePoint(1000, 2000)
	};
	
	// pt[0].setXY(100, 200);
	cout << "x�� " << pt[0].getX() << endl;
	cout << "y�� " << pt[0].getY() << endl;
	cout << "x�� " << pt[1].getX() << endl;
	cout << "y�� " << pt[1].getY() << endl;
	cout << "x�� " << pt[2].getX() << endl;
	cout << "y�� " << pt[2].getY() << endl;

	cout << "**********************" << endl;

	// �ݺ���!
	for (int i = 0; i < 3; i++)
	{
		cout << "x�� " << pt[i].getX() << endl;
		cout << "y�� " << pt[i].getY() << endl;
	}
}