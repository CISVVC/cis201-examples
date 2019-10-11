#include<iostream>
#include<string>

using namespace std;


/**
  Computes the weekday of a given date.
  @param year the year
  @param month the month (1 = January ... 12 = December)
  @param day the day of the month
  @return the weekday (0 = Sunday ... 6 = Saturday)
*/
int day_of_week(int year, int month, int day)
{
  int y = year;
  int m = month - 1;
  if (month < 3) { y--; m = m + 4; }
  return (y + y / 4 - y / 100 + y / 400
     + 3 * m + 4 - (m - m / 8) / 2 + day) % 7;
}

/**
  Determines if argument is a leap year.
  @param year current year
  @return true if year is a leap year
  */
bool is_leap_year(int year)
{
     if (year % 400 == 0)
     {
        return true;
     }
     if (year % 4 == 0 && year % 100 != 0)
     {
        return true;
     }
     return false;
}

/*
function stub -- left to the student to define this function
*/
string get_month_string(int m)
{
   string month_string;
   return month_string;
}

/*
function stub -- left to the student to define this function
*/
string blanks(int n)
{
   string blank_string;
   return blank_string;
}

/*
function stub -- left to the student to define this function
*/
void print_calendar(int month,int year)
{
}

/*
function for input validation
@param string p the prompt
@return int value  the value obtained from the user
*/
int prompt_int(string p)
{
   int value;
	bool done = true;
	do
   {
		cout << p;
		cin >> value;
		if(cin.fail())
		{
			cout << "Invalid entry -- try again" << endl; cin.clear();
			cin.ignore(1000,'\n');
			done = false;
		}
		else
		{ 
         done = true;
		}
   }while(!done);

	return value;
}

/*
   This function is an example of how to use the to_string function
   to concatenate a string representation of an integer to a given string
*/
string string_with_value(string s,int m)
{
   return s + to_string(m);
}

int main()
{

   int month = 6;
   int year = 2019;


   year = prompt_int("Enter the year:");
   month = prompt_int("Enter the month:");

   print_calendar(month,year);

   return 0;
}
