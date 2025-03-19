#include <iostream>

using namespace std;

class CStack {
private:
	int* p;
	int size;
public:
	CStack(int sz) {
		size = sz;
		p = new int[size];
	}
	~CStack() {
		delete[] p;
	}
	void push(int a) {
		// *p에 a를 대입하고, 다음 메모리로 이동
		*p++ = a;
	}
	int pop() {
		return *(--p);
	}
};

void main()
{
	CStack sp(5);
	sp.push(3);
	sp.pop();
}