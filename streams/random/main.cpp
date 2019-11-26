#include<iostream>
#include<fstream>
#include<string>


using namespace std;


int main()
{
   fstream strm("alice.txt");
 
   // sequential
   /*
   char c;
   while(strm.get(c))
   {
      cout << c;
   }
   cout << "******************" << endl;
   cout << "last character is: ";
   strm.get(c);
   cout << c;
   */
   strm.seekg(35);
   string word;
   strm >> word;
   cout << word << endl;
   cout << strm.tellg();

   strm.seekp(38);
   strm << "wonderland";
   strm.close();

   return 0;
}
