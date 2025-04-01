#include <iostream>
#include <memory>

using namespace std;

/*
	double* rate = new double();
	*rate = 3.14;

	cout << rate << endl;
	delete rate;
*/


void main()
{
	auto_ptr<double> rate(new double);
	*rate = 3.14;

	cout << *rate << endl;

	// rate는 실제 포인터가 아니고 객체임 ... delete 필요 없음
	// delete rate;
}