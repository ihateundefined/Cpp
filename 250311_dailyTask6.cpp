/*
* 앞에서 작성한 Phone 클래스를 이용
* 객체 포인터를 한 개 선언
* 이 객체 포인터에 생성한 전달인자가 1개인 객체의 주소값을 넘겨준다.
* 이 객체 포인터는 객체의 전권을 넘겨받은 것이다.
* 이 객체 포인터를 이용하여 현재의 객체 생성 시 초기값을 출력해보자.
* 
* 선언 예)
* Phone* pObj;
* Phone ph("분리수거를 잘하자.");
*/

#include <iostream>

using namespace std;

class Phone
{
public:
	Phone();
	Phone(string msg) {
		message = msg;
	}
	~Phone();
		
	void Send() {
		cout << message << endl;
	}
private:
	string message;
};

Phone::Phone() {
}

Phone::~Phone() {
}

void main()
{
	Phone* pObj;
	Phone ph("분리수거를 잘하자.");
	pObj = &ph;

	pObj->Send();
}
