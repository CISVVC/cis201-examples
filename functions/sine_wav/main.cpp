#include<iostream>
#include<cmath>

using namespace std;

double radians(double deg)
{
   return (deg * M_PI) / 180;
}

double f(double theta)
{
   return sin(theta) * cos(theta);
}

int main()
{

    double degree;
    cout << "Enter degrees: ";
    cin >> degree;
    cout << f(radians(degree));

    for(int x=0;x<360;x++)
    {
       double theta = radians(x); // calculate degrees converted to radians
       cout << theta << ','  << sin(theta)<< endl;
    }
    return 0;
}
