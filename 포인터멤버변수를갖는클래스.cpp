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
	String(char ch, int nSize) {
		// 코드의 안정성 때문에 매개변수를 함수 안에서 직접적으로 사용하지 않는다
		// 매개변수를 내가 선언한 변수에 넘겨주는 과정이 필요
		len = nSize;
		// len + 1 문자열 마지막에 null 들어가야함
		// 문자열 마지막을 알려주기
		pbuf = new char[len + 1];
		// len 만큼을 ch로 채우겠다
		memset(pbuf, ch, len);
		// \0 == null
		pbuf[len] = '\0';

		cout << pbuf << endl;
		cout << len << endl;
	}
}; 

void main()
{
	String str1('A', 3);
	String str2('B', 4);

	//str2 = str1;
	// 소멸자 작동 에러 발생!
}