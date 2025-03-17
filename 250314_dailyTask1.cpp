/*
* �տ��� �ۼ��� Person Ŭ���� ���
* �迭�� ���̰� 3�� ��ü ������ �迭�� ����
* �� ��ü�� �̸��� ���� �����͸� ����
* ������ �迭�� ������ ��� ���
* Person *pt[3]
*/

#include <iostream>

using namespace std;

class Person
{
private:
	const char* name;
	int age;

public:
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
	const char* GetName() {
		return name;
	}
	int GetAge() {
		return age;
	}
};

void main()
{
	Person *pt[3];

	pt[0] = new Person("amy", 12);
	pt[1] = new Person("tom", 34);
	pt[2] = new Person("jacob", 56);

	for (int i = 0; i < 3; i++) {
		cout << "�̸��� >> " << pt[i]->GetName() << endl;
		cout << "���̴� >> " << pt[i]->GetAge() << endl;
	}

	for (int i = 0; i < 3; i++) {
		delete pt[i];
	}
}