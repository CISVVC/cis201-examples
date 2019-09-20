#include<iostream>
#include<string>


using namespace std;


int main()
{
   
   string country = "USA";
   string state = "CA";

   double shipping = 5.0;  // shipping charge

   if(country == "USA")
       if(state == "HI")
          shipping = 10.0;
    else
       shipping = 20.0;

    cout << "Shipping cost is: " << shipping << endl;
    return 0;
}
