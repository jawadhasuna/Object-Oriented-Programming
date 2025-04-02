#include<iostream>
using namespace std;
class Complex{
	double real,imaginary;
	public:
	Complex(float r,double i)
	{
	real=r;
	imaginary=i;	
	}
	void display()
	{
		cout<<"complex no is:"<<real<<" + "<<imaginary<<"i\n";
	}
	void operator *(const Complex &obj)
	{
	 cout<<((real*obj.real)-(imaginary*obj.imaginary));
	 cout<<" + "<<((real*obj.imaginary)+(imaginary*obj.real))<<"i";	
	}		
};
main()
{
Complex c1(1.2,2.3);
Complex c2(2.2,4.2);
c1.display();
c2.display();
cout<<"mul of 2 complex object is: ";
c1*c2;	
}