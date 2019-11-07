#include<iostream>
#include<string>
#include<vector>

using namespace std;

const int NUMBER_OF_LINES = 300;
const int SIZE = 12000;
int main()
{
    char *c = new char[SIZE];
    char *lines[NUMBER_OF_LINES];
    char ch; 
    int i = 0;
    int line_number=0;
    char *line = c;
    while(cin.get(ch)) 
    {
       if(ch == '\n')
       {
          lines[line_number] = line;
          line_number += 1;
          c[i] = '\0';
          line = &(c[i+1]);
       }
       else
       {
          c[i] = ch;
       }
       i++;
    }

    for(int i=0;i < line_number;i++)
    {
      cout << lines[i] << endl;
    }
    cout << "lines=" << line_number << endl;
    cout << "characters=" << i << endl;

    return 0;
}
