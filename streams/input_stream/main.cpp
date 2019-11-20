#include<iostream>
#include<string>
#include<fstream>
#include<vector>

using namespace std;

int main()
{

   ifstream input;

   input.open("/usr/share/dict/words");

   string word;
   vector<string> word_list;

   while(input >> word)
   {
      word_list.push_back(word);
   }

   for(string w : word_list)
      cout << w << endl;

   return 0;

}
