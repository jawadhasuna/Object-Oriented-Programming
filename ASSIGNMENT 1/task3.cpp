#include<iostream>
using namespace std;
class time
{
	private:
	int hours,minutes,seconds;
	public:
	time()
	{
	hours=0,minutes=0,seconds=0;	
	}
	time(int h,int m,int s)
	{
	hours=h,minutes=m,seconds=s;	
	}
	void print()
	{
	cout<<"time= "<<hours<<":"<<minutes<<":"<<seconds<<endl;
	}
	void setTime(int hr,int min,int sec)
	{
	hours=hr,minutes=min,seconds=sec;	
	}
	void tick()
	{
		seconds+=1;
		if(seconds>=60)
		{
			seconds=0;
			minutes++;
		}
		if(minutes>=60)
		{
			minutes=0;
			hours++;
		}
		if(hours>=24)
		{
			hours=0;
		}
	}
	void add(time one,time two)
	{
		hours=one.hours + two.hours;
		minutes=one.minutes + two.minutes;
		seconds=one.seconds + two.seconds;
			if(seconds>=60)
		{
			seconds-=60;
			minutes++;
		}
		if(minutes>=60)
		{
			minutes-=60;
			hours++;
		}
		if(hours>=24)
		{
			hours-=24;
		}
	}
};
int main()
{
	time t1(0,0,0);
	t1.print();
	for(int i=0;i<1000;i++)
	{
		t1.tick();
		t1.print();
	}
	t1.setTime(11,40,40);
	time t2(10,19,20);
	time t3;
	cout<<"t1 ";
	t1.print();
	cout<<"t2 ";
	t2.print();
	cout<<"new t3 added ";
	t3.add(t1,t2);
	t3.print();
	return 0;
}