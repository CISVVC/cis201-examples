#include<iostream>
#include<cmath>


using namespace std;

const double PI = 3.14157;
int main()
{
   
   double angle = PI / 2;
   cout << "PI/2 = " << angle << endl;
   cout << cos(angle) << endl;
   cout << acos( cos(angle) ) << endl;

   return 0;
}
