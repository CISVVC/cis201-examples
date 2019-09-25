#include<iostream>


using namespace std;


int main()
{
   // while loop version
   cout << "With while loop: " << endl;
   int count = 0;
   while( count < 5  )
   {
      cout << count << endl;
      count++;
   }
   
   // for loop version
   //  initializer; condition; update
   cout << "With the for loop: " << endl;
   for(int count=1;count <= 10;count++);
   {
      cout << count << endl;
   }

   // for loop version
   //  initializer; condition; update
   cout << "Counting by 2 With the for loop: " << endl;
   for(int number=0;number < 20; number+=2 )
   {
      cout << number << endl;
   }

   // for loop version
   //  initializer; condition; update
   cout << "Print all odd numbers from 1 to 21: " << endl;
   for(int number=1;number <= 21; number+=2 )
   {
       cout << number << endl;
   }

   return 0;
}
