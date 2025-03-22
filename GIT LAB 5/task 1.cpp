#include<iostream>
using namespace std;
class BankAccount{
	private:
    int accnumber;
	double balance;
	bool validateamount(double a)
	{
		if(balance>=a)
        return true; 
	
	}
	public: 
	static int acccount;
	BankAccount(int numb,double bal)
	{
	accnumber=numb;
	balance=bal;
	acccount++;
	cout<<"constructor called\n";	
	}
	void deposit(double amount)
	{
	this->balance+=amount;	
	cout<<"balance updated\n";
	}
	void withdraw(double amount)
	{
		if(validateamount(amount))
	{
	  this->balance-=amount;
	  cout<<"balance withdraw\n";	
	}
	else
	cout<<"balance insufficient";	
	}
	
	void getbalance() const
	{
		cout<<"acc number and balance is: \n";
		cout<<accnumber<<" "<<balance<<endl;		   
	}
	static void getacccount()
	{
		cout<<"number of acc created:"<<acccount<<endl;
	}
};
int BankAccount::acccount=0;
main()
{
BankAccount b(101,10000.50);
b.deposit(20000.50);
b.withdraw(10000);
b.getbalance();
BankAccount b2(102,1888.3);
BankAccount::getacccount();
}