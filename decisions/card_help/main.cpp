#include<iostream>
#include<string>


using namespace std;


int main()
{

   string input;
   string rank;
   string suit;

   cout << "Enter rank and suit > ";
   cin >> input;
   if(input.length() == 2)
   {
      rank = input.substr(0,1);
      suit = input.substr(1,1);
   }


   return 0;
}
