#include<iostream>
using namespace std;
class BankAccount{
	private:
	 string accholdername,accnumber;
	double balance;
	bool validateamount(double a)
	{
		if(balance>=a)
        return true; 
	
	}
	public: 
	BankAccount(string name,string numb,double bal)
	{
	accholdername=name,
	accnumber=numb;
	balance=bal;
	cout<<"constructor called\n";	
	}
	void deposit(double amount)
	{
	balance=balance+amount;	
	cout<<"balance updated\n";
	}
	void withdraw(double amount)
	{
		if(validateamount(amount))
	{
	  balance=balance-amount;
	  cout<<"balance withdraw\n";	
	}
	else
	cout<<"balance insufficient";	
	}
	void displayaccinfo()
	{
		cout<<"acc holder name, number and balance is: \n";
		cout<<accholdername<<" "<<accnumber<<" "<<balance<<endl;		   
	}


};

main()
{
BankAccount b("jawad","A1F74563HJ",10000.50);
b.deposit(20000.50);
b.withdraw(10000);
b.displayaccinfo();
}