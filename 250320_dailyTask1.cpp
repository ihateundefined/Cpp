/*
* ������ �׸��� Ŭ������ ����
* Ŭ���� �̸��� Shape 
* ������ �׸����� �ݵ�� ������ǥ(�߽���ǥ) x, y�� �ʿ��ϴ�.
* Ŭ���� Shape�� ��������� ������ǥ x, y�� �����Ѵ�. 
* Shape �����ڴ� �������� �� ���� ������ �ϰ�, �����ڿ��� ��������� �ʱ�ȭ�Ѵ�.
* Shape Ŭ������ �����ϱ�
*/

#include <iostream>

using namespace std;

class Shape {
private:
	int x;
	int y;
public:
	Shape() {

	}
	~Shape() {

	}
	Shape(int a, int b) {
		x = a;
		y = b;
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
	Shape sp1(10, 20);
	cout << sp1.getX() << sp1.getY() << endl;
}