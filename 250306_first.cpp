// input, output
#include <iostream>

/*
// �⺻ ��� �׽�Ʈ
// :: scope ��������������
void main()
{
	std::cout << "Hello C++" << std::endl;
}
*/

/*
// C++ �⺻ ����
void main()
{
	int a = 10;
	double b = 3.14f;
	char c = 'A';

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
}
*/

/*
// namespace
// std:: �� �̻� ������� ����
using namespace std;

namespace A
{
	void func()
	{
		cout << "A�б� �ּ���" << endl;
	}
}

namespace B
{
	void func()
	{
		std::cout << "B�б� �ּ���" << std::endl;
	}
}

void main()
{
	A::func();
	B::func();
}
*/

/*
using namespace std;

// cin �Է� �ޱ�
void main()
{
	int a = 10;
	double b = 3.14f;
	char c = 'A';

	cin >> a;
	cout << a << endl;
	cin >> b;
	cout << b << endl;
	cout << c << endl;
}
*/

/*
using namespace std;

// �Լ� ����
void func(int a, int b);

// �Լ� ȣ��
void main()
{
	func(1, 100);
}

// �Լ� ����
void func(int a, int b)
{
	cout << a << b << endl;
}
*/

/*
using namespace std;

// �Լ��� �����ϸ鼭 �⺻���� �־��ִ� ���
// �⺻ �Ű����� �� Default Arguments
void func(int a=20, int b=30);

// �Լ� ȣ���� �پ��� ��
void main()
{
	func();
	func(10);
	func(1, 100);
}

// �Լ� ����
void func(int a, int b)
{
	cout << a << b << endl;
}
*/

/*
// ��������, ��������
// C������ ���ÿ��� ���� ȣ���� �Ұ� => ������ Ư������
int temp = 10;

void main()
{
	{
		printf("temp1 >> %d\n", temp);

		// ��������
		int temp = 20;
		printf("temp2 >> %d\n", temp);
		// �߰�ȣ�� �����鼭 ���� �޸𸮿� �Ҵ�� ���������� �������
		printf("temp3 >> %d\n", temp);
	}
	printf("temp >> %d\n", temp);
}
*/

/*
// C++���� ��������, �������� 
using namespace std;

int temp = 10;

void main()
{
	{
		int temp = 20;
		cout << temp << endl;
		// scope �տ� ��ð� �Ǿ����� �ʴ� => global �ǹ�
		cout << ::temp << endl;
	}
	cout << temp << endl;
}
*/

/*
// �ζ��� �Լ�
using namespace std;

// 
inline void print()
{
	cout << "inline �Լ�" << endl;
}

void main()
{
	// inline ��� ��, ������ �� �� �Ʒ��� ���� �ؼ����� �ʰ�
	print();
	print();
	print();

	// �Ʒ��� ���� �ؼ� => �ӵ��� ����
	cout << "inline �Լ�" << endl;
	cout << "inline �Լ�" << endl;
	cout << "inline �Լ�" << endl;
}
*/