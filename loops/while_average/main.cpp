#include<iostream>


using namespace std;


int main()
{
   double number;
   double sum = 0.0;
   double sum_square = 0.0;
   int count = 0;
   bool done=false;

   while(!done)  
   {
      cout << "Enter a fp number enter a character to finish: ";
      cin >> number; 
      if(cin.fail())
      {
         done = true;
      }
      else
      {
         sum = sum + number;
         sum_square = sum_square + (number * number);
         count = count + 1;
      }
   }
   cout << endl;
   cout << "You entered " << count << " numbers" << endl;
   cout << "The sum is: " << sum << endl;
   cout << "The sum of squares is: " << sum_square << endl;

   return 0;
}
