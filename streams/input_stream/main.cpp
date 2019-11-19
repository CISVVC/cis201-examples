#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{
   ifstream input;
   string name;
   cout << "Enter the filename: ";
   cin >> name;
   input.open(name.c_str());
   
   char ch;
   while(input.get(ch))
   {
      cout << ch;
   }
   cout << endl;

   input.close();

   return 0;
}
