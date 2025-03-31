#include <iostream>
// map�� ���� hash_map�� �� ������ .. �ǹ����� ���
#include <hash_map>

using namespace std;
using namespace stdext;

struct PhoneAddr {
	string name;
	int pnum;
} arPerson[] = {
	{"�輺��", 1234}, {"������", 2345}, {"ȫ�ΰ�", 3456}
};

void main()
{
	hash_map<string, int> person;

	for (int i = 0; i < sizeof(arPerson) / sizeof(arPerson[0]); i++)
	{
		person[arPerson[i].name] = arPerson[i].pnum;
	}

	hash_map<string, int>::iterator iter;

	string name;
	cout << "�˻��� �̸��� �����ּ��� >> ";
	cin >> name;

	iter = person.find(name);

	if (iter == person.end())
	{
		cout << "�ش� �̸��� ã�� �� �����ϴ�." << endl;
	}
	else
	{
		cout << name << "�� ��ȭ��ȣ�� " << iter->second << endl;
	}
}