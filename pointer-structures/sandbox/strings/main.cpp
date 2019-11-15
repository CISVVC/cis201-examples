#include<iostream>
#include<string>
#include<cstring>

using namespace std;


void print_string(const char* s)
{
   while(*s != '\n')
   {
      cout << *s;
      s++;
   }
   cout << endl;

}

int main()
{
    string input;
    char ch;

    int lines = 0;
// **** INPUT AND STORAGE *****
    while(cin.get(ch))
    {
       if(ch == '\n')
          lines++;
       input += ch;   // this is the STORAGE part
    }
    const char *c = input.c_str();
    const char **line_array = new const char*[lines];
    line_array[0] = c;
    while(*c != '\n')
       c++;
    c++;
    line_array[1] = c;
    while(*c != '\n')
       c++;
    c++;
    line_array[2] = c;
    while(*c != '\n')
       c++;
    c++;
    line_array[3] = c;
    while(*c != '\n')
       c++;
    c++;
    line_array[4] = c;

    print_string(line_array[4]);
    print_string(line_array[3]);
    print_string(line_array[2]);
    print_string(line_array[1]);
    print_string(line_array[0]);

    return 0;
}
