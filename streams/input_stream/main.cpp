#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{

   ifstream input;
   input.open("alice.txt");

   if(input.fail())
   {
      cout << "File not found or is unreadable" << endl;
   }
   else
   {
      string word;
      while(!input.eof())
      {
         input >> word;
         cout << word << endl;
      }
   }

   return 0;

}
