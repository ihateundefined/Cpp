#include <iostream>

using namespace std;

class MousePoint
{
private:
	int x;
	int y;

public:
	// 생성자에는 const 불가 ... 생성자 자체가 초기화 전용 함수이므로 값 대입을 막는 const는 불가
	MousePoint() {
		cout << "생성자 호출" << endl;
	}

	MousePoint(int a, int b) {
		x = a;
		y = b;
	}

	// 쓰기 권한
	// 값을 변경하는 경우 const를 붙이지 않음
	void setXY(int a, int b) {
		this->x = a;
		this->y = b;
	}

	int getX() const {
		// 전부 불가
		// const 멤버함수는 const로 지정되지 않은 다른 멤머함수를 호출할 수 없다
		//x = 100;
		//this->setXY(100, 200);
		//setxy(100, 200);

		return x;
	}

	// 읽기 권한 전용인 경우 ... const 가능
	// 값을 변경하지 않는 경우에만 const를 줌
	int getY() const {
		return y;
	}
};

void setRect(MousePoint pt1, MousePoint pt2)
{
	cout << pt1.getX() << ", " << pt1.getY() << endl;
	cout << pt2.getX() << ", " << pt2.getY() << endl;

	pt1.setXY(1000, 2000);
	cout << pt1.getX() << ", " << pt1.getY() << endl;
	cout << pt2.getX() << ", " << pt2.getY() << endl;
}

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
	MousePoint mp1(10, 20);
	MousePoint mp2(30, 40);

	CopyObject(mp1, mp2);

	cout << mp1.getX() << ", " << mp1.getY() << endl;
	cout << mp2.getX() << ", " << mp2.getY() << endl;

	// a라는 변수가 상수화가 되면서 100이라는 값을 가지게 됨
	const int a = 100;
	// a = 200; 따라서 a의 값을 변경하는 것은 불가함

	// const로 인해서 이 안에 있는 값들은 상수화가 됨 => 변경이 불가
	const MousePoint pt(10, 20);
	MousePoint pt2(100, 200);
	// pt = pt2; 복사 대상이 되는 pt가 상수라서 에러 발생

	// 가능
	pt.getX();
	pt.getY();

	// const 객체는 const 멤버함수만 호출 할 수 있다
	// pt.setXY(); 불가
}