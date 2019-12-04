#include<iostream>
#include<string>
#include<sstream>


using namespace std;


int main()
{
   string s= "This is paul's string";
   istringstream str(s);
   char c;
   while(str.get(c))
   {
      if(c != '\'')
         cout << c;
   }

   return 0;
}
