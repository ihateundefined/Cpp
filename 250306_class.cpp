#include <iostream>

// ����ü
struct MouseStruct
{
	int x;
	int y;
};

using namespace std;

// Ŭ����
// ���ο� ���� ����(private), �Լ� ����
// ���������ڸ� �������ش�
// �������� ������ default�� private��
class MousePoint
{
	// private : ���� ���� private ����
	// ĸ��ȭ�� �Ǿ��־� ���� ������ �Ұ�
	private:
		int x;
		int y;

	public:
		void setXY(int a, int b) {
			x = a;
			y = b;
		}

		int getX() {
			return x;
		}

		int getY() {
			return y;
		}
};

void main()
{
	// ǥ��Ÿ������ ������ �� '����'
	// ����� ���� Ÿ�� user (Ŭ����)�� ������ �� '��ü'
	// ��ü�� ������ ������
	int a; // 4����Ʈ �Ҵ�
	// MousePoint Ŭ���� ���ο� ���� 2���ϱ�
	MousePoint point; // �̷��� ���� ���� 8����Ʈ �Ҵ�
	point.setXY(10, 20);
	cout << "class�� get() " << point.getX() << point.getY() << endl;

	MouseStruct pointStruct = { 10, 20 };
	cout << "struct ���" << pointStruct.x << " " << pointStruct.y << endl;
}