#include <iostream>
#include <vector>

using namespace std;

void main()
{
	vector<int> arr;
	
	for (int i = 0; i < 10; i++)
	{
		arr.push_back((i+1) * 10);
	}
	
	cout << "array값 출력하기 >> " << endl;

	/*for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}*/

	vector<int>::iterator iter;

	for (iter = arr.begin(); iter != arr.end(); iter++)
	{
		cout << *iter << endl;
	}
}
