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

	int getX() {
		return x;
	}

	int getY() {
		return y;
	}

	void setXY(int a, int b)
	{
		// this-> 의미가 더 명확해짐
		// 현재 객체에 있는 x, y라는 의미
		this->x = a;
		this->y = b;
	}
	

	//void setXY(int x, int y)
	//{
	//	// 이 경우는 형식 매개 변수 영향으로 실제 객체에는 영향이 없음
	//	x = x;
	//	y = y;
	//}
};

void main()
{
	MousePoint* pObj;
	MousePoint pt(10, 20);
	pObj = &pt;

	cout << pObj->getX() << endl;
	cout << pObj->getY() << endl;
}