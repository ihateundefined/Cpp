#include <iostream>

using namespace std;

class MousePoint
{
	// private : 밑은 전부 private 적용
	// 캡슐화가 되어있어 직접 접근이 불가
private:
	int x;
	int y;

public:
	// 생성자 오버로딩
	// default 생성자
	MousePoint()
	{
		cout << "default" << endl;
	}

	MousePoint(int a, int b)
	{
		x = a;
		y = b;
	}

	// 소멸자는 클래스 이름과 같게 하고 앞에 ~
	~MousePoint()
	{
		cout << "destructor" << endl;
	}

	int getX() {
		return x;
	}

	int getY() {
		return y;
	}
};

void main()
{
	MousePoint pointDefault;
	cout << "default 생성자 " << pointDefault.getX() << " " << pointDefault.getY() << endl;
	MousePoint point(10, 20); // 
	cout << "생성자 " << point.getX() << " " << point.getY() << endl;
}