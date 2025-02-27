#include<iostream>
using namespace std;
float sum[5],grand=0;
struct Fruit{
	string name;
	int quantity;
	float price;
	void get()
	{
		cout<<"enter fruit name, quantity and price: \n";
	   cin>>name>>quantity>>price;
	}
};
main()
{
Fruit f[5];
for(int i=0;i<5;i++)
{
f[i].get();
}
for(int i=0;i<5;i++)
 {
   sum[i]=f[i].price * f[i].quantity;
   grand=grand +sum[i];
 }	
 cout<<"total fruits grand total is:"<<grand;     
      
      
      
}