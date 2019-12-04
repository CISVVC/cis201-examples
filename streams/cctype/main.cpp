#include<iostream>
#include<string>
#include<vector>
#include<cctype>


using namespace std;


int main()
{
   char ch;
   while(cin.get(ch))
   {
      if(isalpha(ch))
         cout << ch;
   }
   return 0;
}
