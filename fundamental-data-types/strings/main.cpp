#include<iostream>
#include<string>


using namespace std;

int main()
{
   string name1 = "Bill";
   string name2 = "Sally";
//   cout << &name1 << endl;

   cout << name1 << endl;
   cout << name2 << endl;

   string output = name1 + " is a friend of "  + name2;

   cout << output << endl;

   cout << name2.substr(0,1) << endl;
   cout << name2.substr(1,2) << endl;
   cout << name2.substr(2,3) << endl;
   cout << name2.substr(3,4) << endl;

   return 0;
}
