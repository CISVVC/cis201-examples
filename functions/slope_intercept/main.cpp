#include<iostream>


using namespace std;

double slope(double y2,double y1,double x2,double x1)
{
   return (y2 - y1) / (x2 - x1);
}

//double line(double y2,double y1,double x2,double x1,double x,double intercept)
double line(double m,double x,double intercept)
{
   return m * x + intercept;
}

int main()
{
    double m = slope(3,0,1,-1);
    for(int x=0;x<25;x++)
    {
        cout << x << ','  << line(m,x,1)<< endl;
    }
    return 0;
}
