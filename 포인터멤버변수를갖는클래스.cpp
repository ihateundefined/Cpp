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
	String(char ch, int nSize) {
		// �ڵ��� ������ ������ �Ű������� �Լ� �ȿ��� ���������� ������� �ʴ´�
		// �Ű������� ���� ������ ������ �Ѱ��ִ� ������ �ʿ�
		len = nSize;
		// len + 1 ���ڿ� �������� null ������
		// ���ڿ� �������� �˷��ֱ�
		pbuf = new char[len + 1];
		// len ��ŭ�� ch�� ä��ڴ�
		memset(pbuf, ch, len);
		// \0 == null
		pbuf[len] = '\0';

		cout << pbuf << endl;
		cout << len << endl;
	}
}; 

void main()
{
	String str1('A', 3);
	String str2('B', 4);

	//str2 = str1;
	// �Ҹ��� �۵� ���� �߻�!
}