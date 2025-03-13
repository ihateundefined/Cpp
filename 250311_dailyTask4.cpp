/*
* 폰에 대한 클래스를 작성하시오.
* 클래스 이름은 Phone
* 멤버변수는 번호(num), 모양(shape), 멤버함수는 문자보내기(Send), 문자받기(Receive), 전화걸기(Call) 로 정의
* 
* public class Phone {
* };
* 
* void main() {
*   Phone ph;
* };
*/

#include <iostream>

using namespace std;

class Phone
{
public:
	Phone();
	~Phone();
	void Send() {
		cout << "전화벨이 울리는 중" << endl;
	}

	void Receive() {
		cout << "전화를 받았습니다" << endl;
	}

	void Call() {
		cout << "전화를 걸었습니다" << endl;
	}

private:
	int num;
	int shape;
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

	ph.Call();
	ph.Send();
	ph.Receive();
}