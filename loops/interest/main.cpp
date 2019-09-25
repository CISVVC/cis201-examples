#include<iostream>
#include<iomanip>


using namespace std;


const double INTEREST_RATE = 0.05;

int main()
{
   /*
   to calculate double the initial balance  on an initial balance of 10000
   do the following:

   set initial_balance to 10000.0
   set balance to initial_balance
   set year to 0
   print the table header

   while balance < 2 * initial_balance
      set year to year + 1
      set interest  to  balance * .05
      balance = balance + interest

   print the balance and the year
   */
   double initial_balance = 10000;
   double balance = initial_balance;
   int year = 0;
   cout << setw(4);
   cout << "Year" << setw(10) << "Interest";
   cout << setw(12) << "Balance" << endl;
   cout << "----------------------------";
   cout << endl;
   cout << fixed << setprecision(2);
   while( balance < 2 * initial_balance)
   {
      year++; 
      double interest = balance * INTEREST_RATE;
      balance = balance + interest;
      cout << setw(4) << year;
      cout << setw(9) << interest;
      cout << setw(12) << balance;
      cout << endl;
   }
   cout << "----------------------------" << endl;
   cout << "Balance=" << balance;
   cout << "  Year=" << year << endl;

   return 0;
}
