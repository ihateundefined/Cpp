/*
* 1. Counter Ŭ������ ����
* 2. ��� ��ü���� ������ �� �ִ� static ��� ���� count�� ����
* 3. count�� �ʱⰪ�� 10
* 4. main() �Լ����� count ���� ���
*/

#include <iostream>

using namespace std;

class Counter {
private:
	static int count;

public:
	Counter() {

	}
	~Counter() {

	}
	static int getCount() {
		return count;
	}
};

int Counter::count = 10;

void main()
{
	cout << Counter::getCount() << endl;
}