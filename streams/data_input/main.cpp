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
   int i_number;
   double d_number;
   string s_number;
   input >> i_number;
   input >> d_number;
   input >> s_number;

   cout << i_number << endl;
   cout << d_number << endl;
   cout << s_number << endl;
   return 0;
}
