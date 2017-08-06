//Goal:
//Create an interactive tip calculator using C++

//<iostream>: cin, cout
//<cstdio>: fgets
//<cstdlib>: atoi(for int), atof( for double)
//<iomanip>: setprecision

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <iomanip>

#include "tip_calculator.h"

using namespace std;

int  main()
{
  cout << "This tip calculator determines the price of a  meal after tax and tip." << endl << endl;
  
  int choice = 0;
  
  while(true)
  {
    cout << "Choose which option." << endl;
    cout << "(1) User inputed tip calculator." << endl;
    cout << "(2) File inputed tip calculator." << endl;
    cin >> choice;

    //if chioce is between 1 and 2 exit user menu
    if (choice >= 1 && choice <= 2)
      break;

    cout << "Please choose 1 or 2." << endl;
    
  } //while user chooses invalid choice

  cout << "------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
  
  while(choice)
  {
    switch(choice)
    {
      case 1: userCalculator(); break;
      case 2: cout << "Choice 2." << endl; choice = 3; break;
    } //switch for 1 or 2
  } //while choice is 1 or 2
}

	
	
int userCalculator()
{
	double meal_input;
	cout << "Please enter cost of meal: ";
	cin >> meal_input;
	cout << meal_input << endl;

	double tax_cost;
	cout << "Please enter tax percentage of receipt in the form of an integer: ";
	cin >> tax_cost;
	double tax = tax_cost/ 100;
	cout << tax << endl;

	double tip_input;
	cout << "Please enter what percentage to leave as tip in the form of an integer: ";
	cin >> tip_input;
	double tip = tip_input /100;
	cout << tip << endl;

	//Calculate cost of meal with tax.
	double meal = meal_input + meal_input * tax;
	//cout << meal << endl;

	//Calculate total cost of meal.
	double total;
	total = meal + (meal * tip);
	cout << setprecision(4) << total <<endl; 
	
}
