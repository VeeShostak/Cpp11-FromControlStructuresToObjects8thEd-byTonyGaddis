// implementation file for the DivSales class
#include "stdafx.h"
#include "DivSales.h"


// takes an array that holds sales for 4 quaters and adds all up to totalSales variable and assigns each to our static array member variable
void DivSales::salesAllQ(double allQuarters[])
{
	for (int count = 0; count < QUART; count++)
	{
		salesQ[count] = allQuarters[count];
		totalSalesY += allQuarters[count];
	}

	
}