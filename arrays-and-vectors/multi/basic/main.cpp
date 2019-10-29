#include<iostream>


using namespace std;

const int COLSIZE = 3;

void print_table(int table[][COLSIZE],int rows,int cols)
{
    for(int row=0;row < rows;row++)
    {
       for(int column=0;column < cols;column++)
          cout << table[row][column] << " ";
       cout << endl;
    }
}

void print_table(char table[][COLSIZE],int rows,int cols)
{
    for(int row=0;row < rows;row++)
    {
       for(int column=0;column < cols;column++)
          cout << table[row][column] << " ";
       cout << endl;
    }
}

void turn(char board[][COLSIZE],int row,int col,char player)
{
   board[row][col] = player;
}

int main()
{
    int table[3][3] = {
      {10,11,12},
      {13,14,15},
      {16,17,18}
    };
    char tictacboard[3][3] = {
      {' ',' ',' '},
      {' ',' ',' '},
      {' ',' ',' '}
    };
   
    print_table(table,3,3);
    print_table(tictacboard,3,3);
    turn(tictacboard,-1,-11,'X');


    return 0;
}
