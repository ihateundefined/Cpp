/*
* 1. Counter 클래스를 기반
* 2. Counter 클래스에 count를 1씩 증가시키는 함수를 작성
* 3. main() 함수 안에서 이 함수를 호출 및 count 값을 출력
* 4. 1씩 증가하는 함수 이름은 Increase()
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
	static int Increase() {
		return ++count;
	}
};

int Counter::count = 10;

void main()
{
	cout << "counter 초기값 >> " << Counter::getCount() << endl;
	cout << "increase 호출1 >> " << Counter::Increase() << endl;
	cout << "increase 호출2 >> " << Counter::Increase() << endl;
	cout << "increase 호출3 >> " << Counter::Increase() << endl;
}