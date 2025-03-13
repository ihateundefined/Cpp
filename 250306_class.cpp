#include <iostream>

// 구조체
struct MouseStruct
{
	int x;
	int y;
};

using namespace std;

// 클래스
// 내부에 변수 선언(private), 함수 정의
// 접근지정자를 설정해준다
// 적어주지 않으면 default가 private임
class MousePoint
{
	// private : 밑은 전부 private 적용
	// 캡슐화가 되어있어 직접 접근이 불가
	private:
		int x;
		int y;

	public:
		void setXY(int a, int b) {
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
	// 표준타입으로 선언한 걸 '변수'
	// 사용자 정의 타입 user (클래스)로 선언한 걸 '객체'
	// 객체의 본질은 변수임
	int a; // 4바이트 할당
	// MousePoint 클래스 내부에 변수 2개니까
	MousePoint point; // 이렇게 적는 순간 8바이트 할당
	point.setXY(10, 20);
	cout << "class의 get() " << point.getX() << point.getY() << endl;

	MouseStruct pointStruct = { 10, 20 };
	cout << "struct 사용" << pointStruct.x << " " << pointStruct.y << endl;
}