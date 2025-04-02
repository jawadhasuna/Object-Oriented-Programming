#include<iostream>
using namespace std;
class printdata{
	
	public:
	void print(int i)
	{
		cout<<"int:"<<i<<endl;
	}
	void print(double f)
	{
	cout<<"double:"<<f<<endl;	
	}
	void print(char* c)
	{
	cout<<"string:"<<c<<endl;	
	}
};
main()
{
	printdata pd;
	pd.print(3);
	pd.print(5.333456789);
	pd.print("hello world");
}