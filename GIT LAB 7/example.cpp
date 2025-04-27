#include<iostream>
using namespace std;
class a 
{ 
   public: 
void f1() 
{ 
cout<<"Base Class Function f1"; 
} 
void f2() 
{ 
cout<<"Base Class Function f2"; 
} 
}; 
class b: public a 
{ 
   public: 
void f1() 
{ 
cout<<"derived Class Function f1"; 
} 
void f2(int a)//method hiding 
{ 
cout<<"dervied Class Function f2"<<a; 
} 
};
main()
{
b d;
d.f1();	
d.f2(2);
}