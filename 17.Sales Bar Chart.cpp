// 17. Sales Bar Chart

//#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int store[5]; // array holds sales for 5 stores

	//get sales for each store
	for (int i = 0; i <= 4; i++)
	{
		cout << "Enter today's sales for store " << i + 1 << ": ";
		cin >> store[i];
	}

	// Display bar chart
	cout << "\tSales Bar Chart\n"
		<< "(Each * = $100\n";

	for (int i = 0; i <= 4; i++)
	{
		cout << "Store " << i + 1 << ": ";

		//keep displaying an * for store[i] while: (store[i] / 100) > 0
		for (int ast = store[i] / 100; ast > 0; ast--)
		{
			cout << "*";
		}
		cout << endl;

	}


	return 0;
}