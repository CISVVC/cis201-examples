#include<iostream>
#include<vector>


using namespace std;

// When order doesn't matter
void u_remove_from_vector(vector<int> &values,int pos)
{
   int last_pos = values.size() - 1;
   values[pos] = values[last_pos]; // Replace element at pos with last element
   values.pop_back(); // Delete last element
}

// When order does matter
void o_remove_from_vector(vector<int> &values,int pos)
{
   for (int i = pos + 1; i < values.size(); i++)
   { 
         values[i - 1] = values[i]; 
   }
   values.pop_back();
}

void print_vector(vector<int> v)
{
	for(int value : v)
		cout << value << " ";
}

int main()
{
    vector<int> a = {1,2,3,4,5,6,7,8,9,10};

    cout << "Original array:" << endl;
    print_vector(a);
    cout << endl;
    u_remove_from_vector(a,4);
    cout << "Remove position 4 when order doesn't matter:" << endl;
    print_vector(a);
    cout << endl;
    cout << "Remove position 4 when order does matter:" << endl;
    o_remove_from_vector(a,4);
    print_vector(a);
    cout << endl;

    return 0;
}
