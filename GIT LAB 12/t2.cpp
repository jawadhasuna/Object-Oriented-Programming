#include<iostream>
using namespace std;
class device {
	protected:
	string name;
	int status;
	public:
	device(string n,int s):name(n),status(s){}
	virtual void performfunc()
	{
		cout<<"device";
	}
};
class light:public device{
	public:
	light(string n,int s):device(n,s){}
	void performfunc()
	{
		cout<<"turning on light"<<endl;
	}
};
class thermostat:public device{
	public:
	thermostat(string n,int s):device(n,s){}
	void performfunc()
	{
		cout<<"adjusting temp"<<endl;
	}
};
class door:public device{
	public:
	door(string n,int s):device(n,s){}
	void performfunc()
	{
		cout<<"door locked"<<endl;
	}
};
class homecontroller{
	private:
	light l;
	thermostat t;
	door d;	
	public:
homecontroller():l("bulb",1),t("thermo",0),d("doorlock",1)
{
l.performfunc();
t.performfunc();
d.performfunc();	
}

};
main()
{
homecontroller h;
}