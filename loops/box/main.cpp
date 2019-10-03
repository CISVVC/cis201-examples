#include<iostream>


using namespace std;
/*

**********
*        *
*        *
*        *
*        *
**********
   WIDTH = 10
   HEIGHT = 6
   # print the top
   for col = 0 to WIDTH 
      print *
   # print the middle
   for row = 1 to HEIGHT - 2
      print *
      for col = 1 to WIDTH
         print space
      print * + '\n'
   # print the bottom
   for col = 0 to WIDTH - 1
      print *
*/

const int WIDTH = 10;
const int HEIGHT = 6;
const string BORDER = "+";
const string FILL = "/";
int main()
{
   /*
      for(int row=0;row < 5;row++)
      {
         for(int col=0;col < 5;col++)
         {
            cout << "*";
         }
         cout << endl;
      }
      cout << endl;
      */
      // print the top

      for(int col=0;col < WIDTH;col++)
         cout << BORDER;
      cout << endl;
      // print the middle
      for(int row = 1;row < HEIGHT-1;row++)
      {
         cout << BORDER;
         for(int col = 1;col<WIDTH-1;col++)
            cout << FILL;
         cout << BORDER << endl;
      }
      // print the bottom
      for(int col=0;col < WIDTH;col++)
         cout << BORDER;
      cout << endl;


      return 0;
}
