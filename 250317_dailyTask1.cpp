/*
* 1. Counter 클래스를 정의
* 2. 모든 객체에서 공유할 수 있는 static 멤버 변수 count를 선언
* 3. count의 초기값은 10
* 4. main() 함수에서 count 값을 출력
*/

#include <iostream>

using namespace std;

class Counter {
private:
	static int count;

public:
	Counter() {

	}
	~Counter() {

	}
	static int getCount() {
		return count;
	}
};

int Counter::count = 10;

void main()
{
	cout << Counter::getCount() << endl;
}