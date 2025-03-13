/*
* Person Ŭ������ ��ü �迭�� �����ϰ� �ʱ�ȭ�϶�.
* ex)
* class Person {
* public:
* char* name;
* int age;
* };
*/

#include <iostream>

using namespace std;

class Person
{
public:
	const char* name;
	int age;

	Person();
	Person(const char* name, int age) {
		this->name = name;
		this->age = age;
	}
	~Person();

private:

};

Person::Person()
{
}

Person::~Person()
{
}

void main()
{
	Person arr[2] = {
		Person("AB", 10),
		Person("BC", 20)
	};

	for (int i = 0; i < 2; i++) {
		cout << "�̸�: " << arr[i].name << ", ����: " << arr[i].age << endl;
	}
}