#include<iostream>
using namespace std;
class student{
	int data;
	float* height;
	public:
		student(int d,float h)
	 {
	  	data=d;
	   height =new float;
	      *height=h;
	 }
	 void  display()
	    {
    	cout<<data<<endl<<*height<<endl;
		}
};
main()
{
student s1(10,2.5);	
student s2=s1;//assignment copy 
student s3(s2);//calling function copy
s2.display(); 	
s3.display();	
}