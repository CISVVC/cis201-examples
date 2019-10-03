#include<iostream>


using namespace std;


int main()
{
   double number;
   double sum = 0.0;
   int count = 0;
   cout << "Enter numbers: " << endl;
   do
   {
      cin >> number;
      if(number >= 0.0)
      {
         sum = sum + number;
         count = count + 1;
      }
      
   }while(number >= 0.0);

   cout << "The average is " << sum / count << endl;

   return 0;
}
