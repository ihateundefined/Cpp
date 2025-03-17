#include <iostream>

using namespace std;

class String
{
private:
	char* pbuf;
	int len;
public:
	String(){}
	~String(){
		delete[] pbuf;
		cout << "�Ҹ��ڿ��� �޸� ����" << endl;
	}

	// ������ �����ε�
	String(char ch, int nSize) {
		len = nSize;
		pbuf = new char[len + 1];
		memset(pbuf, ch, len);
		pbuf[len] = '\0';

		cout << pbuf << endl;
		cout << len << endl;
	}

	// ���� ������ �����ε�
	void operator=(const String& s)
	{
		if (&s == this)
			return;

		// 1. ���� �޸� ����
		delete this->pbuf;
		// 2. �޸� ����� ����
		this->len = s.len;
		// 3. ���ο� �޸� �Ҵ�
		this->pbuf = new char[this->len + 1];
		// 4. ������ ����
		strcpy_s(this->pbuf, len+1, s.pbuf);
	}
	void getData()
	{
		cout << "pbuf >> " << this->pbuf << endl;
		cout << "len >> " << this->len << endl;
	}
}; 

void main()
{
	// ���� ������ �����ε�
	String str1('A', 3);
	String str2('B', 4);

	str2.getData();

	// �Ҹ��� �۵� ���� �߻�!
	// �̸� �ذ��ϱ� ���� ���� ������ �����ε�
	str2 = str1;
	//str2.operator=(str1); // �� ���ΰ� �� ������ ���� ����...

	str2.getData();
}