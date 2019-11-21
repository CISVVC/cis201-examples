#include<iostream>
#include<cmath>
#include<fstream>


using namespace std;

double rad(double deg)
{
   return (deg * M_PI) / 180.0;
}

int main()
{
    ofstream output("data.txt");

    for(int i=0;i<=360;i++)
    {
         output << i << "\t" << sin(rad(i)) << endl;
    }

    return 0;
}
