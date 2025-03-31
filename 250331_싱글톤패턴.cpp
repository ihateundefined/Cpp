#include <iostream>

using namespace std;

class SingletonClass
{
private:
	// ���� ����, ���� �̱���
	static SingletonClass instance;
	SingletonClass() {};
public:
	~SingletonClass() {};
	static SingletonClass& getInstance() {
		return instance;
	}
	void ShowMessage() {
		cout << "�̱��� ����" << endl;
	}
};

SingletonClass SingletonClass::instance;

void main()
{
	// ������ ��ü�� private���� �Űܼ� �ν��Ͻ� ���� ���ϰ� ����
	//SingletonClass* instance = new SingletonClass();
	SingletonClass::getInstance().ShowMessage(); // instance
	// ���� �غ� ���� ���� �ʱ�ȭ�� �Ѵ�
}