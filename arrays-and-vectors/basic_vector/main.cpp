#include<iostream>
#include<vector>


using namespace std;

void print_vector(const vector<int> &v)
{
   for(int i=0;i < v.size(); i++)
      cout << v[i] << " ";
}

void print_vector(const vector<double> &v)
{
   for(int i=0;i < v.size(); i++)
      cout << v[i] << " ";
}

int main()
{
    vector<int> vint;
    vector<double> vdouble;
    vector<vector<double> > table; 

    vint.push_back(10);
    vint.push_back(11);
    vint.push_back(12);
    vint.push_back(13);
    vint[0] = 20;
    print_vector(vint);

    vdouble.push_back(1.2);
    vdouble.push_back(2.2);
    vdouble.push_back(3.2);
    vdouble.push_back(4.2);
    print_vector(vdouble);

    table.push_back(vector<double>());
    table[0].push_back(1.5);
    table[0].push_back(2.5);
    table[0].push_back(3.5);
    table.push_back(vector<double>());
    table[1].push_back(4.5);
    table[1].push_back(5.5);
    table[1].push_back(6.5);
    table.push_back(vector<double>());
    table[2].push_back(7.5);
    table[2].push_back(8.5);
    table[2].push_back(9.5);
    cout << endl;
    cout << endl;
    for(int row=0;row < 3;row++)
    {
       for(int col=0;col < 3;col++)
          cout << table[row][col] << " ";
       cout << endl;
    }

    return 0;
}
