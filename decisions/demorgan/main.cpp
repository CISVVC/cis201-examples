#include<iostream>
#include<string>


using namespace std;

int main()
{
   string country = "GER";
   string state = "CA";
   double shipping = 5.0;
/*
  !(country == "USA"  && state != "HI" && state != "AK")

  (country != "USA" || state == "HI" || state == "AK")
*/
   if(!(country == "USA"
        && state != "HI"
        && state != "AK"
      ))
   {
      shipping = 20.00;
   }
   cout << "Without deMorgan shipping = "<< shipping << endl;

   shipping = 5.0;
   if( country != "USA" || state == "HI" || state == "AK") 
   {
      shipping = 20.00;
   }
   cout << "With deMorgan shipping = "<< shipping << endl;
   return 0;
}
