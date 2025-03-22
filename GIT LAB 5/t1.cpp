#include<iostream>
using namespace std;
void demo()
{
	static int count=0;
	cout<<count;
	count++;
}
main()
{
	for(int i=0;i<5;i++)
	{
		demo();
	}
	
	
	
	
	
}
