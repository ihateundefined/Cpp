#include <iostream>

using namespace std;

class SingletonClass
{
private:
	// 정적 변수, 정적 싱글톤
	static SingletonClass instance;
	SingletonClass() {};
public:
	~SingletonClass() {};
	static SingletonClass& getInstance() {
		return instance;
	}
	void ShowMessage() {
		cout << "싱글톤 패턴" << endl;
	}
};

SingletonClass SingletonClass::instance;

void main()
{
	// 생성자 자체를 private으로 옮겨서 인스턴스 생성 못하게 막음
	//SingletonClass* instance = new SingletonClass();
	SingletonClass::getInstance().ShowMessage(); // instance
	// 단점 극복 위해 늦은 초기화를 한다
}