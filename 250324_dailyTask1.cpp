/*
* String Ŭ������ ���
* MyString Ŭ������� �̸����� ���� ����
* ����� String�� ����
* �� ���� ��ü str1�� str2�� ����
* str1 ���� �� �������� �������ڴ� (��A��, 5)
* str2 ���� �� �������� �������ڴ� (��Z��, 10)
* str1�� str2�� ���� (str1 = str2)
* ������ �� str1�� ��������� ȭ�鿡 ���
* ���� �� ������ �߻��Ͽ��ٸ� ���� ������ �����ε��� ���� ������ �ذ��ϵ���
*/

#include <iostream>

using namespace std;

class MyString
{
private:
	char* pbuf;
	int len;
public:
	MyString() {}
	~MyString() {
		delete[] pbuf;
	}
	MyString(char ch, int nSize) {
		len = nSize;
		pbuf = new char[len + 1];
		memset(pbuf, ch, len);
		pbuf[len] = '\0';

		cout << "������ >> " << pbuf << endl;
		cout << "������ >> " << len << endl;
	}
	void operator=(const MyString& s)
	{
		if (&s == this)
			return;

		delete this->pbuf;
		this->len = s.len;
		this->pbuf = new char[this->len + 1];
		strcpy_s(this->pbuf, len + 1, s.pbuf);
	}
	void getData()
	{
		cout << "pbuf >> " << this->pbuf << endl;
		cout << "len >> " << this->len << endl;
	}
};

void main()
{
	MyString str1('A', 5);
	MyString str2('Z', 10);

	str1 = str2;

	str1.getData();
	str2.getData();
}