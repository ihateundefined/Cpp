#include <iostream>

using namespace std;

/*
// �⺻ ������ ����
void main()
{
	double* rate = new double();
	*rate = 3.14;

	cout << rate << endl;
	delete rate;
}
*/

// ���� ������
void main()
{
	int* a;
	int b;
	cout << "������ �� �Է� >> ";
	cin >> b;

	/*
	// heap �޸𸮿� 4����Ʈ ���� �Ҵ�޾Ƽ� 10�̶�� ���� ���� ����
	a = new int(10);
	
	// �׷��� a/b�Ҷ�, b�� 0�̸� ������ �߻� .. if�� ���
	if (b == 0) {
	} else {
		cout << "������ ��� >> " << *a / b << endl;
	}
	*/

	// �������ϴϱ� try-catch �������� ����ó�� ���ֱ�
	try {
		a = new int(10);

		if (b == 0) {
			// throw �߻� ��, delete a ���� �ȵǼ� �޸� ���� �߻�
			throw b;
		}
		
		cout << "������ ��� : " << *a / b << endl;
		
		delete a;
	}
	catch (int ex) {
		cout << "������� �� �� �� " << ex << "�̹Ƿ� ���� ���� �Ұ�" << endl;
	}
}