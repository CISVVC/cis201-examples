#include<iostream>


using namespace std;

int main()
{
   int a,b;

   a = 10;
   b = 13;

   cout << "a=" << a << " b=" << b << endl;
   if( a < b )
   {
      cout << a << " < " << b << "? Yes" << endl;
   }
   else
   {
      cout << a << " < " << b << "? No" << endl;
   }


   if( a == b )
   {
      cout << a << " == " << b << "? Yes" << endl;
   }
   else
   {
      cout << a << " == " << b << "? No" << endl;
   }

   if( a != b )
   {
      cout << a << " != " << b << "? Yes" << endl;
   }



   return 0;
}
