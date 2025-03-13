/*
* �տ��� �ۼ��� Person Ŭ���� ���
* Person Ŭ������ ��ü �迭�� new �����ڸ� ����Ͽ� �������� ����
* �� ��ҿ� �̸��� ������ ���� ���� ����
* �迭�� ��Ҹ� ��� ���
* new, delete ��뿡 ����
*/

#include <iostream>

using namespace std;

class Person
{
public:
	const char* name;
	int age;

	Person() {
		cout << "������" << endl;
	};
	~Person() {
		cout << "�Ҹ���" << endl;
	};
	Person(const char* name, int age) {
		this->name = name;
		this->age = age;
		cout << "������" << endl;
	}
};

void main()
{
	Person *pArr[3];

	pArr[0] = new Person("amy", 12);
	pArr[1] = new Person("tom", 34);
	pArr[2] = new Person("jacob", 56);

	for (int i = 0; i < 3; i++) {
		cout << "�̸��� >> " << pArr[i]->name << endl;
		cout << "���̴� >> " << pArr[i]->age << endl;
	}

	for (int i = 0; i < 3; i++) {
		delete pArr[i];
	}
}