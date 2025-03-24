#include <iostream>
#include <set>

using namespace std;

void main()
{
	/*
	// int�� arr�� set
	int arr[] = { 1,2,3,2,5,6,3 };

	set<int> scon;

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		scon.insert(arr[i]);
	}

	// list�� iterator �״�� ���
	set<int>::iterator iter;
	// Ű�� �ߺ� ����, ���ĵ� ���·� ����, key:value
	for (iter = scon.begin(); iter != scon.end(); iter++)
	{
		cout << *iter << endl;
	}
	*/

	// ���ڿ� arr�� set
	const char* str = "sdfsdfat";
	// ���ڿ��� ��� insert ���� �ʰ�, �Ʒ��� ���� insert�Ѵ�
	set<char> scon(&str[0], &str[10]);

	set<char>::iterator iter;
	for (iter = scon.begin(); iter != scon.end(); iter++)
	{
		cout << *iter << endl;
	}
}