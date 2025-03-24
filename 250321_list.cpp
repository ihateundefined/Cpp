#include <iostream>
#include <list>

using namespace std;

void main()
{
	list<int> lst;

	// ������ ����
	lst.push_back(5);
	lst.push_back(6);
	lst.push_front(2);
	lst.push_front(1);

	// ������ ����� ��� �����������ʱ� ������ for�� ��� �Ұ�
	cout << "list�� ����ϱ� >> " << endl;

	// iterator ���
	list<int>::iterator iter;

	// iter != lst.end(); ���� ���� ������ ��Ÿ����?
	// lst.end()�� ������ ������ ������ ����Ű�� ������ ������ ���ұ��� ����Ϸ��� !=�� ���ؾ��Ѵ�.
	// ��, lst.end()�� �Ǳ� ������ iter++�� �ݺ��Ѵ�.
	for (iter = lst.begin(); iter != lst.end(); iter++)
	{
		cout << *iter << endl;
	}
}