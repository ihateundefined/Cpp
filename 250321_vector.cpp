#include <iostream>
#include <vector>

using namespace std;

// vector를 사용했지만, 사용한게 아님
// 그냥 array를 사용한 느낌임
void main()
{
	int num = 0;

	cout << "정수 입력하기 >> " << endl;
	cin >> num;
	
	vector<int> arr(num);
	
	for (int i = 0; i < num; i++)
	{
		arr[i] = (i+1) * 10;
	}
	
	cout << "array값 출력하기 >> " << endl;

	for (int i = 0; i < num; i++)
	{
		cout << arr[i] << endl;
	}
}