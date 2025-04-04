/*
Shape 클래스를 기반
자식 클래스의 객체 포인터를 부모 클래스의 객체 포인터로 넘겨받아 멤버함수를 호출
Shape 클래스 내부에 Draw() 함수 추가
함수 내부의 구현은 cout<<"Shape의Draw 함수호출"<<endl;
부모 클래스는 Shape이고, 자식 클래스는 Square로 지정한다.
부모 클래스의 객체 포인터로 Draw() 함수를 호출하는 코드를 작성하자.
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
	void Draw() {
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