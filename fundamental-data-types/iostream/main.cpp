#include<iostream>
#include<iomanip>


using namespace std;


int main()
{
   cout << "Enter 2 values for the point: ";
   double x1,y1;
   cin >> x1 >> y1;
   cout << fixed
        << setprecision(2)
        << setw(4)
      << "(" << x1 << "," << y1 << ")" << endl;
   return 0;
}
