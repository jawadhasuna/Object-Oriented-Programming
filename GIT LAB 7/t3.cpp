#include<iostream>
using namespace std;
class bank 
{ 
   protected:
    int accnumb;
    float bal;
    string accname;
   public: 
   bank(int a,float b,string n):accnumb(a),bal(b),accname(n)
   {
   }
   void deposit(float b)
   {
  	bal=bal+b;
   }
   void withdraw(float b)
   {
   	bal=bal-b;
   }
}; 
class savings: public bank
{ 
   protected:
   	
   public: 
  savings(int a,float b,string n):bank(a,b,n){
  }
  void withdraw(float b)
   {
   	if(bal-b<1000)
   	{
   		cout<<"balance less\n";
	   }
    else
    {
    bal=bal-b;	
	}
   } 
};
class current: public bank
{ 
   protected:
   	
   public: 
  current(int a,float b,string n):bank(a,b,n){
  }
  void withdraw(float b)
   {
   	if(bal-b<1000)
   	{
   		cout<<"balance less\n";
	   }
    else
    {
    bal=bal-b;	
	}
   } 
};

main()
{
current c(311,2000,"jawad");
savings s(211,3000,"ali");
s.deposit(1000);
s.withdraw(3000);
s.withdraw(200);
}