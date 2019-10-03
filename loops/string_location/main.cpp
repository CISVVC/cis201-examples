#include<iostream>
#include<string>


using namespace std;

const string SEARCH = "i";

int main()
{
      string str = "This is a short sentence";
    //Find the location in a string of first space char
		int index = 0; 
      int count = 0;
		while (index < str.length())
		{ 
			string ch = str.substr(index, 1); 
//         cout << index << ":" << ch  << ":"<< count << endl;
			if (ch == SEARCH ) 
			{ 
            count++;
			} 
		   index++; 
		}
		cout << "count of " << SEARCH << " is " << count << endl;

     return 0;
}
