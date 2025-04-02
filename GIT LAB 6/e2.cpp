#include<iostream>
using namespace std;
class box{
	private:
		int length,height,width;
	public:
	int getvolume()
	{
		return length*height*width;
	}
	void setl(int l)
	{
	length=l;	
	}
	void setw(int w)
	{
	width=w;	
	}
	void seth(int h)
	{
	height=h;	
	}
	box operator +(const box b)
	{
	box bb;
	bb.length=this->length+b.length;
	bb.width=this->width+b.width;
	bb.height=this->height+b.height;
	return bb;	
	}
};
main()
{
	box b1;
	b1.setl(2);
	b1.setw(3);
	b1.seth(6);
	int volume=b1.getvolume();
	cout<<"box1 volume"<<volume<<endl;
	box b2;
	b2.setl(8);
	b2.setw(10);
	b2.seth(12);
	volume=b2.getvolume();
	cout<<"box2 volume"<<volume<<endl;
	box b3;
	b3=b1+b2;
	volume=b3.getvolume();
	cout<<"box3 volume"<<volume<<endl;
}