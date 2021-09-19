#include<iostream>
using namespace std;
char board[3][3]={'1','2','3','4','5','6','7','8','9'};
char player='X';
int n;
int i,j;

 void drawboard()
 {
     system("cls");
 cout<<"   "<<"  | "<<" "<<"  | "<<" "<<endl;
 cout<<"   "<<board[0][0]<<" | "<<" "<<board[0][1]<<" | "<<" "<<board[0][2]<<endl;
 cout<<" "<<"____"<<"|"<<"____"<<"|"<<"____"<<endl;

  cout<<"   "<<"  | "<<" "<<"  | "<<" "<<endl;
 cout<<"   "<<board[1][0]<<" | "<<" "<<board[1][1]<<" | "<<" "<<board[1][2]<<endl;
 cout<<" "<<"____"<<"|"<<"____"<<"|"<<"____"<<endl;
 
  cout<<"   "<<"  | "<<" "<<"  | "<<" "<<endl;
 cout<<"   "<<board[2][0]<<" | "<<" "<<board[2][1]<<" | "<<" "<<board[2][2]<<endl;
 cout<<"     "<<"|"<<"    "<<"|"<<endl;

}
void input()
{
    int a;
    cout<<" ITS "<<player<<" TURN \n"<<"Press the number of field";
    cin>>a;
    if(a==1)
    {
        if(board[0][0]=='1')
        board[0][0]=player;
     else
     {
     cout<<"\n field is already occupied try again \n";
     input();
     }
    }
   else if(a==2)
   {
  if(board[0][1]=='2')
    board[0][1]=player;
    else
    {
     cout<<"\n field is already occupied try again \n";
     input();
    }
   }
   else if(a==3)
   {
     if(board[0][2]=='3')
    board[0][2]=player;
    else
    {
     cout<<"\n field is already occupied try again \n";
     input();
    }
   }
   else if(a==4)
   {
     if(board[1][0]=='4')
         board[1][0]=player;
      else
      {
     cout<<"\n field is already occupied try again \n";
     input();
      }
   }
   else if(a==5)
   {
     if(board[1][1]=='5') 
    board[1][1]=player;
    else
    {
     cout<<"\n field is already occupied try again \n";
     input();
    }
   }
   else if(a==6)
   {
       if(board[1][2]=='6')
    board[1][2]=player;
       else
       {
     cout<<"\n field is already occupied try again \n";
     input();
       }
   }
   else if(a==7)
   {
        if(board[2][0]=='7')
    board[2][0]=player;
       else
       {
     cout<<"\n field is already occupied try again \n";
       input();
       }
   }
   else if(a==8)
   {
        if(board[2][1]=='8')
    board[2][1]=player;
    else
    {
     cout<<"\n field is already occupied try again\n";
     input();
    }
  }
   else if(a==9)
   {
       if(board[2][2]=='9')
    board[2][2]=player;
    else
    {
     cout<<"\n fiels is already occupied try again\n";
     input();
    }
     }
}

void choice()
{
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
         {
       if(board[i][j]=='X' || board[i][j]=='O')
       { 
         
       }
       else
       {
           cout<<"Your valid choices are "<<board[i][j]<<"\n"; 
       }
         
    }
}
}

void TogglePlayer()
{
    if(player == 'X')
    player='O';
    else
    player='X';
}

char win()
{
//player 1

    if(board[0][0]=='X'  && board[0][1]=='X'  && board[0][2]=='X')
    return 'X';
    if(board[1][0]=='X'  && board[1][1]=='X'  && board[1][2]=='X')
    return 'X';
    if(board[2][0]=='X'  && board[2][1]=='X'  && board[2][2]=='X')
    return 'X';
    if(board[0][0]=='X'  && board[1][1]=='X'  && board[2][2]=='X')
    return 'X';

    if(board[0][0]=='X'  && board[1][0]=='X'  && board[2][0]=='X')
    return 'X';
    if(board[0][1]=='X'  && board[1][1]=='X'  && board[2][1]=='X')
    return 'X';
    if(board[0][2]=='X'  && board[1][2]=='X'  && board[2][2]=='X')
    return 'X';
    if(board[0][2]=='X'  && board[1][1]=='X'  && board[2][0]=='X')
    return 'X';


//2nd player

    if(board[0][0]=='O'  && board[0][1]=='O'  && board[0][2]=='O')
    return 'O';
    if(board[1][0]=='O'  && board[1][1]=='O'  && board[1][2]=='O')
    return 'O';
    if(board[2][0]=='O'  && board[2][1]=='O'  && board[2][2]=='O')
    return 'O';
    if(board[0][0]=='O'  && board[1][1]=='O'  && board[2][2]=='O')
    return 'O';

    if(board[0][0]=='O'  && board[1][0]=='O'  && board[2][0]=='O')
    return 'O';
    if(board[0][1]=='O'  && board[1][1]=='O'  && board[2][1]=='O')
    return 'O';
    if(board[0][2]=='O'  && board[1][2]=='O'  && board[2][2]=='O')
    return 'O';
    if(board[0][2]=='O'  && board[1][1]=='O'  && board[2][0]=='O')
    return 'O';

    return '/';

}


int main()
{
  n=0;
    cout<<" "<<"TICK CROSS GAME "<<endl;
    cout<<endl;
    drawboard();
    while(1)
    {
     n++; 
     choice();  
    input();
     drawboard();
    if(win()=='X')
    {
        cout<<"Player X WINS"<<endl;
        break;
    }
        else if(win()=='O')
        {
        cout<<"Player O WINS"<<endl;
        break;
        }
     else if(win()=='/' && n==9)
     {
         cout<<"\n ITS A DRAW"<<endl;
         break;
     }    
    TogglePlayer();
    }
    system("pause");
    return 0;

}

 