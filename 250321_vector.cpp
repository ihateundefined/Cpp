#include <iostream>
#include <vector>

using namespace std;

// vector�� ���������, ����Ѱ� �ƴ�
// �׳� array�� ����� ������
void main()
{
	int num = 0;

	cout << "���� �Է��ϱ� >> " << endl;
	cin >> num;
	
	vector<int> arr(num);
	
	for (int i = 0; i < num; i++)
	{
		arr[i] = (i+1) * 10;
	}
	
	cout << "array�� ����ϱ� >> " << endl;

	for (int i = 0; i < num; i++)
	{
		cout << arr[i] << endl;
	}
}