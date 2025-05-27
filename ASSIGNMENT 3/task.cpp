#include<iostream>
using namespace std;
class Bank{
	private:
	float balance=10,income=20,bonus=30;
	public:
	friend void display(Bank &obj);
};
class customer: public Bank{
	
};
class diamond:public customer{
	
};
class gold:public customer{
	
};
class silver:public customer{
	
};
class service: public Bank{
	pos
	withdrawl
	transaction
	reward
};
void display(Bank &obj)
{
cout<<"bank details: "<<obj.balance<<endl<<obj.income<<endl<<obj.bonus<<endl;	
}
main()
{
	Bank b;
	display(b);
}