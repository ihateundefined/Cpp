/*
* MousePoint 클래스를 기반으로 한다.
* MousePoint 클래스를 이용하여 객체 포인터를 한 개 선언
* 동적으로 객체를 생성하여 객체 포인터에 주소값을 넘겨주도록 한다.
* 이 때 동적으로 객체 생성 시 멤버변수의 초기값 설정을 위한 전달인자의 값은 (100, 200)
* 객체 포인터를 통해 멤버변수를 출력하도록 하자.
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
