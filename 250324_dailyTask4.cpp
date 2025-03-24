/*
앞에서 작성한 Shape 클래스를 기반으로 한다.
앞에서 작성한 가상함수를 순수 가상함수로 만들어보자.
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
		cout << "Square의 Draw 함수 호출" << endl;
	}
};

void main()
{
	Square sq;
	Shape* pSh = (Shape*)&sq;
	pSh->Draw();
}