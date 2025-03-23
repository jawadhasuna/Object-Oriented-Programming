#include<iostream>
using namespace std;
class Rational
{
	private:
	int numerator,denominator;
	int gcd(int a,int b)
	{
		if(b==0)
		{return a;}
		else
		return gcd(b,a%b);
	}
	public:
	Rational(int n=0,int d=1)
	{
		if(d==0)
		{d=1;}
	int com=gcd(abs(n),abs(d));
	numerator =n/com;	
	denominator =d/com;	
	}
    void print()
    {
    	cout<<numerator<<"/"<<denominator<<endl;
	}
	Rational add(Rational r)
	{
		int num=numerator*r.denominator + denominator*r.numerator;
		int den=denominator*r.denominator;
		return Rational(num,den);
	}
	Rational minus(Rational r)
	{
		int num=numerator*r.denominator - denominator*r.numerator;
		int den=denominator*r.denominator;
		return Rational(num,den);
	}
	Rational mul(Rational r)
	{
	int num=numerator*r.numerator;
	int den=denominator*r.denominator;
	return Rational(num,den);	
	}
	Rational div(Rational r)
	{
	int num=numerator*r.denominator;
	int den=denominator*r.numerator;
	return Rational(num,den);	
	}
	void floatprint()
	{
		cout<< static_cast<float>(numerator)/denominator<<endl;
	}
};
int main()
{
	Rational r1(6,3);
	Rational r2(6,4);
	cout<<"r1:";
	r1.print();
	cout<<"r2:";
    r2.print();
    Rational sum=r1.add(r2);
    Rational sub=r1.minus(r2);
    Rational m=r1.mul(r2);
    Rational d=r1.div(r2);
    cout<<"sum of r1 and r2:";
    sum.print();
    cout<<"subtract of r1 and r2:";
    sub.print();
    cout<<"multiplication of r1 and r2:";
    m.print();
    cout<<"division of r1 and r2:";
    d.print();
    cout<<"float print value of subtract:";
    sub.floatprint();
	return 0;
}