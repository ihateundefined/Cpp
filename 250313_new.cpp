#include <iostream>

using namespace std;

class MousePoint
{
private:
	int x;
	int y;

public:
	MousePoint() {
		cout << "������ ȣ��" << endl;
	}

	MousePoint(int a, int b) {
		x = a;
		y = b;
	}

	void setXY(int a, int b) {
		this->x = a;
		this->y = b;
	}

	int getX() const {
		return x;
	}

	int getY() const {
		return y;
	}
};

void main()
{
	/*
	// ���� �޸� �Ҵ��ϴ� ��� ����
	// void pointer -> � ���� ������ �𸣴ϱ� -> �ּҰ��� �ѱ�
	// pbuf = (int*)malloc(100);
	
	// 10���� �ʱ�ȭ�� �Ѵ�? -> �ּҰ��� �Ѱ��ش�?
	// pbuf = new int(10); .. 4 byte�� 10�� �� ��
	// pbuf = new int[10]; .. 4 byte¥�� int�� 10�� ���� -> 40 byte
	
	// ����ڰ� ���� �޸� �Ҵ� ��û
	// pbuf = new int[3];
	
	int len = 0;
	int* pbuf;

	cout << "�Ҵ��� �޸� �� : ";
	cin >> len;

	pbuf = new int[len];

	for (int i = 0; i < len; i++)
	{
		pbuf[i] = i+1;
	}

	for (int i = 0; i < len; i++)
	{
		cout << pbuf[i] << endl;
	}

	delete[] pbuf;

	// pbuf[0] = 1;
	// pbuf[1] = 2;
	// pbuf[2] = 3;
	
	// cout << pbuf[0] << endl;
	// cout << pbuf[1] << endl;
	// cout << pbuf[2] << endl;
	*/
	
	/*
	// Ŭ������ ����Ͽ� ���� �޸� �Ҵ��ϱ�
	// ���� �޸� �Ҵ�
	MousePoint pt1(10, 20);

	// ���� �޸� �Ҵ�
	// new �����ڴ� �ּҰ��� �����ش�
	// �����δ� �̰͸� ���
	MousePoint *pt2 = new MousePoint(10, 20);
	cout << pt2->getX() << pt2->getY() << endl;
	delete pt2;
	*/
}