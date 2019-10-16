#include<iostream>

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
void primes(int n)
{
}

int main()
{
   primes(97);
   return 0;
}

