/*
* �տ��� �ۼ��� Phone Ŭ������ �̿�
* ��ü �����͸� �� �� ����
* �� ��ü �����Ϳ� ������ �������ڰ� 1���� ��ü�� �ּҰ��� �Ѱ��ش�.
* �� ��ü �����ʹ� ��ü�� ������ �Ѱܹ��� ���̴�.
* �� ��ü �����͸� �̿��Ͽ� ������ ��ü ���� �� �ʱⰪ�� ����غ���.
* 
* ���� ��)
* Phone* pObj;
* Phone ph("�и����Ÿ� ������.");
*/

#include <iostream>

using namespace std;

class Phone
{
public:
	Phone();
	Phone(string msg) {
		message = msg;
	}
	~Phone();
		
	void Send() {
		cout << message << endl;
	}
private:
	string message;
};

Phone::Phone() {
}

Phone::~Phone() {
}

void main()
{
	Phone* pObj;
	Phone ph("�и����Ÿ� ������.");
	pObj = &ph;

	pObj->Send();
}
