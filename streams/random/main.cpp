#include<iostream>
#include<fstream>
#include<string>


using namespace std;

string get_next_word(fstream &fs)
{
   // sequential
   char c;
   string word;
   while(!fs.eof() && c != ' ')
   {
      fs.get(c);
      if(c != ' ')
         word += c;
   }
   return word;
}

int main()
{
   fstream strm("alice.txt");


   strm.seekg(35);
   string word;
   strm >> word;
   cout << word << endl;
   cout << strm.tellg();

   strm.seekp(38);
   strm << "WONDERLAND";
   strm.close();

   strm.open("alice.txt");
   while(!strm.eof())
   {
      cout << get_next_word(strm) << endl;
   }

   return 0;
}
