/*
* ���� ���� Ŭ������ �ۼ��Ͻÿ�.
* Ŭ���� �̸��� Phone
* ��������� ��ȣ(num), ���(shape), ����Լ��� ���ں�����(Send), ���ڹޱ�(Receive), ��ȭ�ɱ�(Call) �� ����
* 
* public class Phone {
* };
* 
* void main() {
*   Phone ph;
* };
*/

#include <iostream>

using namespace std;

class Phone
{
public:
	Phone();
	~Phone();
	void Send() {
		cout << "��ȭ���� �︮�� ��" << endl;
	}

	void Receive() {
		cout << "��ȭ�� �޾ҽ��ϴ�" << endl;
	}

	void Call() {
		cout << "��ȭ�� �ɾ����ϴ�" << endl;
	}

private:
	int num;
	int shape;
};

Phone::Phone()
{
}

Phone::~Phone()
{
}

void main()
{
	Phone ph;

	ph.Call();
	ph.Send();
	ph.Receive();
}