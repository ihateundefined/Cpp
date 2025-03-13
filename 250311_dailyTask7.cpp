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
	MousePoint() {
		cout << "생성자" << endl;
	};

	MousePoint(int a, int b) {
		x = a;
		y = b;
		
		cout << "생성자" << endl;
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

	~MousePoint() {
		cout << "소멸자" << endl;
	};

private:
	int x;
	int y;
};

void main()
{
	MousePoint* pt;
	pt = new MousePoint(100, 200);

	cout << "멤버 변수 출력 >> " << pt->getX() << endl;
	cout << "멤버 변수 출력 >> " << pt->getY() << endl;

	delete pt;
}
