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
	// pInstance가 클래스 변수이므로 소멸자 호줄하지 않음 ... 프로그램 종료 시에 명시적으로 delete 해준다
	~SingletonClass() {};
	// 단점 극복 위해 늦은 초기화를 한다
	static SingletonClass* getInstance() {
		if (pInstance == NULL) {
			pInstance = new SingletonClass();
		}
		return pInstance;
	}
	void ShowMessage() {
		cout << "싱글톤 패턴" << endl;
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
			cout << "pInstance 해제" << endl;
		}
	}
};

SingletonClass* SingletonClass::pInstance = NULL;

void main()
{
	// pointer니까 -> 화살표 이용
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