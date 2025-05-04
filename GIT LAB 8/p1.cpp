#include<iostream>
using namespace std;
class box{
	int length;
	public:
	box():length(0){}
	friend int printlen(box);	
};
int printlen(box b)
{
	b.length+=200;
	return b.length;
}
main()
{
	box obj;
	cout<<"length is:"<<printlen(obj);
}