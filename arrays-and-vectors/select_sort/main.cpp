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

const int SIZE = 10;
int main()
{
    srand(time(0));
      
    int i;
    int x[SIZE];
    int y[SIZE];
       
    fill_array(x,SIZE);
    //print_array(x,0,SIZE,' ');
    sort(x,SIZE);
    //print_array(x,0,SIZE,' ');

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
      x[i] = roll(6);
   }
}

void print_array(int x[],int start,int count,char delimiter)
{
   for(int i=start;i<count;i++)
      cout << x[i] << delimiter;
   cout << endl;
}


/*
For I = 0 to N-1 do:
       Smallsub = I
       For J = I + 1 to N-1 do:
         If A(J) < A(Smallsub)
           Smallsub = J
         End-If
       End-For
       Temp = A(I)
       A(I) = A(Smallsub)
       A(Smallsub) = Temp
     End-For
*/
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
