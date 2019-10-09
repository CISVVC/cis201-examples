#include<iostream>
#include<cstdlib>

/**
scoping rules
*/
using namespace std;

const double x = 10.0;

/*
 a parameter named x
*/
double do_something(double &s)
{
   s = 100;
   double y = s * 10;
   return y;
}

/**
*/
void some_function_that_has_an_x()
{
   double x = 25;
  // do something with it 
}


void prompt_for_int(string prompt,int &x)
{
   bool done = false;
   do
   {
      cout << prompt;
      cin >> x;
      done = true;
      if(cin.fail())
      {
         cout << "That is not a valid entry, please try again." << endl;
         cin.clear();
         cin.ignore();
         done = false;
      }
   }while(!done);
}


int main()
{
    double x = 20.0;
    cout << "before call to do_something in main x="<< x << endl;
    do_something(x);
    cout << "after call to do_something in main x="<< x << endl;

    int intValue;
    prompt_for_int("Enter an integer: ",intValue);
    cout << "after call to prompt_for_int in main intValue="<< intValue << endl;

    return 0;
}
