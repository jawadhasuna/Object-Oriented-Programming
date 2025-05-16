#include<iostream>
using namespace std;
class instrument{
public:
virtual void play()=0; 	
};
class guitar:public instrument{
	public:
	void play()
	{
	cout<<"tunee\n";	
	}
};
class piano:public instrument{
	public:
	void play()
	{
		cout<<"ping\n";	
	}
	
};
class drums:public instrument{
	public:
	void play()
	{
	cout<<"dhum\n";	
	}
	
};

main()
{
instrument *i[3];
guitar g;
piano p;
drums d;
i[0]=&g;	
i[1]=&p;	
i[2]=&d;
i[0]->play();	
i[1]->play();
i[2]->play();
}