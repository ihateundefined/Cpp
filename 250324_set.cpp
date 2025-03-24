#include <iostream>
#include <set>

using namespace std;

void main()
{
	/*
	// int형 arr의 set
	int arr[] = { 1,2,3,2,5,6,3 };

	set<int> scon;

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		scon.insert(arr[i]);
	}

	// list의 iterator 그대로 사용
	set<int>::iterator iter;
	// 키는 중복 제거, 정렬된 상태로 저장, key:value
	for (iter = scon.begin(); iter != scon.end(); iter++)
	{
		cout << *iter << endl;
	}
	*/

	// 문자열 arr의 set
	const char* str = "sdfsdfat";
	// 문자열의 경우 insert 쓰지 않고, 아래와 같이 insert한다
	set<char> scon(&str[0], &str[10]);

	set<char>::iterator iter;
	for (iter = scon.begin(); iter != scon.end(); iter++)
	{
		cout << *iter << endl;
	}
}