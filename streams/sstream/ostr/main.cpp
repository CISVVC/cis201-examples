#include<iostream>
#include<string>
#include<sstream>
#include<iomanip>


using namespace std;


int main()
{
   string month = "January";
   int day = 3;
   int year = 1973;
   
   ostringstream ostrm;

   ostrm << month << " " << setw(2) << setfill('0') << day << "," << year;

   cout << ostrm.str() << endl;
   return 0;
}
