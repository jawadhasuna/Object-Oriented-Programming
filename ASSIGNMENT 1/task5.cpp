#include<iostream>
using namespace std;
class TicTacToe
{
private:
    char arr[9];
public:
    TicTacToe()
	{
    for(int i=0;i<9;i++)
        arr[i]=' ';
    }
    void print()
	{
        for(int i=0;i<9;i++)
		{
             if(arr[i]=='X'||arr[i]=='O')
             {
             cout<<arr[i]<<" ";	
			 }
			 else
			 cout<<i<<" ";	 
             	if(i==2||i==5)
			{
				cout<<endl;
			}
        }
    }

  void move(int pos, char turn)
	{
            arr[pos]=turn;
    }

     bool check(char p)
	{
        int wins[8][3]={{0,1,2},{3,4,5},{6,7,8},
                        {0,3,6},{1,4,7},{2,5,8},
                        {0,4,8},{2,4,6}};
        for(int i=0;i<8;i++)
        {
        	int a=wins[i][0];
        	int b=wins[i][1] ;
        	int c=wins[i][2] ;
		if(arr[a]==p && arr[b]==p && arr[c]==p)
                return true;
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
int main()
{
	TicTacToe game;
    int pos;
    while(1)
	{
        game.print();
        cout<<"\nTurn 1 (X), enter position(0-8): ";
        cin>>pos;
        game.move(pos,'X');
        if(game.check('X'))
		{
            game.print();
            cout<<"Player 1 (X) wins!\n";
            break;
        }
        else if(game.draw())
		{
            game.print();
            cout<<"Game Draw!\n";
            break;
        }

        game.print();
        cout<<"Turn 2 (O), enter position(0-8): ";
        cin>>pos;
        game.move(pos,'O');
       if(game.check('O'))
	   {
            game.print();
            cout<<"Player 2 (O) wins!\n";
            break;
        }
        else if(game.draw())
		{
            game.print();
            cout<<"Game Draw!\n";
            break;
        }
    }
    return 0;
}