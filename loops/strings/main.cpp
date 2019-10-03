#include<iostream>
#include<iomanip>
#include<string>


using namespace std;


int main()
{
    string alpha = "abcdefghijklmnopqrstuvwxyz";


    for(int i=0;i<alpha.length();i++)
    {
       cout << setw(3) << i << " " << alpha.substr(i,i+1) << endl;
    }
    return 0;
}
