#include<iostream>
#include<string>
#include<fstream>
#include<vector>

using namespace std;

int main()
{

   ifstream input("alice.txt");
   
   if(input.fail())
   {
      cout << "File did not open" << endl;
   }
   else 
   {
      //input.open("alice.txt");
      char ch;
      while(input.get(ch))
      {
         cout << ch;
      }
   }

   return 0;

}
