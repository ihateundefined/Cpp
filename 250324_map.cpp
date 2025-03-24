#include <iostream>
#include <map>

using namespace std;

struct PhoneAddr {
	string name;
	int pnum;
} arPerson[] = {
	{"�輺��", 1234}, {"������", 2345}, {"ȫ�ΰ�", 3456}
};

void main()
{
	map<string, int> person;

	for (int i = 0; i < sizeof(arPerson) / sizeof(arPerson[0]); i++)
	{
		person[arPerson[i].name] = arPerson[i].pnum;
	}

	map<string, int>::iterator iter;

	string name;
	cout << "�˻��� �̸��� �����ּ��� >> ";
	cin >> name;

	// ã�����ϴ� �̸��� ��ġ�� �ּ� ���� iter�� �ѱ��
	iter = person.find(name);

	// iter���� end��� �� ã�Ҵٴ� ��
	if (iter == person.end())
	{
		cout << "�ش� �̸��� ã�� �� �����ϴ�." << endl;
	}
	else
	{
		// first : key, second : value
		cout << name << "�� ��ȭ��ȣ�� " << iter->second << endl;
	}
}