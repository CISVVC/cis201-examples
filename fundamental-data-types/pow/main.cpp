#include<iostream>
#include<cmath>


using namespace std;

const double G = 9.8;

int main()
{
  // F = (G * m1 * m2) / pow(d,2);
  /*
   double m1 = 7.347e22; // moon
   double m2 = 5.972e24; // earth
   double d = 238900.00 * 1.67 * 1000;
  */
// prompt for first mass
   double m1;
   double m2;
   double d;
   cout << "Enter the mass of first body, the second body and the distance between them: ";
   cin >> m1 >> m2 >> d;

   double F = (G * m1 * m2) / pow(d,2);

   cout << F << endl;

   return 0;
}
