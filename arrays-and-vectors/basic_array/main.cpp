#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>

using namespace std;
const int SIZE = 10;

string get_month(int m);
void fill_array(int x[],int count);
int sum(int x[],int count);
int average(int x[],int count);
int max(int x[],int count);
int min(int x[],int count);
void copy_array(int source[],int dest[],const int SIZE);
void print_array(int x[],int count,char delimiter);

int main()
{
    srand(time(0));
      
    cout << (rand() % 100 + 1) << endl;

    int x[SIZE] = {10, 11,2,9,7,6,5,4,3,1};
    int y[SIZE];
     
    print_array(x,SIZE,' ');
    cout << endl;

    cout << "Sum of values in x: " << sum(x,SIZE) << endl;

    copy_array(x,y,SIZE);

    y[2] = 15;
    cout << "Sum of values in y: " << sum(y,SIZE) << endl;
    cout << "Sum of values in x: " << sum(x,SIZE) << endl;
    cout << "Average of values in x: " << average(x,SIZE) << endl;
    cout << "Maximum value in x: " << max(x,SIZE) << endl;
    cout << "Minimum value in x: " << min(x,SIZE) << endl;

//  int  cout << get_month(6) << endl;

    return 0;
}

// m is the number for the month
string get_month(int m)
{
   string months[12] = {"January","February","March","April","May","June",
                         "July","August","September","October","November","December"};
   return months[m-1];
}

// sum the values of an array
int sum(int x[],int count)
{
    int sum = 0;
    for(int i=0;i<count;i++)
    {
       sum += x[i];
    }
    return sum;
}

int average(int x[],int count)
{
   return sum(x,count) / count;
}

void copy_array(int source[],int dest[],const int SIZE)
{
    for(int i=0;i<SIZE;i++)
       dest[i] = source[i];
}

int max(int x[],int count)
{
   int max_val = x[0];
   for(int i=1;i < count;i++)
      if(x[i] > max_val)
         max_val = x[i];
   return max_val;
}

int min(int x[],int count)
{
   int min_val = x[0];
   for(int i=1;i < count;i++)
      if(x[i] < min_val)
         min_val = x[i];
   return min_val;
}

void fill_array(int x[],int count)
{
}

void print_array(int x[],int count,char delimiter)
{
   for(int i=0;i<count;i++)
      cout << x[i] << delimiter;
}
