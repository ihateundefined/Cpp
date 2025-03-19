#include <iostream>

using namespace std;

// 컴파일러는 T 형일때 해석 하지 않고, 객체가 생성되었을 때 그 때 해석한다
template<class T>

class CStack {
private:
	T* p;
	int size;
public:
	CStack(T sz) {
		size = sz;
		p = new T[size];
	}
	~CStack() {
		delete[] p;
	}
	void push(T a) {
		*p++ = a;
	}
	T pop() {
		return *(--p);
	}
};

void main()
{
	CStack<int> sp(5);

	for (int i = 0; i < 5; i++)
	{
		sp.push(i + 1);
	}

	for (int i = 0; i < 5; i++)
	{
		cout << sp.pop() << endl;
	}
}