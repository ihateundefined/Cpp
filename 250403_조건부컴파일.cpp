#include <iostream>

using namespace std;

// �ּ� ���ο� ���� ������ ����� Ȱ���ǰų� ��Ȱ�� ��
//#define professional

void main()
{
#ifdef professional
	// ������ ���
	cout << "������ ��� ����" << endl;
#else
	// �Ϲ� ���
	cout << "�Ϲ� ��� ����" << endl;
#endif
	// ���� �ڵ�
	cout << "���� �ڵ�" << endl;
}