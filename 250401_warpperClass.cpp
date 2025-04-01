#include <iostream>

using namespace std;

template <class T>
class SmartPointer {
private:
	T* p;
public:
	SmartPointer(T* sp) {
		p = sp;
	}
	~SmartPointer() {
		delete p;
	}
	// 연산자 오버로딩
	T operator*() {
		return *p;
	}
	T* operator->() const {
		return p;
	}
};

void main()
{
	SmartPointer<string> pStr(new string("test"));

	cout << *pStr << endl;
	cout << pStr->length() << endl;
}