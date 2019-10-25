#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>

using namespace std;

string get_month(int m);
void fill_array(int x[],int count);
int roll(int upper);
int sum(int x[],int count);
int average(int x[],int count);
int max(int x[],int count);
int min(int x[],int count);
int search(int x[],int key,int size);
void remove_element(int x[],int position,int &size);
void copy_array(int source[],int dest[],const int SIZE);
void print_array(int x[],int count,char delimiter);

const int SIZE = 10;
int main()
{
    srand(time(0));
      
    int i;
    int x[SIZE];
    int y[SIZE];
    int current_size = SIZE;
   
    x[-1] = 10;

    fill_array(x,SIZE);
    cout << endl;
    print_array(x,SIZE,' ');
    i = SIZE/2; 
    remove_element(x,i,current_size);

    print_array(x,current_size,' ');

    cout << endl;

    cout << "Sum of values in x: " << sum(x,current_size) << endl;

    copy_array(x,y,current_size);

    cout << "Sum of values in y: " << sum(y,current_size) << endl;
    cout << "Sum of values in x: " << sum(x,current_size) << endl;
    cout << "Average of values in x: " << average(x,current_size) << endl;
    cout << "Maximum value in x: " << max(x,current_size) << endl;
    cout << "Minimum value in x: " << min(x,current_size) << endl;


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

int roll(int upper)
{
   return rand() % upper + 1;
}

void fill_array(int x[],int count)
{
   for(int i = 0; i < count;i++)
   {
      /*
      cout << "Enter Value:";
      cin >> x[i];
      */
      x[i] = roll(6);
   }
}

void remove_element(int x[],int position,int &size)
{
     for(int i=position + 1;i < size;i++)
     {
        x[i - 1] = x[i];
     }
     size--;
}

void print_array(int x[],int count,char delimiter)
{
   for(int i=0;i<count;i++)
      cout << x[i] << delimiter;
   cout << endl;
}

int search(int x[],int key,int size)
{
   int pos = 0;
   bool found = false;
   while (pos < size && !found)
   {
       if (x[pos] == key)
       {
          found = true;
          break;
       }
       else
       {
          pos++;
       }
   }
   if(found)
      return pos;
   else
      return -1;
}

// array a[] has the items to sort; array b[] is a work array.
void sort(int a[], int n)
{
    /* a[0] to a[n-1] is the array to sort */
    
    /* advance the position through the entire array */
    /*   (could do j < n-1 because single element is also min element) */
    for (int j = 0; j < n-1; j++)
    {
        /* find the min element in the unsorted a[j .. n-1] */
  
      /* assume the min is the first element */
      int i_min = j;
      /* test against elements after j to find the smallest */
      for (int i = j+1; i < n; i++)
      {
          /* if this element is less, then it is the new minimum */
          if (a[i] < a[i_min])
          {
              /* found new minimum; remember its index */
              i_min = i;
          }
      }
  
      if (i_min != j) 
      {
          std::swap(a[j], a[i_min]);
      }
 }
}
