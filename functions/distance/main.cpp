#include<iostream>
#include<cmath>


using namespace std;

/*
this function calculates the distance between 2 points and returns the distance
@param x1  point 1 x
@param y1  point 1 y
@param x2  point 2 x
@param y2  point 2 y
*/
double distance(double x1,double y1,double x2, double y2)
{
   return sqrt(pow(x1-x2,2) + pow(y1-y2,2));
}

int main()
{
    cout << distance(1,1,2,2) << endl;
    cout << distance(2,1,3,2) << endl;
    cout << distance(4,2,5,9) << endl;
    cout << distance(-1,1,2,-2) << endl;
    return 0;
}
