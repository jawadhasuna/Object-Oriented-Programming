#include<iostream>
using namespace std;
class shape 
{ 
   protected:
    int len;
    int wid;
   public: 
   shape(int l,int w):len(l),wid(w)
   {
   }
   void area()
   {
  	cout<<"shape";
   }
   void display()
   {
   	cout<<"shape";
   }
}; 
class circle: public shape
{ 
   protected:
   	
   public: 
   circle(int l,int w):shape(l,w){
   }
   void area()
   {
   	cout<<"circle area\n";
   }
   void display()
   {
   	cout<<"circle display\n";
   }
};
class rectangle: public shape
{ 
   protected:
   	
   public: 
   rectangle(int l,int w):shape(l,w){
   }
   void area()
   {
   	cout<<"rec area\n";
   }
   void display()
   {
   	cout<<"rec display\n";
   }
};

main()
{
rectangle r(10,12);
circle c(1,2);
r.area();
r.display();
c.area();
c.display();
}