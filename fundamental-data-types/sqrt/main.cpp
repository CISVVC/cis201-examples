#include<iostream>
#include<cmath>


using namespace std;

const double G = 9.8;

int main()
{
   double x1,y1;
   double x2,y2;
   cout << "Enter point 1: ";
   cin >> x1 >> y1;
   cout << "Enter point 2: ";
   cin >> x2 >> y2;
   
   double distance = sqrt( pow(x2-x1,2) + pow(y2-y1,2) );
   cout << "The distance between them is: " << distance << endl;

   return 0;
}
