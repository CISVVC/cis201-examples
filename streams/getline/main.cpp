#include<iostream>
#include<string>
#include<fstream>


using namespace std;

const int BUF_LENGTH = 100;
int main()
{
    string line;
    ifstream input_file("alice.txt");

    if(input_file.fail())
    {
       cout << "File not found" << endl;
    }
    else
    {
       while(!input_file.eof())
       {
           char buffer[BUF_LENGTH];
           input_file.getline(buffer,BUF_LENGTH - 1);
           cout << buffer << endl;
       }
    }

    return 0;
}
