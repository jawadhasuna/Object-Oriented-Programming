#include<iostream>
using namespace std;
int i=0;
void display(string type,string model,string color,float speed)
{
	i++;
	cout<<"car "<<i<< " attributes are: "<<type<<" "<<model<<" "<<color<<" "<<speed<<endl;
}
main()
{
	string type1,model1,color1,type2,model2,color2,type3,model3,color3;
	float speed1,speed2,speed3;
	type1="maruti";
	model1="focus";
	color1="red";
	speed1=20.4;
	type2="audi";
	model2="golf";
	color2="blue";
	speed2=30.4;
	type3="bmw";
	model3="auris";
	color3="green";
	speed3=40.4;
	display(type1,model1,color1,speed1);
	display(type2,model2,color2,speed2);
	display(type3,model3,color3,speed3);
}