#include<iostream>
using namespace std;
class CartItem
{
	int itemcode;
	string itemName;
	float* price;
	static int totalitems;
	static float totalamount;
	public:
	int quantity;
	CartItem(int c,int q,string n,float p)
	{
	itemcode=c;
	quantity=q;
	itemName=n;
	price=new float;
	*price=p;
	totalitems++;
	totalamount=totalamount+*price;	
	}
	CartItem()
	{
		
	}
	CartItem(CartItem &obj)
	{
	itemcode=obj.itemcode;
	quantity=obj.quantity;
	itemName=obj.itemName;
	price=new float;
	*price=*obj.price;	
	totalitems++;
	totalamount=totalamount+*price;	
	}
	~CartItem()
	{
		delete price;
        totalitems--;
	}
	static int gettotalitems()
	{
		return totalitems;
	}
	static int gettotalamount()
	{
		return totalamount;
	}
	int operator +(const CartItem &obj)
	{
	if(itemcode==obj.itemcode)
	{

	return this->quantity+obj.quantity;
	
	}	
	}
	bool operator ==(const CartItem &obj)
	{
	if(itemcode==obj.itemcode)
	{
	return true;	
	}	
	else 
	{
	return false;
	}
	}
	void display()
	{
		cout<<"details of item:\nitem code:"<<itemcode<<"\nitem name:"<<itemName<<"\nquantity:"<<quantity<<"\nprice:"<<*price<<endl;
	}
	void displayquantity()
	{
		cout<<"quantity:"<<quantity<<endl;
	}
	
};
int CartItem::totalitems=0;
float CartItem::totalamount=0;
main()
{
CartItem a(1,10,"soap",23.4);
a.display();
CartItem b(1,11,"soap",33.4);
b.display();
CartItem c=a;
c.quantity=a+b;
c.displayquantity();	
cout<<"total items created:"<<CartItem::gettotalitems()<<endl;
cout<<"total amount spent:"<<CartItem::gettotalamount()<<endl;	
}