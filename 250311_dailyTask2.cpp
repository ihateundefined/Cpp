/*
* 개에 대한 클래스를 작성하시오.
* 클래스 이름은 Dog
* 멤버변수는 눈(eyes), 코(nose), 입(mouth), 멤버함수는 짖다(Bark), 달리다(Run), 자다(Sleep)로 정의
* 
* 기본 형태
* public class Dog {
* };
* 
* void main() {
*   Dog dog;
* }
*/

#include <iostream>

using namespace std;

class Dog
{
public:
	Dog();
	~Dog();

	void Bark() {
		cout << "짖다" << endl;
	}

	void Run() {
		cout << "달리다" << endl;
	}

	void Sleep() {
		cout << "잔다" << endl;
	}

private:
	int eyes;
	int nose;
	int mouth;
};

Dog::Dog()
{
	cout << "생성자 작동" << endl;
}

Dog::~Dog()
{
	cout << "소멸자 작동" << endl;
}

void main()
{
	Dog dog;

	dog.Bark();
	dog.Run();
	dog.Sleep();
}