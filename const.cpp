#include<iostream>
using namespace std;
main()
{
int a=5;
int b=6;         
const int* ptr=&a;
//*ptr=8; error *ptr=b;
ptr=&b;
cout<<*ptr;
int* const p=&a;
// p=&b;error;
*p=90;
cout<<a;
const int* const pop=&b;
//errors:
//*pop=88; 
//pop=&a;
cout<<*pop;
}
