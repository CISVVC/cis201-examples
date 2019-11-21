#include<iostream>
#include<cctype>
#include<fstream>


using namespace std;


int main()
{
   string name;
   cout << "Enter a file name:";
   cin >> name;

   ifstream in_file(name);
   if(in_file.fail()) 
   {
      cout << "File not find" << endl;
   }
   else
   {
      char ch;
      while(!in_file.eof())
      {
         int n=0;
         in_file.get(ch);
         if(isdigit(ch))
         {
            //if it is a digit
            in_file.unget();
            in_file >> n;
            cout << n << endl;
         }
         
       }
   }

   return 0;
}

   return 0;
}
