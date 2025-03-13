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
		this->x = a;
		this->y = b;
	}
};

// call by value
void setRect(MousePoint pt1, MousePoint pt2)
{
	cout << pt1.getX() << ", " << pt1.getY() << endl;
	cout << pt2.getX() << ", " << pt2.getY() << endl;

	// 중간에 값을 변경해도 적용이 잘 되는 것을 확인할 수 있다
	pt1.setXY(1000, 2000);
	cout << pt1.getX() << ", " << pt1.getY() << endl; // 1000, 2000
	cout << pt2.getX() << ", " << pt2.getY() << endl;

} // pt1은 이 지역을 벗어나면서 스택 메모리에서 사라짐

void CopyObject(MousePoint pt1, MousePoint pt2)
{
	cout << pt1.getX() << ", " << pt1.getY() << endl;
	cout << pt2.getX() << ", " << pt2.getY() << endl;

	pt1 = pt2;

	cout << pt1.getX() << ", " << pt1.getY() << endl;
	cout << pt2.getX() << ", " << pt2.getY() << endl;
}

void main()
{
	// 값에 의한 전달 call by value
	// setRect(10, 20); // 타입이 안 맞으므로 안됨

	MousePoint mp1(10, 20);
	MousePoint mp2(30, 40);

	// mp1의 10과 20이 pt1, pt2에 복사! => 메모리 공유 아님
	// pt1 = mp1 <- 이렇게 대입이 되는 상황임 => 그 안에 있는 요소가 복사가 됨
	// mp2의 30과 40이 pt1, pt2에 복사!
	//setRect(mp1, mp2);
	CopyObject(mp1, mp2);

	// 원래 가지고 있던 mp1의 값이 그냥 나오는 것
	// pt1이랑은 상관이 없음
	// 10, 20
	cout << mp1.getX() << ", " << mp1.getY() << endl;
	cout << mp2.getX() << ", " << mp2.getY() << endl;
}