#include<iostream>
using namespace std;
class car{
      int hp=300;
	friend class engine;
};
class engine{
	public:
   void modify(car c)
   {
   	c.hp+=500;
   	cout<<c.hp;
   }
	
};

main()
{
car ca;
engine e;
e.modify(ca);
}