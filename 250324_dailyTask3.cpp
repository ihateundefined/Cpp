/*
Shape 클래스를 기반
앞에서 작성한 코드의 결과가 우리가 예상한 결과와 다르게 나왔다면 무슨 문제점이 있는지 생각해보자.
그리고, 가상함수를 통해 문제를 해결하는 코드를 작성하자.
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
	virtual void Draw() {
		cout << "Shape의 Draw 함수 호출" << endl;
	}
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