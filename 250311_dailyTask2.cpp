/*
* ���� ���� Ŭ������ �ۼ��Ͻÿ�.
* Ŭ���� �̸��� Dog
* ��������� ��(eyes), ��(nose), ��(mouth), ����Լ��� ¢��(Bark), �޸���(Run), �ڴ�(Sleep)�� ����
* 
* �⺻ ����
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
		cout << "¢��" << endl;
	}

	void Run() {
		cout << "�޸���" << endl;
	}

	void Sleep() {
		cout << "�ܴ�" << endl;
	}

private:
	int eyes;
	int nose;
	int mouth;
};

Dog::Dog()
{
	cout << "������ �۵�" << endl;
}

Dog::~Dog()
{
	cout << "�Ҹ��� �۵�" << endl;
}

void main()
{
	Dog dog;

	dog.Bark();
	dog.Run();
	dog.Sleep();
}