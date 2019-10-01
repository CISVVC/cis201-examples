#include<iostream>


using namespace std;


int main()
{
   double number;
   double sum = 0.0;
   int count = 0;
   // while not end of file
   while(!(cin.eof()))  // end of file for linux and MacOs is ^d and eof for MSWindows is ^z 
   {
      cout << "Enter a fp number enter ^d to finish: ";
      cin >> number; 
      if(!(cin.eof()))
      {
         count = count + 1;
         sum = sum + number;
      }
   }
   cout << endl;
   cout << "You entered " << count << " numbers" << endl;
   cout << "The sum is: " << sum << endl;

   return 0;
}
