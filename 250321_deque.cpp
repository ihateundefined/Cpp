#include <iostream>
#include <deque>

using namespace std;

void main()
{
	deque<int> dq;

	dq.push_back(5);
	dq.push_back(6);
	dq.push_front(2);
	dq.push_front(1);

	/*for (int i = 0; i < 10; i++)
	{
		dq.push_back((i + 1) * 10);
	}
	*/

	for (int i = 0; i < dq.size(); i++)
	{
		cout << dq[i] << endl;
	}
}