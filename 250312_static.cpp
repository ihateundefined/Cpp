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
	// default 생성자
	Deposit() {
		// 초기화 ... 생성자에서 해준다
		//nCount = 0;
		// nCount = nCount + 1;
		nCount++;
		cout << "객체 생성 갯수 >> " << nCount << endl;
	}
	// 생성자 오버로딩
	Deposit(const char* name, double balance) {
		strName = name;
		dBalance = balance;
		nCount++;
		cout << "객체 생성 갯수 >> " << nCount << endl;
	}
	void BankBalance() {
		dBalance = dBalance + (dBalance * dInterestRate);
		// 엄밀히 적으면 아래와 같이 가능
		// this->dBalance = this->dBalance + (this->dBalance * dInterestRate);
	}
	// 소멸자
	~Deposit() {
		// nCount = nCount - 1;
		nCount--;
		cout << "객체 소멸 중 >> " << nCount << endl;
	}
	// static 멤버가 아닌 일반 멤버변수에는 접근이 불가함
	// 따라서 아래와 같이 this 사용 불가
	// this는 생성자(객체)와 관련이 있음
	// static 변수는 클래스와 관련이 있으므로 애초에 불가함
	//static void SetInterest(double dNewRate) {
	//	this->dInterestRate = dNewRate;
	//}
	// 따라서 아래와 같이 사용
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

	// 아래와 같이 적용하면 cus1의 이자율을 변경하는 것 처럼 보이지만,
	// 실제로는 모든 객체에 적용이 됨 => 사용 지양
	// cus1.dInterestRate = 0.04;
	// 이렇게 클래스로 접근해야함
	Deposit::SetInterest(0.04);

	cout << "변경된 이자율 확인하세요 " << Deposit::GetInterestRate() << endl;
}