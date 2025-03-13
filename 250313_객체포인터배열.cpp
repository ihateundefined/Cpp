#include <iostream>

using namespace std;

class MousePoint
{
private:
	int x;
	int y;

public:
	MousePoint() {
		cout << "생성자 호출" << endl;
	}

	MousePoint(int a, int b) {
		x = a;
		y = b;
	}

	void setXY(int a, int b) {
		this->x = a;
		this->y = b;
	}

	int getX() const {
		return x;
	}

	int getY() const {
		return y;
	}
};

void main()
{
	MousePoint* pArr[3];
	pArr[0] = new MousePoint(10, 20);
	pArr[1] = new MousePoint(100, 200);
	pArr[2] = new MousePoint(1000, 2000);

	for (int i = 0; i < 3; i++) {
		cout << pArr[i]->getX() << pArr[i]->getY() << endl;
	}

	for (int i = 0; i < 3; i++) {
		delete pArr[i];
	}
}