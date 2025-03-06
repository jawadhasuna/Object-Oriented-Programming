#include<iostream>
#include<cstring>
using namespace std;
class student{ 
int age;
int cnic;
int semester; 
char name[20]; 
public:
student()
{
	cout<<"this is default constructor"<<endl;
}
student(int a, int c, int s, char n[20])
{
age = a;
 cnic = c;
semester = s;
 strcpy(name,n);
 cout<<"paramatrized constructor called"<<endl;	
}
~student()
{
	cout<<"this is destructor"<<endl;
}
const void setall(int a, int c, int s, char n[20]) 
{
age = a;
 cnic = c;
semester = s;
 strcpy(name,n);;
}
void displayall();
void setage(int n)
{
	age=n;
}
};
void student :: displayall( )
{
cout<<"student name,age,cnic & semester is:"<<endl;
cout<<name<<" "<<age<<" "<<cnic<<" "<<semester<<endl;
}
main( )
{student obj;
 obj.setall( 21,3675543,1,"ali");
  obj.displayall( );
   obj.setage(30); 
   student anotherobj(12,546722,2,"jawad");
   anotherobj.setall(13,433222,3,"iman");
}