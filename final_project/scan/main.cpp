#include<iostream>
#include<string>
#include<vector>
#include<cctype>
#include<fstream>


using namespace std;

/**
  get_word
*/
string get_word(ifstream &fs)
{
   string w="";
   char ch;
   while(fs.get(ch))
   {
      if(isalpha(ch))
      {
         w += tolower(ch);
      }
      else
      {
         break;
      }
   }
   return w;

}

vector<string> fill_vector(ifstream &fs)
{
    vector<string> v;
    while(!fs.eof())
    {
       string word = get_word(fs);
       if(word.size() > 0)
       {
          v.push_back(word);
       }
    }
    return v;
}

bool find(const vector<string> &dict,const string &word)
{
   for(string d : dict)
      if(word == d) // if the word is found
         return true;
   return false; // returns false if the word is not found
}

void print_misspelled(const vector<string> &dict,const vector<string> &words)
{
     for(string word : words)
     {
         if(!find(dict,word)) // the word is not found in the dictionary
            cout << word << endl; // print it out
     }
}


int main()
{
    ifstream istrm("alice_misspelled.txt");
    ifstream d_file("/usr/share/dict/words");
   
    vector<string> dict = fill_vector(d_file);
    vector<string> words = fill_vector(istrm);

    print_misspelled(dict,words);

    return 0;
}
