#include<iostream>


using namespace std;


int main()
{
   double sum =0.0;
   //Prompt for value and add it to sum
   cout << "Enter values (make it negative to quit):" << endl;
   double value=0.0;
   while( value >= 0 )
   {
      cin >> value;
      if(value >=0)
         sum += value;
   }
   cout << "The sum is: " << sum << endl;
   return 0;
}
