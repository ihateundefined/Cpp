#include <iostream>

using namespace std;

class MousePoint
{
private:
	int x;
	int y;

public:
	MousePoint()
	{
		cout << "default 생성자 호출" << endl;
	}

	MousePoint(int a, int b)
	{
		x = a;
		y = b;
	}

	~MousePoint()
	{
		cout << "destructor 소멸자 호출" << endl;
	}

	int getX() {
		return x;
	}

	int getY() {
		return y;
	}

	void setXY(int a, int b)
	{
		x = a;
		y = b;
	}
};

void main()
{
	// 객체 포인터 -> 결국 주소값만 저장하는 변수이다
	MousePoint* pObj;
	MousePoint pt(10, 20);
	pObj = &pt;

	// 화살표 .. 간접참조
	// . 직접접근
	cout << pObj->getX() << endl;
	cout << pObj->getY() << endl;
}