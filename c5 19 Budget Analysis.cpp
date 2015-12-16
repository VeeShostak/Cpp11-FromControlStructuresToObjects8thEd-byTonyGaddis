// 19 Budget Analysis

#include "stdafx.h"
#include <iostream>
#include <vector> //vector data type
using namespace std;

int main()
{
	double budget,   // user's budget
		totalExp = 0; // user's total expenses (initialized accumulator)
	int numExpenses; // number of expenses

	cout << "How much money did you budget for this month? $";
	cin >> budget;

	// vector will expand in size using the push back member function as expenses are added
	vector<double> expenses;

	// Get expenses from the user
	cout << "How many expenses do you have? ";
	cin >> numExpenses;
	cout << "Enter " << numExpenses << " expenses\n";

	for (int i = 0; i < numExpenses; i++)
	{
		int tempExpense; // holds the expense entered
		cout << "Expense " << (i + 1) << ": $";
		cin >> tempExpense;
		expenses.push_back(tempExpense); // add an expense to expenses vector
		totalExp += tempExpense; // totalExp accumulates expenses
	}


	// display the amount that the user is over or under the budget
	if (totalExp > budget)
	{
		cout << "You are over your budger by $" << (totalExp - budget) << endl;
	}

	else if (totalExp < budget)
	{
		cout << "You are under your budget by $" << (budget - totalExp) << endl;
	}

	else
	{
		cout << "You are equal to your budget\n";
	}

	return 0;
}
