/*
* 앞에서 작성한 Phone 클래스를 이용
* 멤버함수 Send의 기능은 외부로부터 데이터를 전달인자로 받아 값을 멤버변수 sms에 대입
* 멤버함수 Receive의 기능은 현재 멤버변수 sms의 값을 리턴하도록 구현
* 멤버변수 sms의 타입은 int로 한다.
*/

#include <iostream>

using namespace std;

class Phone
{
public:
	Phone();
	~Phone();

	void Send(int data) {
		cout << data << " 번호로 전화를 겁니다" << endl;
		sms = data;
	}

	int Receive() {
		cout << sms << "로 걸려온 전화를 받았습니다" << endl;
		return sms;
	}

	void Call() {
		cout << "전화를 걸었습니다" << endl;
	}

private:
	int num;
	int shape;
	int sms;
};

Phone::Phone()
{
}

Phone::~Phone()
{
}

void main()
{
	Phone ph;

	int data;

	cout << "전화를 걸겠습니다. 정수 한개 입력하세요." << endl;
	cin >> data;

	ph.Send(data);
	ph.Call();
	ph.Receive();
}