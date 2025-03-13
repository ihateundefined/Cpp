// input, output
#include <iostream>

/*
// 기본 출력 테스트
// :: scope 영역결정연산자
void main()
{
	std::cout << "Hello C++" << std::endl;
}
*/

/*
// C++ 기본 구조
void main()
{
	int a = 10;
	double b = 3.14f;
	char c = 'A';

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
}
*/

/*
// namespace
// std:: 더 이상 사용하지 않음
using namespace std;

namespace A
{
	void func()
	{
		cout << "A학급 주성아" << endl;
	}
}

namespace B
{
	void func()
	{
		std::cout << "B학급 주성아" << std::endl;
	}
}

void main()
{
	A::func();
	B::func();
}
*/

/*
using namespace std;

// cin 입력 받기
void main()
{
	int a = 10;
	double b = 3.14f;
	char c = 'A';

	cin >> a;
	cout << a << endl;
	cin >> b;
	cout << b << endl;
	cout << c << endl;
}
*/

/*
using namespace std;

// 함수 선언
void func(int a, int b);

// 함수 호출
void main()
{
	func(1, 100);
}

// 함수 정의
void func(int a, int b)
{
	cout << a << b << endl;
}
*/

/*
using namespace std;

// 함수를 선언하면서 기본값을 넣어주는 경우
// 기본 매개변수 값 Default Arguments
void func(int a=20, int b=30);

// 함수 호출의 다양한 예
void main()
{
	func();
	func(10);
	func(1, 100);
}

// 함수 정의
void func(int a, int b)
{
	cout << a << b << endl;
}
*/

/*
// 지역변수, 전역변수
// C언어에서는 로컬에서 전역 호출이 불가 => 절차적 특성때문
int temp = 10;

void main()
{
	{
		printf("temp1 >> %d\n", temp);

		// 지역변수
		int temp = 20;
		printf("temp2 >> %d\n", temp);
		// 중괄호가 닫히면서 스택 메모리에 할당된 지역변수는 사라진다
		printf("temp3 >> %d\n", temp);
	}
	printf("temp >> %d\n", temp);
}
*/

/*
// C++에서 전역변수, 지역변수 
using namespace std;

int temp = 10;

void main()
{
	{
		int temp = 20;
		cout << temp << endl;
		// scope 앞에 명시가 되어있지 않다 => global 의미
		cout << ::temp << endl;
	}
	cout << temp << endl;
}
*/

/*
// 인라인 함수
using namespace std;

// 
inline void print()
{
	cout << "inline 함수" << endl;
}

void main()
{
	// inline 사용 시, 컴파일 할 때 아래와 같이 해석하지 않고
	print();
	print();
	print();

	// 아래와 같이 해석 => 속도가 빠름
	cout << "inline 함수" << endl;
	cout << "inline 함수" << endl;
	cout << "inline 함수" << endl;
}
*/