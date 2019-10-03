#include<iostream>
#include<cmath>


using namespace std;

double sphere_volume(double r)
{
   return 4.0/3.0 * M_PI * pow(r,3);
}
int main()
{
    double volume = sphere_volume(3);
    cout << volume << endl;
    return 0;
}
