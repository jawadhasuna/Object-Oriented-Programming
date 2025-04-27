#include<iostream>
using namespace std;
class Base 
{ 
   protected: 
void myFunc() 
{ 
cout<<"Base Class Function"; 
} 
}; 
class Derived: public Base 
{ 
  public: 
void myFunc() 
{ 
cout<<"Derived Class Function"; 
} 
void myFunc(int a) 
{ 
cout<<"Derived Class Function with Parameter Value" <<a; } 
};
main()
{
Derived d;
d.myFunc(10);	
}