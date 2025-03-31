#include <iostream>
// map에 비해 hash_map이 더 빠르다 .. 실무에서 사용
#include <hash_map>

using namespace std;
using namespace stdext;

struct PhoneAddr {
	string name;
	int pnum;
} arPerson[] = {
	{"김성훈", 1234}, {"조선희", 2345}, {"홍민경", 3456}
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
	cout << "검색할 이름을 적어주세요 >> ";
	cin >> name;

	iter = person.find(name);

	if (iter == person.end())
	{
		cout << "해당 이름을 찾을 수 없습니다." << endl;
	}
	else
	{
		cout << name << "의 전화번호는 " << iter->second << endl;
	}
}