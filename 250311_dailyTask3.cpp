/*
* 다음의 Draw 함수를 오버로딩 하시오.
* 삼각형 그리기, 사각형 그리기, 원 그리기 기능을 가진 3개의 함수를 오버로딩
* 사각형 (int left, int top, int right, int bottom)
* 원(int x, int y, int radian)
*/

#include <iostream>

using namespace std;

void Draw(int first, int second, int third) {
	cout << "삼각형 그리기 >> " << first << second << third << endl;
}

void Draw(int left, int top, int right, int bottom) {
	cout << "사각형 그리기 >> " << left << top << right << bottom << endl;
}

void Draw(int x, int y, double radian) {
	cout << "원 그리기 >> " << x << y << radian << endl;
}

void main()
{
	int a;
	int b;
	int c;
	int d;
	double e;
		
	cout << "정수 4개 입력하기 >>> " << endl;
	cin >> a >> b >> c >> d;
	Draw(a, b, c, d);

	cout << "정수 3개 입력하기 >>> " << endl;
	cin >> a >> b >> c;
	Draw(a, b, c);

	cout << "정수 2개, 소수 1개 입력하기 >>> " << endl;
	cin >> a >> b >> e;
	Draw(a, b, e);
}