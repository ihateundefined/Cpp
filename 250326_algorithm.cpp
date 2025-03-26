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
	// find 예제
	int arr[] = { 10,20,30,40,50 };
	vector<int> vec(&arr[0], &arr[5]);
	vector<int>::iterator iter;

	if (find(vec.begin(), vec.end(), 35) != vec.end())
	{
		cout << "검색 성공입니다!" << endl;
	}
	else {
		cout << "검색 실패입니다 ㅠㅠ" << endl;
	}
	*/

	// for_each 예제
	vector<string> vs;
	vs.push_back("집에 가고 싶다");
	vs.push_back("집에서 누워있고 싶다");
	vs.push_back("집은 언제 가지?");
	vs.push_back("오늘은 날씨가 좋아서");
	vs.push_back("집에 지금 가면 좋겠다");

	// func는 호출이 아니고 .. 등록?임
	// for_each 순회할 때마다 등록된 걸 호출하는 것!
	// 사실 콜백도 호출이 아니고 .. 등록해 뒀다가 .. 이벤트가 발생시 호출되는 것
	for_each(vs.begin(), vs.end(), func);
}