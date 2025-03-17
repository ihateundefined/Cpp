/*
* 1. Counter Ŭ������ ���
* 2. �����ڿ� �Ҹ��ڸ� �ۼ� �� ������ ��ü�� ���� �����ϴ� �ڵ带 �ۼ�
* 3. ��ü ���� ������ŭ count�� ����
* 4. ��ü �Ҹ� ������ŭ count�� ����
* 5. ����� ȭ�鿡 ����ϱ�
*/

#include <iostream>

using namespace std;

class Counter {
private:
	static int count;

public:
	Counter() {
		++count;
		cout << "������ ���� >> " << count << endl;
	}
	~Counter() {
		--count;
		cout << "�Ҹ��� ���� >> " << count << endl;
	}
	static int getCount() {
		return count;
	}
};

int Counter::count = 0;

void main()
{
	cout << "������ �� �����ϱ� ����!" << endl;
	Counter c1;
	Counter c2;
	Counter c3;
	Counter c4;
	Counter c5;

	cout << "��� ��ü�� ������ ���� ����:" << endl;
	Counter::getCount();

	cout << "main() �Լ� ���� -> ��ü�� �Ҹ��ϸ鼭 �Ҹ��� ȣ�� ����!" << endl;
}