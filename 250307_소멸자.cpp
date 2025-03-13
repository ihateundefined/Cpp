#include <iostream>

using namespace std;

class MousePoint
{
	// private : ���� ���� private ����
	// ĸ��ȭ�� �Ǿ��־� ���� ������ �Ұ�
private:
	int x;
	int y;

public:
	// ������ �����ε�
	// default ������
	MousePoint()
	{
		cout << "default" << endl;
	}

	MousePoint(int a, int b)
	{
		x = a;
		y = b;
	}

	// �Ҹ��ڴ� Ŭ���� �̸��� ���� �ϰ� �տ� ~
	~MousePoint()
	{
		cout << "destructor" << endl;
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
	MousePoint pointDefault;
	cout << "default ������ " << pointDefault.getX() << " " << pointDefault.getY() << endl;
	MousePoint point(10, 20); // 
	cout << "������ " << point.getX() << " " << point.getY() << endl;
}