#include<iostream>


using namespace std;


int main()
{

   double a = 1000;
   double b = 2000;
   double* p = &a;
   *p = 3000;
   p = &b;
   a = *p * 2;
   return 0;
}
