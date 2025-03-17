/*
* 1. Counter 클래스를 기반
* 2. 생성자와 소멸자를 작성 후 생성된 객체의 수를 추적하는 코드를 작성
* 3. 객체 생성 갯수만큼 count가 증가
* 4. 객체 소멸 갯수만큼 count가 감소
* 5. 결과를 화면에 출력하기
*/

#include <iostream>

using namespace std;

class Counter {
private:
	static int count;

public:
	Counter() {
		++count;
		cout << "생성자 갯수 >> " << count << endl;
	}
	~Counter() {
		--count;
		cout << "소멸자 갯수 >> " << count << endl;
	}
	static int getCount() {
		return count;
	}
};

int Counter::count = 0;

void main()
{
	cout << "생성자 수 추적하기 시작!" << endl;
	Counter c1;
	Counter c2;
	Counter c3;
	Counter c4;
	Counter c5;

	cout << "모든 객체가 생성된 후의 상태:" << endl;
	Counter::getCount();

	cout << "main() 함수 종료 -> 객체가 소멸하면서 소멸자 호출 시작!" << endl;
}