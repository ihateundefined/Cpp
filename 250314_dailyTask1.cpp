/*
* 앞에서 작성한 Person 클래스 사용
* 배열의 길이가 3인 객체 포인터 배열을 선언
* 각 객체에 이름과 나이 데이터를 대입
* 대입한 배열의 내용을 모두 출력
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
		cout << "이름은 >> " << pt[i]->GetName() << endl;
		cout << "나이는 >> " << pt[i]->GetAge() << endl;
	}

	for (int i = 0; i < 3; i++) {
		delete pt[i];
	}
}