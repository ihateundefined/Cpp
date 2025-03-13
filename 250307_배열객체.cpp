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
	//MousePoint pt[3];
		
	// 초기화
	MousePoint pt[3] = { 
		MousePoint (10, 20), 
		MousePoint(100, 200), 
		MousePoint(1000, 2000)
	};
	
	// pt[0].setXY(100, 200);
	cout << "x는 " << pt[0].getX() << endl;
	cout << "y는 " << pt[0].getY() << endl;
	cout << "x는 " << pt[1].getX() << endl;
	cout << "y는 " << pt[1].getY() << endl;
	cout << "x는 " << pt[2].getX() << endl;
	cout << "y는 " << pt[2].getY() << endl;

	cout << "**********************" << endl;

	// 반복문!
	for (int i = 0; i < 3; i++)
	{
		cout << "x는 " << pt[i].getX() << endl;
		cout << "y는 " << pt[i].getY() << endl;
	}
}