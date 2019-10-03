#include<iostream>


using namespace std;


int main()
{
   char response;
   do
   {
      cout << "Email (type 1)" << endl;
      cout << "Web Browser (type 2)" << endl;
      cout << "World Domination (type 3)" << endl;
      cout << "Quit (type q)" << endl;
      cout << ">>>";

      cin >> response;

      if(response == '1')
      {
         cout << "Start up email system" << endl;
      }
      else if (response == '2')
      {
         cout << "Start up web browser system" << endl;
      }
      else if (response == '3')
      {
         cout << "Start up World Domination -- release the drones" << endl;
      }
      else if (response == 'q' || response == 'Q' )
      {
         cout << "Quitting" << endl;
      }
      else
      {
         cout << "Invalid choice" << endl;
      }

   }while(response != 'q' && response != 'Q');


   return 0;
e
