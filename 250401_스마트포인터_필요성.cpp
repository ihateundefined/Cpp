#include <iostream>

using namespace std;

/*
// 기본 포인터 변수
void main()
{
	double* rate = new double();
	*rate = 3.14;

	cout << rate << endl;
	delete rate;
}
*/

// 숫자 나누기
void main()
{
	int* a;
	int b;
	cout << "나누는 수 입력 >> ";
	cin >> b;

	/*
	// heap 메모리에 4바이트 공간 할당받아서 10이라는 값을 집어 넣음
	a = new int(10);
	
	// 그런데 a/b할때, b가 0이면 문제가 발생 .. if문 사용
	if (b == 0) {
	} else {
		cout << "나누기 결과 >> " << *a / b << endl;
	}
	*/

	// 지저분하니까 try-catch 구문으로 예외처리 해주기
	try {
		a = new int(10);

		if (b == 0) {
			// throw 발생 시, delete a 실행 안되서 메모리 누수 발생
			throw b;
		}
		
		cout << "나누기 결과 : " << *a / b << endl;
		
		delete a;
	}
	catch (int ex) {
		cout << "나누어야 할 수 는 " << ex << "이므로 연산 수행 불가" << endl;
	}
}