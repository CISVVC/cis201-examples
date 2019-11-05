#include<iostream>


using namespace std;

int main()
{

   double account1 = 1000.0;   // a variable that contains the value 1000.0
   double account2 = 2000.0;   // another variable
   double* current_account = &account1;  // the current_account pointer is now pointing to the address of account1
   *current_account = 3000.0;  // the value in the account1 variable is now 3000.0
   current_account = &account2;
   account2 = *current_account * 2;
   return 0;
}
