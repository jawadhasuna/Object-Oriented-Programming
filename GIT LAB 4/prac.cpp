#include<iostream>
using namespace std;
class student{
int age;
int cnic;
int semester; 
string name;
public:
const int setall(int a, int c, int s, string n) 
{
age = a;
cnic = c;
semester = s; 
name = n;
}
void displayall();
void setage(int a)
{
	age=a;
}
};
void student :: displayall ( )
{
cout<<"The entered data is"<<age<<cnic<<semester<<name;
}
main( )
{
student obj; 
obj.setall(21,313,1,"jawad");
obj.setage(4); 
 student anotherobj=obj;
 anotherobj.displayall( ); 
}