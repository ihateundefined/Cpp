/*
* 도형을 그리는 클래스를 정의
* 클래스 이름은 Shape 
* 도형을 그릴때는 반드시 기준좌표(중심좌표) x, y가 필요하다.
* 클래스 Shape의 멤버변수로 기준좌표 x, y를 포함한다. 
* Shape 생성자는 전달인자 두 개를 갖도록 하고, 생성자에서 멤버변수를 초기화한다.
* Shape 클래스를 정의하기
*/

#include <iostream>

using namespace std;

class Shape {
private:
	int x;
	int y;
public:
	Shape() {

	}
	~Shape() {

	}
	Shape(int a, int b) {
		x = a;
		y = b;
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
	Shape sp1(10, 20);
	cout << sp1.getX() << sp1.getY() << endl;
}