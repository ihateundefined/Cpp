/*
* �տ��� �ۼ��� Shape Ŭ������ ���
* �簢���� �׸��� Ŭ����(Rectangle)�� ���� �׸��� Ŭ����(Circle)�� �ۼ�
* Shape�� ��ӹ޾� �ۼ�
* �簢���� �׸��� ���ؼ��� ������ǥ(x, y)�� ����(width), ����(height) ������ ������ �ȴ�.
* ���� �׸��� ���ؼ��� ������ǥ (x, y)�� ������(r)�� ������ �ȴ�.
* ����Լ� Draw()�� �����ϴµ�, �� Ŭ������ ��� ����
* Draw()�� ����� Rectangle�� ��� x, y, w, h�� ���
* Circle�� ��� x, y, r�� ���� ���
* Rectangle Ŭ������ Circle Ŭ������ ����
*/

#include <iostream>

using namespace std;

class Shape {
protected:
	int x;
	int y;
public:
	Shape() {}
	~Shape() {}
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

class Rectangle : public Shape {
private:
	int height;
	int width;
public:
	Rectangle() {}
	~Rectangle() {}
	Rectangle(int x, int y, int height, int width) : Shape(x, y) {
		this->height = height;
		this->width = width;
	}
	void Draw() {
		cout << "x : " << x << ", y : " << y << ", height : " << height << ", width : " << width << endl;
	}
};

class Circle : public Shape{
private:
	int r;
public:
	Circle() {}
	~Circle() {}
	Circle(int x, int y, int r) : Shape(x, y) {
		this->r = r;
	}
	void Draw() {
		cout << "x : " << x << ", y : " << y << ", r : " << r << endl;
	}
};

void main()
{
	Rectangle rec(10, 20, 30, 40);
	rec.Draw();

	Circle cir(10, 20, 30);
	cir.Draw();
}