/*
* [순차검색] 주어진 배열에서 key값이 75인 값을 검색하는 알고리즘을 작성하라.
* 단, 검색 알고리즘을 함수로 작성하라.
* 값을 찾았다면 "찾는 값은 ?번째에 있습니다."라고 출력하고,
* 찾는 값이 없다면 "값을 찾을 수 없습니다."라고 출력하라.
* 
* int ar[]={23,47,19,63,57,26,75,73,82,89,47,11};
* key=75;
*/

#include <iostream>

using namespace std;

void main()
{
	int arr[] = { 23, 47, 19, 63, 57, 26, 75, 73, 82, 89, 47, 11 };
	int key = 75;
	bool find = false;

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		if (key == arr[i])
		{
			cout << "찾는 값은 " << i + 1 << "번째에 있습니다." << endl;
			find = true;
			break;
		}
	}

	if (find == false)
	{
		cout << "값을 찾을 수 없습니다." << endl;
	}
}