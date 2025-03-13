#include <iostream>

using namespace std;

class MousePoint
{
private:
	int x;
	int y;

public:
	MousePoint(int a, int b)
	{
		x = a;
		y = b;
	}

	MousePoint()
	{
		cout << "default 생성자 호출 " << endl;
		x = 0;
		y = 0;
	}

	~MousePoint()
	{
		cout << "소멸자 호출 " << endl;
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
	MousePoint point(10, 20);
	MousePoint pointDefault;
	cout << "생성자 " << point.getX() << " " << point.getY() << endl;
}