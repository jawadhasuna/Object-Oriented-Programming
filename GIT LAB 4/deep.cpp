#include<iostream>
using namespace std;
class deep{
	int data;
	float* app;
	public:
	deep(int d,float a)
   {
     app=new float(a);
     data=d; 	
   }
   deep (const deep &d)//deep constructor
   {
   	data=d.data;
   	app=new float(*d.app);
   	//*app=*d.app;
   }
   void modify()
   {
   	data=2;
   	*app=1;
   }
	void display()
	{
		cout<<"data:"<<data<<endl<<" app"<<*app<<endl;
	}
	~deep()
	{
		delete app;
	}	
};
main()
{
	deep d1(30,40);
	deep d2=d1;
	d1.modify();
	d1.display();
	d2.display();
}