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
	/*
	// 동적 메모리 할당하는 방법 시작
	// void pointer -> 어떤 값이 들어올지 모르니까 -> 주소값을 넘김
	// pbuf = (int*)malloc(100);
	
	// 10으로 초기화를 한다? -> 주소값을 넘겨준다?
	// pbuf = new int(10); .. 4 byte에 10이 들어간 것
	// pbuf = new int[10]; .. 4 byte짜리 int가 10개 생김 -> 40 byte
	
	// 사용자가 동적 메모리 할당 요청
	// pbuf = new int[3];
	
	int len = 0;
	int* pbuf;

	cout << "할당할 메모리 수 : ";
	cin >> len;

	pbuf = new int[len];

	for (int i = 0; i < len; i++)
	{
		pbuf[i] = i+1;
	}

	for (int i = 0; i < len; i++)
	{
		cout << pbuf[i] << endl;
	}

	delete[] pbuf;

	// pbuf[0] = 1;
	// pbuf[1] = 2;
	// pbuf[2] = 3;
	
	// cout << pbuf[0] << endl;
	// cout << pbuf[1] << endl;
	// cout << pbuf[2] << endl;
	*/
	
	/*
	// 클래스를 사용하여 동적 메모리 할당하기
	// 정적 메모리 할당
	MousePoint pt1(10, 20);

	// 동적 메모리 할당
	// new 연산자는 주소값만 돌려준다
	// 앞으로는 이것만 사용
	MousePoint *pt2 = new MousePoint(10, 20);
	cout << pt2->getX() << pt2->getY() << endl;
	delete pt2;
	*/
}