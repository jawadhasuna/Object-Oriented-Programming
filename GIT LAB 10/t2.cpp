#include<iostream>
using namespace std;
class employee{
public:
int base;
virtual void calsal(int b)
{cout<<"base sal cant be determined"; } 	
};
class manager:public employee{
	public:
manager(int ba)
{
base=ba;	
}
void calsal(int b)
	{
	cout<<"mangr sal:"<<base+b<<endl;	
	}
};
class engineer:public employee{
	public:
engineer(int ba)
{
base=ba;	
}
void calsal(int ov)
	{
	cout<<"engnr\n"<<base+ov<<endl;	
	}
};
main()
{
employee *emp[2];
manager e(1000);
engineer en(1000);
emp[0]=&e;
emp[1]=&en;
emp[0]->calsal(20);
emp[1]->calsal(30);
}