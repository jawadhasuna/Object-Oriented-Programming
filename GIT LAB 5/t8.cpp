#include<iostream>
using namespace std;
class bank{
	private:
		int numb;
		double bal;
	public:
		static int count;
	bank(int n,double b)
	{
		numb=n;
        bal=b;
        count++;
	}
	void deposit(double amount)
	{
		this->bal +=amount;
	}
	void withdraw(double amount)
	{
		if(amount<=bal)
		{
		this->bal -=amount;
         }
	}
	double getbalance()const
	{
		return bal;
	}
	static int getcount()
	{
	return count;
	}
};
int bank::count=0;  
main()
{
bank b(1,5000);
b.deposit(5000);
b.withdraw(2000);
cout<<b.getbalance();
bank b1(2,1000);
cout<<bank::getcount(); 
bank::count=50;
cout<<bank::count;
}