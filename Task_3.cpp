<<<<<<< HEAD
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;


 char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
 char turn='X';
 int choice;
 int row,column;
bool draw=false;
void display(){
   
  cout<<endl;
    cout<<""<< board[0][0] <<"  | "<<board[0][1]<<" | "<<board[0][2]<<endl;
    cout<<"_ _ _ _ _ _   "<<endl;
    cout<<board[1][0]  <<"  | "<<board[1][1]<<" | "<<board[1][2]<<endl;
     cout<<"_ _ _ _ _ _ _ "<<endl;
    cout<<board[2][0]<<"  | "<<board[2][1]<<" | "<<board[2][2]<<endl;
}

void player_turn()
{

  if(turn=='X')
  {
    cout<<"Player-1 [X] turn : "<<endl;
  }

  else if(turn =='O')
  {
    cout<<"Player-2 [O] turn :  "<<endl;
  }

cin>>choice;
    switch(choice){
        case 1: row=0; column=0; break;
        case 2: row=0; column=1; break;
        case 3: row=0; column=2; break;
        case 4: row=1; column=0; break;
        case 5: row=1; column=1; break;
        case 6: row=1; column=2; break;
        case 7: row=2; column=0; break;
        case 8: row=2; column=1; break;
        case 9: row=2; column=2; break;
        default:
            cout<<"Invalid Move";
    }
    if(turn == 'X' && board[row][column] != 'X' && board[row][column] != 'O'){
        board[row][column] = 'X';
        turn = 'O';
    }else if(turn == 'O' && board[row][column] != 'X' && board[row][column] != 'O'){

        board[row][column] = 'O';
        turn = 'X';
    }else {
        
        cout<<"Box already filled!n Please choose another!!nn";
        player_turn();
    }
    display();
}


bool Over()
{
    // checking for direct row and column
    for(int i=0; i<3; i++)
    if(board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i])
    return false;
// checking for diagonal 
if(board[0][0] == board[1][1] && board[0][0] == board[2][2] || board[0][2] == board[1][1] && board[0][2] == board[2][0])
    return false;

// checking for running mode 
    for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
    if(board[i][j] != 'X' && board[i][j] != 'O')
    return true;
    }}
draw=true;
return false;

}
int main()
{
    while(Over()){
    display();
    player_turn();
    Over();
    }

    if(turn=='X' && draw==false){
        cout<<"WOW !! Congratulations Player-1[X] has won the match"<<endl;
    }
    else if(turn=='O' && draw==false){
        cout<<" WOW !! Congratulations Player-2[O] has won the match "<<endl;
    }
    else 
    {
        cout<<"!!! Game DRAW  !!!! "<<endl;
    }
=======
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;


 char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
 char turn='X';
 int choice;
 int row,column;
bool draw=false;
void display(){
   
  cout<<endl;
    cout<<""<< board[0][0] <<"  | "<<board[0][1]<<" | "<<board[0][2]<<endl;
    cout<<"_ _ _ _ _ _   "<<endl;
    cout<<board[1][0]  <<"  | "<<board[1][1]<<" | "<<board[1][2]<<endl;
     cout<<"_ _ _ _ _ _ _ "<<endl;
    cout<<board[2][0]<<"  | "<<board[2][1]<<" | "<<board[2][2]<<endl;
}

void player_turn()
{

  if(turn=='X')
  {
    cout<<"Player-1 [X] turn : "<<endl;
  }

  else if(turn =='O')
  {
    cout<<"Player-2 [O] turn :  "<<endl;
  }

cin>>choice;
    switch(choice){
        case 1: row=0; column=0; break;
        case 2: row=0; column=1; break;
        case 3: row=0; column=2; break;
        case 4: row=1; column=0; break;
        case 5: row=1; column=1; break;
        case 6: row=1; column=2; break;
        case 7: row=2; column=0; break;
        case 8: row=2; column=1; break;
        case 9: row=2; column=2; break;
        default:
            cout<<"Invalid Move";
    }
    if(turn == 'X' && board[row][column] != 'X' && board[row][column] != 'O'){
        board[row][column] = 'X';
        turn = 'O';
    }else if(turn == 'O' && board[row][column] != 'X' && board[row][column] != 'O'){

        board[row][column] = 'O';
        turn = 'X';
    }else {
        
        cout<<"Box already filled!n Please choose another!!nn";
        player_turn();
    }
    display();
}


bool Over()
{
    // checking for direct row and column
    for(int i=0; i<3; i++)
    if(board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i])
    return false;
// checking for diagonal 
if(board[0][0] == board[1][1] && board[0][0] == board[2][2] || board[0][2] == board[1][1] && board[0][2] == board[2][0])
    return false;

// checking for running mode 
    for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
    if(board[i][j] != 'X' && board[i][j] != 'O')
    return true;
    }}
draw=true;
return false;

}
int main()
{
    while(Over()){
    display();
    player_turn();
    Over();
    }

    if(turn=='X' && draw==false){
        cout<<"WOW !! Congratulations Player-1[X] has won the match"<<endl;
    }
    else if(turn=='O' && draw==false){
        cout<<" WOW !! Congratulations Player-2[O] has won the match "<<endl;
    }
    else 
    {
        cout<<"!!! Game DRAW  !!!! "<<endl;
    }
>>>>>>> 7d046ba542ba31113bb7f5b7c87589234ad26744
}