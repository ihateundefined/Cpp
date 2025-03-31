#include <iostream>

using namespace std;

class SingletonClass
{
private:
	int total;
	static SingletonClass* pInstance;
	SingletonClass() {
		total = 0;
	};
public:
	// pInstance�� Ŭ���� �����̹Ƿ� �Ҹ��� ȣ������ ���� ... ���α׷� ���� �ÿ� ��������� delete ���ش�
	~SingletonClass() {};
	// ���� �غ� ���� ���� �ʱ�ȭ�� �Ѵ�
	static SingletonClass* getInstance() {
		if (pInstance == NULL) {
			pInstance = new SingletonClass();
		}
		return pInstance;
	}
	void ShowMessage() {
		cout << "�̱��� ����" << endl;
	}
	void addValue(int value) {
		total += value;
	}
	int getTotalValue() {
		return total;
	}
	void destroy() {
		if (pInstance != NULL) {
			delete pInstance;
			pInstance = NULL;
			cout << "pInstance ����" << endl;
		}
	}
};

SingletonClass* SingletonClass::pInstance = NULL;

void main()
{
	// pointer�ϱ� -> ȭ��ǥ �̿�
	//SingletonClass::getInstance()->ShowMessage(); // instance

	SingletonClass* ins1 = SingletonClass::getInstance();
	SingletonClass* ins2 = SingletonClass::getInstance();
	SingletonClass* ins3 = SingletonClass::getInstance();

	ins1->addValue(10);
	cout << "total : " << ins1->getTotalValue() << endl;
	ins2->addValue(10);
	cout << "total : " << ins2->getTotalValue() << endl;
	ins3->addValue(10);
	cout << "total : " << ins3->getTotalValue() << endl;

	SingletonClass::getInstance()->destroy();
}