#include <iostream>

using namespace std;

class String
{
private:
	char* pbuf;
	int len;
public:
	String(){}
	~String(){
		delete[] pbuf;
		cout << "소멸자에서 메모리 해제" << endl;
	}

	// 생성자 오버로딩
	String(char ch, int nSize) {
		len = nSize;
		pbuf = new char[len + 1];
		memset(pbuf, ch, len);
		pbuf[len] = '\0';

		cout << pbuf << endl;
		cout << len << endl;
	}

	// 대입 연산자 오버로딩
	void operator=(const String& s)
	{
		if (&s == this)
			return;

		// 1. 기존 메모리 해제
		delete this->pbuf;
		// 2. 메모리 사이즈를 복사
		this->len = s.len;
		// 3. 새로운 메모리 할당
		this->pbuf = new char[this->len + 1];
		// 4. 데이터 복사
		strcpy_s(this->pbuf, len+1, s.pbuf);
	}
	void getData()
	{
		cout << "pbuf >> " << this->pbuf << endl;
		cout << "len >> " << this->len << endl;
	}
}; 

void main()
{
	// 대입 연산자 오버로딩
	String str1('A', 3);
	String str2('B', 4);

	str2.getData();

	// 소멸자 작동 에러 발생!
	// 이를 해결하기 위해 대입 연산자 오버로딩
	str2 = str1;
	//str2.operator=(str1); // 위 라인과 이 라인은 같은 내용...

	str2.getData();
}