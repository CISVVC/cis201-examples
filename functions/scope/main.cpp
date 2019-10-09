#include<iostream>
#include<cmath>

using namespace std;

const double X=10.0;

void print_x(double &x)
{
   x = M_PI;
   cout << x << endl;
}

void print_n_values(int n)
{
   for(int i = 0;i < n;i++)
   {
      cout << "outer:"<< i << endl;
      for(int j = 0;j < n;j++)
      {
         cout << "inner: " << j << endl;
      }
   }
}

int main()
{
   double x = 100;
   print_x(x);
   cout << x << endl;

   //print_n_values(5);
   return 0;
}
