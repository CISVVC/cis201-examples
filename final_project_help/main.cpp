#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<cctype>


using namespace std;

struct Word {
   string word;  // this is the word
   vector<int> chapters;
   vector<int> lines;

};

void print_entry(const Word &w)
{
   cout << "Word: " << w.word << endl;
   cout << "Chapter: " << w.chapters[0] << endl;
   cout << "Line: " << w.lines[0] << endl;
}

void read_text(ifstream &input_file,vector<string>&text)
{
   while(!input_file.eof())
   {
      string s;
      getline(input_file,s);
      text.push_back(s);
   }
}

string lower_case(const string &s)
{
   string lowered="";
   for(int i=0;i<s.size();i++)
      lowered += tolower(s[i]);
   return lowered;
}

bool find_word(string word,vector<Word> &index)
{
   for(int i=0;i<index.size();i++)
      if(lower_case(word) == index[i].word)
         return true;
   return false;
}


void fill_index(vector<Word> &index,const vector<string> &text)
{
   int chapter = 0;
   for(int i=0;i<index.size();i++)
   {
      int line_number = i+1;
      //while(there is a word in the line)
         //find_the_word_in_index
         //  if (lower_case(word) == "chapter")
         //      chapter++;
         //  if(find_word(word,index))
         //      iterate over the index[i].chapter and see if the current chapter is in the vector
         //      if it is not then
         //         push it on the chapter vector
         //      iterate over the index[i].lines and see if the current line number is line_number
         //      if it is not then
         //         push it on the line vector

   }
}

int main()
{
   vector<Word> index;
   vector<string> text;

   ifstream input_file("alice.txt");
   read_text(input_file,text);
   fill_index(index,text);


   return 0;
}
