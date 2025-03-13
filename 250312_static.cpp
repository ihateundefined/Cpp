#include <iostream>

using namespace std;

class Deposit
{
private:
	const char* strName;
	double dBalance;
	static double dInterestRate;
	static int nCount;
public:
	// default ������
	Deposit() {
		// �ʱ�ȭ ... �����ڿ��� ���ش�
		//nCount = 0;
		// nCount = nCount + 1;
		nCount++;
		cout << "��ü ���� ���� >> " << nCount << endl;
	}
	// ������ �����ε�
	Deposit(const char* name, double balance) {
		strName = name;
		dBalance = balance;
		nCount++;
		cout << "��ü ���� ���� >> " << nCount << endl;
	}
	void BankBalance() {
		dBalance = dBalance + (dBalance * dInterestRate);
		// ������ ������ �Ʒ��� ���� ����
		// this->dBalance = this->dBalance + (this->dBalance * dInterestRate);
	}
	// �Ҹ���
	~Deposit() {
		// nCount = nCount - 1;
		nCount--;
		cout << "��ü �Ҹ� �� >> " << nCount << endl;
	}
	// static ����� �ƴ� �Ϲ� ����������� ������ �Ұ���
	// ���� �Ʒ��� ���� this ��� �Ұ�
	// this�� ������(��ü)�� ������ ����
	// static ������ Ŭ������ ������ �����Ƿ� ���ʿ� �Ұ���
	//static void SetInterest(double dNewRate) {
	//	this->dInterestRate = dNewRate;
	//}
	// ���� �Ʒ��� ���� ���
	static void SetInterest(double dInterestRate) {
		dInterestRate = dInterestRate;
	}

	static double GetInterestRate() {
		return dInterestRate;
	}
};

double Deposit::dInterestRate = 0.05;
int Deposit::nCount = 0;

void main()
{
	Deposit cus1("riri", 1000);
	Deposit cus2("tom", 2000);
	Deposit cus3("jason", 3000);
	Deposit cus4("frank", 4000);

	Deposit dp1;
	Deposit dp2;

	// �Ʒ��� ���� �����ϸ� cus1�� �������� �����ϴ� �� ó�� ��������,
	// �����δ� ��� ��ü�� ������ �� => ��� ����
	// cus1.dInterestRate = 0.04;
	// �̷��� Ŭ������ �����ؾ���
	Deposit::SetInterest(0.04);

	cout << "����� ������ Ȯ���ϼ��� " << Deposit::GetInterestRate() << endl;
}