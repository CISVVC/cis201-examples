#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
#include<cmath>


using namespace std;

vector<int> fill_random(int n,int upper)
{
   vector<int>	a;
   for(int i = 0;i<n;i++)
	   a.push_back(rand() % upper + 1);
   return a;
}

vector<double> fill_random(int n,double upper)
{
   vector<double>	a;
   for(int i = 0;i<n;i++)
	   a.push_back(fmod(rand() , upper) + 1.0);
   return a;
}


void print_vector(vector<int> v)
{
	for(int value : v)
		cout << value << " ";
}

void print_vector(vector<double> v)
{
	for(int value : v)
		cout << value << " ";
}

//Matches
vector<double> find_matches(vector<double> values,double number)
{
   vector<double> matches;
   // find values that match the criteria
   for (int i = 0; i < values.size(); i++)
   {
      if (values[i] > number) 
      {
         matches.push_back(values[i]);
      }

   }
   return matches;
}

int main()
{
	srand(time(0));
// vectors are part of the STL
// here are some algorithms
	
	vector<int>	a = fill_random(10,100);
   // To copy it's only a matter of assigning another vector
	vector<int>	b = a;
   print_vector(b);
   cout << endl; 
   
   vector<double> double_numbers = fill_random(10,100.0);
   vector<double> m = find_matches(double_numbers,90);
   print_vector(m);

   // Example
   vector<int> squares;
   for (int i = 0; i < 5; i++) { squares.push_back(i * i); } 
   vector<int> lucky_numbers; // Initially empty
   lucky_numbers = squares; // Now lucky_numbers contains the same elements as squares

   return 0;
}
