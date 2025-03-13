#include<iostream>
using namespace std;
class Student{
	int id;
	float* grades;
	public:
	Student(int i)
	{
		id=i;
	     grades=new float[5];
         cout<<"enter 5 subject grades:";
         for(int i=0;i<5;i++)
         {
         	cin>>grades[i];
		 }
	}
	Student(const Student &first)//deep constructor
	{
	  id =first.id;
      grades=new float[5];
         for(int i=0;i<5;i++)
         {
         	grades[i]=first.grades[i];
		 }
	}
	~Student()
	{
		delete [] grades;
	}
	void modify()
	{
		id=5;
         for(int i=0;i<5;i++)
         {
         	grades[i]=i;
		 }	
	}
	void display(Student &two)
	{
	cout<<"student1 id:"<<id<<endl;
	cout<<"student2 id:"<<two.id<<endl;
	cout<<"student1 gardes:"<<endl;
	for(int i=0;i<5;i++)
         {
         	cout<<grades[i]<<endl;
		 }	
	cout<<"student2 gardes:"<<endl;	 
	for(int i=0;i<5;i++)
         {
         	cout<<two.grades[i]<<endl;
		 }	 
	}
};
main()
{
Student student1(1);
Student student2=student1;
student1.modify();
student1.display(student2);	
}