#include<iostream>
using namespace std;
static void greet()
{
	cout<<"hello from static";
}
void callgreet()
{
	greet();
}
main()
{
	greet();
}
