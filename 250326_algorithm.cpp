#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void func(string str)
{
	cout << str << endl;
}

void main()
{
	/*
	// find ����
	int arr[] = { 10,20,30,40,50 };
	vector<int> vec(&arr[0], &arr[5]);
	vector<int>::iterator iter;

	if (find(vec.begin(), vec.end(), 35) != vec.end())
	{
		cout << "�˻� �����Դϴ�!" << endl;
	}
	else {
		cout << "�˻� �����Դϴ� �Ф�" << endl;
	}
	*/

	// for_each ����
	vector<string> vs;
	vs.push_back("���� ���� �ʹ�");
	vs.push_back("������ �����ְ� �ʹ�");
	vs.push_back("���� ���� ����?");
	vs.push_back("������ ������ ���Ƽ�");
	vs.push_back("���� ���� ���� ���ڴ�");

	// func�� ȣ���� �ƴϰ� .. ���?��
	// for_each ��ȸ�� ������ ��ϵ� �� ȣ���ϴ� ��!
	// ��� �ݹ鵵 ȣ���� �ƴϰ� .. ����� �״ٰ� .. �̺�Ʈ�� �߻��� ȣ��Ǵ� ��
	for_each(vs.begin(), vs.end(), func);
}