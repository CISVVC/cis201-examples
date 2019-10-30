#include<iostream>
/*


char ar[3][3];

ar= 0 1 2 0 1 2 0 1 2
    a b c d e f g h i


*/

using namespace std;

const int COLSIZE = 3;

int sum_row(int row[],int size)
{
   int total = 0;
   for(int i=0;i < size;i++)
      total += row[i];
   return total;
}


void print_table(int table[][COLSIZE],int rows,int cols)
{
    for(int row=0;row < rows;row++)
    {
       for(int column=0;column < cols;column++)
          cout << table[row][column] << " ";
       cout << sum_row(table[row],COLSIZE);
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
//col   0  1  2
      {10,11,12},  // row 0
      {13,14,15},  // row 1
      {16,17,18}   // row 2
    };
   
    table[1][1] = 20;

    char tictacboard[3][3] = {
      {' ',' ',' '},
      {' ',' ',' '},
      {' ',' ',' '}
    };
   
    print_table(table,3,3);

    turn(tictacboard,1,1,'X');
    turn(tictacboard,0,0,'O');
    print_table(tictacboard,3,3);

    cout << endl;

    for(int row=0;row < 3;row++)
    {
       cout << table[row] << endl;
    }


    return 0;
}
