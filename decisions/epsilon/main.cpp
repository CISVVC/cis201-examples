#include<iostream>
#include<cmath>


using namespace std;

const double EPSILON = 1e-4;

int main()
{    
   double r = sqrt(2);

   cout << abs(r * r - 2.0) << endl;

   if(abs(r * r - 2.0) < EPSILON)
   {
      cout << "it worked" << endl;
   }


   return 0;
}
