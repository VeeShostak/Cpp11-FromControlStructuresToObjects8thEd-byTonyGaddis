// 19 Budget Analysis

//#include "stdafx.h"
#include <iostream>
#include <vector> //vector data type
using namespace std;

int main()
{
	double budget,   // user's budget
		   totalExp = 0; // user's total expenses (initialized accumulator)
	
	cout << "How much money did you budget for this month? $";
	cin >> budget;

	/* vector will expand in size using the push back member function as expenses 
	are added. It starts out with 1 element initialized to 0 (this is because in order
	to use the pushback member function the vector needs to have a size) */
	vector<double> expenses(1,0);

	// Get expenses from the user (sentinel (-1) marks the end of the list of expenses)
	cout << "Enter your expenses in dollars (When you are done input -1)\n";

	for (int i = 0; expenses[i] != -1; i++)
	{
		cout << "Expense " << i + 1 << ": $";
		cin >> expenses[i];
		expenses.push_back(expenses[i]); // Expand vector for each expense
		totalExp += expenses[i]; // totalExp accumulates expenses
	}

	++totalExp; // add 1 to totalExp to account for the sentinel

	// display the amount that the user is over or under the budget
	if (totalExp > budget)
	{
		cout << "You are over your budger by $" << (totalExp - budget) << endl;
	}

	else if (totalExp < budget)
	{
		cout << "You are under your budget by $" << (budget - totalExp) << endl;
	}

	return 0;
}
