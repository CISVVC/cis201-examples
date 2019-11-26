#include<iostream>
#include<iomanip>
#include<cctype>
#include<string>
#include<sstream>


using namespace std;


int main()
{
   string s = "$120";
   istringstream istrstrm(s);
   string buffer="";
   char ch;
   while(istrstrm.get(ch))
   {
      if(isdigit(ch))
      {
         buffer += ch;
      }
   }
   cout << setprecision(2) << stod(buffer) << endl;

   istringstream strm;
   strm.str("January 24, 1973");
   string month;
   int day;
   string comma;
   int year;
   strm >> month >> day >> comma >> year;

   cout << "Month: "<< month  << endl;
   cout << "Day: "<< day  << endl;
   cout << "Year: "<< year  << endl;

   return 0;
}
