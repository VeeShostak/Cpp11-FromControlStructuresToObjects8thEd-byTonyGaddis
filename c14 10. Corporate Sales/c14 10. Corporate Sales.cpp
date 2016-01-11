#include "stdafx.h"
#include <iostream>
#include "DivSales.h"

using namespace std;

const int NUM_DIV = 6,		// number of divisions
		  NUM_QUART = 4;	// number of quarters
		  
int main()
{
	
	double display;
	// creates array of 6 DivSales objecs
	DivSales allDivs[NUM_DIV];

	double qSales[NUM_QUART];	// will store sales of 4 quarters for each div in this array	

	// ask the user to enter the sales for four quarters for each division
	for (int division = 0; division < NUM_DIV; division++)
	{
		cout << "\n\tDivision " << (division + 1) << endl;
		// reset quarter sales for each division
		for (int reset = 0; reset < NUM_QUART; reset++)
			qSales[reset] = 0;		

		for (int quart = 0; quart < 4; quart++)
		{
			do {
				cout << "Enter the sales for division " << (division + 1)
					<< " & quarter " << (quart + 1) << ": $";

				cin >> qSales[quart];
			} while (qSales < 0);	// input validation
		}
		// pass the sales for 4 quarters for the division to the salesAllQ member function.
		allDivs[division].salesAllQ(qSales);
	}

	
	cout << "\n=========================\n" << "\tDisplaying Info\n";
	

	// display division sales for each quarter
	for (int division = 0; division < NUM_DIV; division++)
	{
		cout << "\n\tDivision " << (division + 1) << endl;

		for (int quart = 0; quart < NUM_QUART; quart++)
		{
			display = allDivs[division].displayQ(quart);
			cout << "Division " << (division + 1) << " quarter " << (quart + 1) << ": $";
			cout << display << endl;
		}
	}

	

	// display the total corporate sales for the year
	cout << "\nTotal Corporate Sales: $" << allDivs[0].getTotalS() << endl;


	return 0;
}