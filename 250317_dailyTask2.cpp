/*
* 1. Counter Ŭ������ ���
* 2. Counter Ŭ������ count�� 1�� ������Ű�� �Լ��� �ۼ�
* 3. main() �Լ� �ȿ��� �� �Լ��� ȣ�� �� count ���� ���
* 4. 1�� �����ϴ� �Լ� �̸��� Increase()
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
	static int Increase() {
		return ++count;
	}
};

int Counter::count = 10;

void main()
{
	cout << "counter �ʱⰪ >> " << Counter::getCount() << endl;
	cout << "increase ȣ��1 >> " << Counter::Increase() << endl;
	cout << "increase ȣ��2 >> " << Counter::Increase() << endl;
	cout << "increase ȣ��3 >> " << Counter::Increase() << endl;
}