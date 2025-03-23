#include<iostream>
using namespace std;
class tictactoe{
	char arr[9];
	public:
	tictactoe()
	{
		for(int i=0;i<9;i++)
		{
		arr[i]=' ';	
		}
	}	
	void print()
	{
		for(int i=0;i<9;i++)
		{
			if(arr[i]=='X'||arr[i]=='O')
			cout<<arr[i]<<" ";
			else
			cout<<i<<" ";
			if(i==2||i==5)
			{
				cout<<endl;
				}	
		}	
	}
	void move(int pos,char p)
	{
		arr[pos]=p;
	}
	bool check(char p)
	{
	int win[8][3]={{0,1,2},
				   {3,4,5},
	               {6,7,8},
	               {0,3,6},
	               {1,4,7},
	               {2,5,8},
	               {0,4,8},
	               {2,4,6}};
    	for(int i=0;i<8;i++)
		{
			int a=win[i][0];
			int b=win[i][1];
			int c=win[i][2];
			if(arr[a]==p && arr[b]==p && arr[c]==p)
			{
				return true;
			}
		}
		return false;              	
	}
	bool draw()
	{
	for(int i=0;i<9;i++)
	{
		if(arr[i]==' ')
		   return false;
		}
		return true;	
	}
};
main()
{
tictactoe game;
int pos;
while(1)
   {
	 game.print();
	 cout<<"\nturn1(X),enter pos:";
	 cin>>pos;
	 game.move(pos,'X');
	 if(game.check('X'))
	 {
	 	game.print();
		 cout<<"\nhuman1 (X),won the game!\n";
		 break;
	 }
	 else if(game.draw())
	 {
	 	game.print();
		 cout<<"game draw!\n";
		 break;
	 }
	 game.print();
	 cout<<"\nturn2(O),enter pos:";
	 cin>>pos;
	 game.move(pos,'O');	
	  if(game.check('O'))
	 {
	 	game.print();
		 cout<<"\nhuman2(O),won the game!\n";
		 break;
	 }
	 else if(game.draw())
	 {
	 	game.print();
		 cout<<"game draw!\n";
		 break;
	 }
   }			
}