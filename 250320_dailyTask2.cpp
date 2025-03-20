/*
* 앞에서 작성한 Shape 클래스를 기반
* 사각형을 그리는 클래스(Rectangle)와 원을 그리는 클래스(Circle)를 작성
* Shape를 상속받아 작성
* 사각형을 그리기 위해서는 기준좌표(x, y)와 넓이(width), 높이(height) 정보만 있으면 된다.
* 원을 그리기 위해서는 기준좌표 (x, y)와 반지름(r)이 있으면 된다.
* 멤버함수 Draw()를 정의하는데, 두 클래스에 모두 정의
* Draw()의 기능은 Rectangle의 경우 x, y, w, h를 출력
* Circle의 경우 x, y, r의 값을 출력
* Rectangle 클래스와 Circle 클래스를 정의
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