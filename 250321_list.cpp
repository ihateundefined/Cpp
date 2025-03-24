#include <iostream>
#include <list>

using namespace std;

void main()
{
	list<int> lst;

	// 데이터 삽입
	lst.push_back(5);
	lst.push_back(6);
	lst.push_front(2);
	lst.push_front(1);

	// 데이터 출력의 경우 순차적이지않기 때문에 for문 사용 불가
	cout << "list값 출력하기 >> " << endl;

	// iterator 사용
	list<int>::iterator iter;

	// iter != lst.end(); 가장 끝의 다음을 나타낸다?
	// lst.end()는 마지막 원소의 다음을 가리키기 때문에 마지막 원소까지 출력하려면 !=로 비교해야한다.
	// 즉, lst.end()가 되기 전까지 iter++를 반복한다.
	for (iter = lst.begin(); iter != lst.end(); iter++)
	{
		cout << *iter << endl;
	}
}