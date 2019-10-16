#include<iostream>


using namespace std;

string center_alignment(string innerword,int outersize)
{
   int marginsize = (outersize - innerword.length()) / 2;
   string spaces = "";
   for(int i=0;i<marginsize;i++)
   {
      spaces += " ";
   }
   return spaces + innerword;
}

int main()
{
   string month = "June 2019";
   string columns = "Su  Mo  Tu  We  Tr  Fr  Sa";
   cout << center_alignment(month,columns.length()) << endl;
   cout << columns << endl;
   return 0;
}
