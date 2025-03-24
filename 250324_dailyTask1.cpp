/*
* String 클래스를 기반
* MyString 클래스라는 이름으로 새로 생성
* 기능은 String과 동일
* 두 개의 객체 str1과 str2를 선언
* str1 생성 시 생성자의 전달인자는 (‘A’, 5)
* str2 생성 시 생성자의 전달인자는 (‘Z’, 10)
* str1에 str2를 대입 (str1 = str2)
* 대입이 된 str1의 멤버변수를 화면에 출력
* 대입 시 문제가 발생하였다면 대입 연산자 오버로딩을 통해 문제를 해결하도록
*/

#include <iostream>

using namespace std;

class MyString
{
private:
	char* pbuf;
	int len;
public:
	MyString() {}
	~MyString() {
		delete[] pbuf;
	}
	MyString(char ch, int nSize) {
		len = nSize;
		pbuf = new char[len + 1];
		memset(pbuf, ch, len);
		pbuf[len] = '\0';

		cout << "생성자 >> " << pbuf << endl;
		cout << "생성자 >> " << len << endl;
	}
	void operator=(const MyString& s)
	{
		if (&s == this)
			return;

		delete this->pbuf;
		this->len = s.len;
		this->pbuf = new char[this->len + 1];
		strcpy_s(this->pbuf, len + 1, s.pbuf);
	}
	void getData()
	{
		cout << "pbuf >> " << this->pbuf << endl;
		cout << "len >> " << this->len << endl;
	}
};

void main()
{
	MyString str1('A', 5);
	MyString str2('Z', 10);

	str1 = str2;

	str1.getData();
	str2.getData();
}