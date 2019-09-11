#include<iostream>
#include<cmath>


using namespace std;

const double PI = 3.14157;
int main()
{
   
   double theta = PI / 2;
   cout << "PI/2 = " << theta << endl;
   cout << cos(theta) << endl;
   cout << acos( cos(theta) ) << endl;

   return 0;
}
