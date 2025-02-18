#include<iostream>
using namespace std;
class Car{
	public:
	string type,model,color;
	float speed;
	
	void display()
{
	cout<<"car attributes are: "<<type<<" "<<model<<" "<<color<<" "<<speed<<endl;
}
};
main()
{
	
	Car c[3];
	c[0].type="maruti";
	c[0].model="focus";
	c[0].color="red";
	c[0].speed=20.4;
	c[0].display();
	
	c[1].type="audi";
	c[1].model="golf";
	c[1].color="blue";
	c[1].speed=30.4;
	c[1].display();
	
	c[2].type="bmw";
	c[2].model="auris";
	c[2].color="green";
	c[2].speed=40.4;
	c[2].display();

}