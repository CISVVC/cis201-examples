/**
 * Filename: main.cpp
 * Description: This program will prompt the user for voltage and resistance 
 * and will output the amperage
 * Author: Paul Tonning
 * Email: paul.tonning@student.vvc.edu
 * Date: 9/3/2019
 */
#include<iostream>

using namespace std;

int main()
{
   // Prompt the user for the voltage
   double voltage;
   cout << "Enter the voltage: ";
   cin >> voltage;
   // Prompt the user for the resistance
   double resistance;
   cout << "Enter the resistance: ";
   cin >> resistance;
   
   // calculate the amperage
   double amperage = voltage / resistance;

   // Output the amperage
   cout << "The amperage is " << amperage << endl;

   return 0;
}
