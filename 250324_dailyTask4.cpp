/*
�տ��� �ۼ��� Shape Ŭ������ ������� �Ѵ�.
�տ��� �ۼ��� �����Լ��� ���� �����Լ��� ������.
*/

#include <iostream>

using namespace std;

class Shape {
protected:
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
	virtual void Draw() = 0;
};

class Square : public Shape {
private:

public:
	Square() {
	}
	~Square() {
	}
	void Draw() {
		cout << "Square�� Draw �Լ� ȣ��" << endl;
	}
};

void main()
{
	Square sq;
	Shape* pSh = (Shape*)&sq;
	pSh->Draw();
}