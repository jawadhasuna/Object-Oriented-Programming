#include<iostream>
using namespace std;
class instrument{
	public:
	virtual void play()=0;
};
class piano:public instrument
{
	public:
	void play()
	{
		cout<<"piano ping ping \n";
	}
};
class guitar:public instrument
{
	public:
	void play()
	{
		cout<<"guitar tueeenueeenuuuu \n";
	}
};
class drums:public instrument
{
	public:
	void play()
	{
		cout<<"drum dhum dhum \n";
	}
};

main()
{
	instrument *arr[3];
	guitar g; 
	drums d;
	piano p;
	arr[0]=&p;
	arr[1]=&g;
	arr[2]=&d; 
	arr[0]->play();
	arr[1]->play();
	arr[2]->play();	
}