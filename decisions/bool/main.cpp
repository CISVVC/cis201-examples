#include<iostream>


using namespace std;


int main()
{
    bool done = false;
    string answer;
    cout << "Are you done? ";
    cin >> answer;
    if(answer == "yes")
    {
       done = true;
    }
    else
    {
       done = false;
    }
    if(done)
    {
       cout << "You're done" << endl;
    }
    else
    {
       cout << "You're not done" << endl;
    }

    return 0;
}
