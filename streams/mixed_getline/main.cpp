#include<iostream>
#include<string>
#include<fstream>


using namespace std;


const int BUF_LENGTH = 100;
int main()
{
    ifstream infile("data.txt"); 
    
    if(infile.fail())
    {
       cout << "File cannot be opened";
    }
    else
    {
       char buffer[BUF_LENGTH];
       int number;
//       string dummy;
       while(!infile.fail() )
       {
          infile.getline(buffer,BUF_LENGTH);
          infile >> number;
          infile.ignore();
//          getline(infile,dummy);
          cout << number << " " << buffer << endl;
       }
       cout << "Done" << endl;
    }
    return 0;
}
