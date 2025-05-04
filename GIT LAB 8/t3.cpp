#include<iostream>
using namespace std;
class car{
      int hp=300;
      public:
	friend void operator ++(car);
};
void operator ++(car c)
{
 	c.hp+=20;
 	cout<<c.hp;
}
main()
{
car ca;
++ca;
}