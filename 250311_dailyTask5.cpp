/*
* �տ��� �ۼ��� Phone Ŭ������ �̿�
* ����Լ� Send�� ����� �ܺηκ��� �����͸� �������ڷ� �޾� ���� ������� sms�� ����
* ����Լ� Receive�� ����� ���� ������� sms�� ���� �����ϵ��� ����
* ������� sms�� Ÿ���� int�� �Ѵ�.
*/

#include <iostream>

using namespace std;

class Phone
{
public:
	Phone();
	~Phone();

	void Send(int data) {
		cout << data << " ��ȣ�� ��ȭ�� �̴ϴ�" << endl;
		sms = data;
	}

	int Receive() {
		cout << sms << "�� �ɷ��� ��ȭ�� �޾ҽ��ϴ�" << endl;
		return sms;
	}

	void Call() {
		cout << "��ȭ�� �ɾ����ϴ�" << endl;
	}

private:
	int num;
	int shape;
	int sms;
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

	int data;

	cout << "��ȭ�� �ɰڽ��ϴ�. ���� �Ѱ� �Է��ϼ���." << endl;
	cin >> data;

	ph.Send(data);
	ph.Call();
	ph.Receive();
}