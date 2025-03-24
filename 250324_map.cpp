#include <iostream>
#include <map>

using namespace std;

struct PhoneAddr {
	string name;
	int pnum;
} arPerson[] = {
	{"김성훈", 1234}, {"조선희", 2345}, {"홍민경", 3456}
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
	cout << "검색할 이름을 적어주세요 >> ";
	cin >> name;

	// 찾고자하는 이름의 위치의 주소 값을 iter로 넘긴다
	iter = person.find(name);

	// iter값이 end라면 못 찾았다는 뜻
	if (iter == person.end())
	{
		cout << "해당 이름을 찾을 수 없습니다." << endl;
	}
	else
	{
		// first : key, second : value
		cout << name << "의 전화번호는 " << iter->second << endl;
	}
}