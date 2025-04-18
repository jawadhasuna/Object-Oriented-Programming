#include<iostream>
using namespace std;			
main()
{
for(int a=0;a<5;a++)
{
for(int j=0;j<4;j++)
{
cout<<" ";	
}
for(int k=0;k<2*a-1;k++)
{
cout<<"*";	
}
cout<<endl;
}
for(int a=5;a>=0;a--)
{
for(int j=0;j<4;j++)
{
cout<<" ";	
}
for(int k=0;k<2*a-1;k++)
{
cout<<"*";	
}
cout<<endl;
}
}
