/*
* 앞에서 작성한 Person 클래스 사용
* Person 클래스로 객체 배열을 new 연산자를 사용하여 동적으로 생성
* 각 요소에 이름과 나이의 값을 각각 대입
* 배열의 요소를 모두 출력
* new, delete 사용에 주의
*/

#include <iostream>

using namespace std;

class Person
{
public:
	const char* name;
	int age;

	Person() {
		cout << "생성자" << endl;
	};
	~Person() {
		cout << "소멸자" << endl;
	};
	Person(const char* name, int age) {
		this->name = name;
		this->age = age;
		cout << "생성자" << endl;
	}
};

void main()
{
	Person *pArr[3];

	pArr[0] = new Person("amy", 12);
	pArr[1] = new Person("tom", 34);
	pArr[2] = new Person("jacob", 56);

	for (int i = 0; i < 3; i++) {
		cout << "이름은 >> " << pArr[i]->name << endl;
		cout << "나이는 >> " << pArr[i]->age << endl;
	}

	for (int i = 0; i < 3; i++) {
		delete pArr[i];
	}
}