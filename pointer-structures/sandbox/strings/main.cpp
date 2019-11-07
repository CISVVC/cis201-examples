#include<iostream>
#include<string>

using namespace std;


int main()
{
    string input;
    input = input + 'T';
    input +=  'h';
    input +=  'i';
    input +=  's';
    input +=  ' ';
    input +=  'i';
    input +=  's';
    input +=  ' ';
    input +=  'a';
    input +=  ' ';
    input +=  's';
    input +=  't';
    input +=  'r';
    input +=  'i';
    input +=  'n';
    input +=  'g';

    //cout << input << endl;
    for(char c : input)
       cout << c << endl;

    for(int i=0;i<input.size();i++)
       cout << input[i] << endl;

    const char *char_ptr;
    char_ptr = input.c_str();
    while(*char_ptr != '\0')
    {
       cout << *char_ptr << endl;
       char_ptr++;
    }

    return 0;
}
