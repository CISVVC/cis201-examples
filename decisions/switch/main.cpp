#include<iostream>
#include<string>


using namespace std;


int main()
{
   int digit = 2;

   switch(digit)
   {
      case 1:
         cout << "One" << endl;
         break;
      case 2:
         cout << "Two" << endl;
         break;
      case 3:
         cout << "Three" << endl;
         break;
      default:
         cout << "Invalid" << endl;
   }

   if(digit == 1)
   {
      cout << "One" << endl;
   }
   else if(digit == 2)
   {
      cout << "Two" << endl;
   }
   else if(digit == 3)
   {
      cout << "Three" << endl;
   }
   else
   {
      cout << "Invalid" << endl;
   }

    return 0;
}
