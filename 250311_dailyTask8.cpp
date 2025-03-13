/*
* Person 클래스의 객체 배열을 선언하고 초기화하라.
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
		cout << "이름: " << arr[i].name << ", 나이: " << arr[i].age << endl;
	}
}