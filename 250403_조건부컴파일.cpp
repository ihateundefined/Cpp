#include <iostream>

using namespace std;

// 주석 여부에 따라 전문가 기능이 활성되거나 비활성 됨
//#define professional

void main()
{
#ifdef professional
	// 전문가 기능
	cout << "전문가 기능 버전" << endl;
#else
	// 일반 기능
	cout << "일반 기능 버전" << endl;
#endif
	// 공통 코드
	cout << "공통 코드" << endl;
}