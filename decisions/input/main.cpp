#include<iostream>
#include<string>


using namespace std;


int main()
{
   int response;

   cout << "Enter 1 to quit:";
   cin >> response;

   if(cin.fail())
   {
      cout << "That is not a number" << endl;
   }
   else if(response == 1);
   {
      cout << "OK, quitting" << endl;
   }

   cout << "Enter a number between 1 and 100 : ";
   cin >> response;

   if(response < 1 || response > 100)
   {
      cout << "That value is invalid" << endl;
      return 1;
   }

   return 0;
}
