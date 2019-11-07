#include<iostream>


using namespace std;


int main()
{
    double account1 = 1000.0;
    double account2 = 2000.0;

    cout << account1 << endl;
    double *current_account = &account1;
    *current_account += 100.0;
    cout << account1 << endl;

    cout << account2 << endl;
    current_account = &account2;
    *current_account += 1000.0;
    cout << account2 << endl;

    return 0;
}
