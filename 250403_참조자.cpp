#include <iostream>

using namespace std;

// �����ڴ� �ݵ�� ���� ����
void printDouble(const double& rd)
{
	cout << rd << endl;
}

// �ٸ� �����͸� �Ű������� ���� ���, null�ϼ��� ������ �ݵ�� Ȯ���ؾ� ��
void printDouble(const double* pd)
{
	// null ������ �˻�
	if (pd) {
		cout << *pd << endl;
		cout << pd << endl;
	}
}

void main()
{
	string s("abc");
	string& rs = s;

	double pi = 3.14;
	//const double& rd = pi;

	// ������
	printDouble(pi);
	// ������
	printDouble(&pi);
}