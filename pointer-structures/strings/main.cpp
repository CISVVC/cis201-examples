#include<iostream>
#include<string>


using namespace std;


int main()
{
   string input_buffer;
   char ch;
   while(cin.get(ch))
   {
      if(ch == '\n')
      {
         // some action
      }
      input_buffer += ch;
   }

   const char *s_ptr = input_buffer.c_str();

   while( *s_ptr != '\0')
   {
      cout << *s_ptr<<endl;
      s_ptr++;
   }

   return 0;
}
