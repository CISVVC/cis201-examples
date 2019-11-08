#include<iostream>
#include<vector>

using namespace std;
/*
Description: find all primes up to n primes
 */

/*
Pseudocode:
precondition n is an integer

  declare possible        // possible prime number
  declare factor         //  factor of previous number

  print 2    // treat first two primes as special case
  print 3

  possible = 5        // initial possible value

  while  possible is less than or equal to n
  do
    // look for a factor of possible 
    factor = 3
    while factor*factor < possible and possible is not divisible by factor
    do
      factor = factor + 2
    done

    if  possible is not divisible by  factor
    then
       print possible
    endif

    possible = possible + 2    // only look at odd numbers
 done

*/
// Define the following function
vector<int> primes(int n)
{
   vector<int> p;
   int factor;

   p.push_back(2);
   p.push_back(3);
   int guess = 5;
   while(guess <= n)
   {
      factor = 3;
      while(factor*factor < guess && guess % factor != 0)
         factor += 2;
      if(guess % factor != 0)
         p.push_back(guess);
      guess += 2;
   }
   return p;
}

void print_primes(int n)
{
   int factor;

   cout << 2 << endl;
   cout << 3 << endl;
   int guess = 5;
   while(guess <= n)
   {
      factor = 3;
      while(factor*factor < guess && guess % factor != 0)
         factor += 2;
      if(guess % factor != 0)
         cout << guess << " "  << factor << endl;
      guess += 2;
   }
}

void print_vec(vector<int> p)
{
   for(auto i : p)
      cout << i << " ";
}
int main()
{

   //print_vec(primes(1000000000));
//   print_primes(1000000000);
   int n;
   cin >> n;
   print_primes(n);

   return 0;
}

