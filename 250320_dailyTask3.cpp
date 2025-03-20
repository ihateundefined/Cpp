/*
* 앞에서 작성한 Shape 클래스를 기반
* Rectangle를 상속 받아 Square이라는 이름의 클래스를 작성
* 클래스 상속 구조는 Shape – Rectangle – Square
* 
* 1. Square 클래스를 작성하시오.
* 2. Shape, Rectangle, Square 각 클래스의 생성자에
*  cout<<"Shape 생성자호출"<<endl;
* 생성자 호출 순서를 출력하도록 작성한다.
* 소멸자도 동일한 방식으로 작성한다.
*/

#include <iostream>

using namespace std;

class Shape {
protected:
	int x;
	int y;
public:
	Shape() {
		cout << "Shape 생성자 호출" << endl;
	}
	~Shape() {
		cout << "Shape 소멸자 호출" << endl;
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

class Rectangle : public Shape {
private:
	int height;
	int width;
public:
	Rectangle() {
		cout << "Rectangle 생성자 호출" << endl;
	}
	~Rectangle() {
		cout << "Rectangle 소멸자 호출" << endl;
	}
	Rectangle(int x, int y, int height, int width) : Shape(x, y) {
		this->height = height;
		this->width = width;
	}
	void Draw() {
		cout << "x : " << x << ", y : " << y << ", height : " << height << ", width : " << width << endl;
	}
};

class Square : public Rectangle {
private:

public:
	Square() {
		cout << "Square 생성자 호출" << endl;
	}
	~Square() {
		cout << "Square 소멸자 호출" << endl;
	}
};

class Circle : public Shape{
private:
	int r;
public:
	Circle() {
		cout << "Circle 생성자 호출" << endl;
	}
	~Circle() {
		cout << "Circle 소멸자 호출" << endl;
	}
	Circle(int x, int y, int r) : Shape(x, y) {
		this->r = r;
	}
	void Draw() {
		cout << "x : " << x << ", y : " << y << ", r : " << r << endl;
	}
};

void main()
{
	Square sq;
}