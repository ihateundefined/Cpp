#include <iostream>
#include <vector>
#include <list>

using namespace std;

void main()
{
	/*
	// ������ �����ͷ� ����
	int arr[] = { 1,2,3,4,5 };
	int* pNum;

	for (pNum = &arr[0]; pNum != &arr[5]; pNum++)
	{
		cout << *pNum << endl;
	}
	*/

	/*
	// while��
	char arr[] = "programming";
	char* pArr = arr;

	while (*pArr) {
		cout << *pArr << endl;
		pArr++;
	}
	*/

	/*
	// vector ���
	int arr[] = { 1,2,3,4,5 };
	vector<int> vArr(&arr[0], &arr[5]);
	vector<int>::iterator iter;

	for (iter = vArr.begin(); iter != vArr.end(); iter++)
	{
		cout << *iter << endl;
	}
	*/

	/*
	// list ���
	list<int> lst;

	for (int i = 0; i < 5; i++)
	{
		lst.push_back(i + 1);
	}

	list<int>::iterator iter;
	for (iter = lst.begin(); iter != lst.end(); iter++)
	{
		cout << *iter << endl;
	}
	*/
}