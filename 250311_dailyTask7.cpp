/*
* MousePoint Ŭ������ ������� �Ѵ�.
* MousePoint Ŭ������ �̿��Ͽ� ��ü �����͸� �� �� ����
* �������� ��ü�� �����Ͽ� ��ü �����Ϳ� �ּҰ��� �Ѱ��ֵ��� �Ѵ�.
* �� �� �������� ��ü ���� �� ��������� �ʱⰪ ������ ���� ���������� ���� (100, 200)
* ��ü �����͸� ���� ��������� ����ϵ��� ����.
*/

#include <iostream>

using namespace std;

class MousePoint
{
public:
	MousePoint() {
		cout << "������" << endl;
	};

	MousePoint(int a, int b) {
		x = a;
		y = b;
		
		cout << "������" << endl;
	}

	int getX() {
		return x;
	}

	int getY() {
		return y;
	}

	void setXY(int a, int b) {
		x = a;
		y = b;
	}

	~MousePoint() {
		cout << "�Ҹ���" << endl;
	};

private:
	int x;
	int y;
};

void main()
{
	MousePoint* pt;
	pt = new MousePoint(100, 200);

	cout << "��� ���� ��� >> " << pt->getX() << endl;
	cout << "��� ���� ��� >> " << pt->getY() << endl;

	delete pt;
}
