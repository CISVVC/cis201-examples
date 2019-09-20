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


   return 0;
}
