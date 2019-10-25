#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>

using namespace std;

string get_month(int m);
void fill_array(int x[],int count);
int roll(int upper);
void print_array(int x[],int start,int count,char delimiter);
void sort(int a[], int n);
int search(int values[],int size,int key);

const int SIZE = 10;
int main()
{
    srand(time(0));
      
    int i;
    int x[SIZE];
    int y[SIZE];
       
    //print_array(x,0,SIZE,' ');
    int count = 0;
    for(int i=0;i<100;i++)
    {
       fill_array(x,SIZE);
       sort(x,SIZE);
       int pos = search(x,SIZE,5);
       if(pos != -1)
          count++;
    }
    cout << count << endl;

    return 0;
}



int roll(int upper)
{
   return rand() % upper + 1;
}

void fill_array(int x[],int count)
{
   for(int i = 0; i < count;i++)
   {
      x[i] = roll(10);
   }
}

void print_array(int x[],int start,int count,char delimiter)
{
   for(int i=start;i<count;i++)
      cout << x[i] << delimiter;
   cout << endl;
}


// array a[] has the items to sort;
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
          swap(a[j], a[i_min]);
      }
 }
}


int search(int values[],int size,int key)
{
	bool found = false;
	int low = 0;
	int high = size - 1;
	int pos = 0;
	while (low <= high && !found)
	{
		pos = (low + high) / 2; // Midpoint of the subsequence
		if (values[pos] == key) { found = true; }
		else if (values[pos] < key) { low = pos + 1; } // Look in second half
		else { high = pos - 1; } // Look in first half
	}
	if (found) 
   {
		return pos;
	}
   return -1;
}
