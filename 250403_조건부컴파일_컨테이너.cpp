#include <iostream>
#include <list>
#include <vector>

using namespace std;

//#define LIST

void main()
{
	int i;

#ifdef LIST
	list<int> lst;
	list<int>::iterator iter;
	
	cout << "list 코드" << endl;
#else
	vector<int> lst;
	vector<int>::iterator iter;

	cout << "vector 코드" << endl;
#endif
	for (int i = 0; i < 5; i++)
	{
		lst.push_back(i + 1);
	}

	for (iter = lst.begin(); iter != lst.end(); iter++)
	{
		cout << *iter << endl;
	}
}