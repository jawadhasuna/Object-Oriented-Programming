#include<iostream>
#include<list>
using namespace std;
void print(list<int>&l)
{
	list<int>::iterator it;
	for(it=l.begin();it!=l.end();it++)
	{
		cout<<*it<<" ";
	}
}
int main()
{
	list<int>l;
	list<list<int> >ll;
	list<list<int> >::iterator it;
	for(int i=1;i<=3;i++)
	{
	 for(int j=1;j<=2;j++)
	{
		l.push_back(i*j);
	}
	l.pop_front();
	ll.push_back(l);	
	}
	for(it=ll.begin();it!=ll.end();it++)
	{
		print(*it);
        cout<<endl;
	}
	return 0;
}