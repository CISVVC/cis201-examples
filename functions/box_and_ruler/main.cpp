#include<iostream>
#include<string>


using namespace std;

/*
Write a program that centers a string within a given length of another string
For instance an 80 character string with centered word would look something like
the following
12345678901234567890123456789012345678901234567890123456789012345678901234567890
                                     June                                       

Declare a string line = ""
concatenate  a number of spaces to the string
concatenate the word June

*/

/*
  this function returns a "ruler" as a string
  @param size the size of the ruler
  @return string  the string representing the ruler
*/
string build_ruler(int size)
{
   string s= "";
   for (int i=0;i<size;i++)
   {
      s += to_string((i+1) % 10);
   }
   return s;
}

/*
returns a string filled with given character and size
@param c the fill character
@param size the size of the string
@return string the filled string
*/
string character_fill(char c,int size)
{
   string s = "";
   for(int i=0;i<size;i++)    
      s += c;
   return s;
}

/*
returns a given centered in a string of given length
@param s given string to center
@param outer_length the length the returned string
@return the formatted string
*/
string center_string(string s,int outer_length)
{
   string l = "";
   int offset = (outer_length - s.length()) / 2;
   for(int i=0;i<offset;i++)
      l += " ";
   l += s;
   for(int i=0;i<offset;i++)
      l += " ";
   return l;
}

/*
@param width
@param height
@param fill
@return box
*/
string box(int width,int height,char fill)
{
   string b = "";
   for(int h=0;h<height;h++)
   {
      b += character_fill(fill,width);
      b += "\n";
   }
   return b;
}

const int STRING_LENGTH = 80;
const int RULER_LENGTH = 80;
int main()
{
   string ruler = build_ruler(RULER_LENGTH);
   cout << ruler << endl;
   string line = center_string("June 2019",STRING_LENGTH);
   cout << line << endl;
   cout << ruler << endl;
   string box_string = box(20,20,'*');
   cout << box_string;
   cout << endl;
   return 0;
}

