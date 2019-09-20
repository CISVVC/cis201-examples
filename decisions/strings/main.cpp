#include<iostream>
#include<string>


using namespace std;


int main()
{
   string fruit1 = "apples";
   string fruit2 = "Oranges";
   
   if(fruit1 < fruit2)
   {
      cout << fruit1 << " is less than " << fruit2;
   }
   else if(fruit1 > fruit2)
   {
      cout << fruit1 << " is greater than " << fruit2;
   }
   else
   {
      cout << fruit1 << " is equal to " << fruit2;
   }
   cout << endl;

   

   string s1 = "Hello";
   string s2 = "gel";

   if(s1.substr(1,2) == s2.substr(1,2))
   {
      cout << "Yes" << endl;
   }




   return 0;
}
