#include<iostream>
#include<list>
using namespace std;
void print_list(list<int> &l)
{

    list<int> ::iterator it;
    for(it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main()
{
 list <int> l;
 list < list<int> > ll;
 list<list<int> >::iterator it;
 for(int j=1;j<=2;j++)
 {
 for(int i=1;i<=2;i++)
 {
    l.push_back(i*j);
 }
 l.pop_front();
 ll.push_front(l);
 }


for(it=ll.begin();it!=ll.end();it++)
{
     print_list(*it);
}
cout<<endl;
  return 0;
}