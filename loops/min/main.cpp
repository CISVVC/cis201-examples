#include<iostream>


using namespace std;


int main()
{
   /*
   Find the minimum of a list of numbers

   1. get a number and store it as the minimum
   2. while there are more numbers
   3.    get the number
         if the number is < the minimum
            minimum = number
   */
   int number;
   int minimum;
   cout << "Enter a number ";
   cin >> number;
   minimum = number;
   while(number >= 0)
   {
      cout << "Enter a number  -1 to quit > ";
      cin >> number;
      if(number != -1 && number < minimum)
      {
         minimum = number;
      }
   }
   cout << "Minimum is: " << minimum << endl;
   return 0;
}
