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
	MousePoint();

	MousePoint(int a, int b) {
		x = a;
		y = b;
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

	~MousePoint();

private:
	int x;
	int y;
};

MousePoint::MousePoint()
{
}

MousePoint::~MousePoint()
{
}

void main()
{
	MousePoint arr[];
	MousePoint* pArr;


}
