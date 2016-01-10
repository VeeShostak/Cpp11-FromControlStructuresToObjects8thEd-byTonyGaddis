// specification file for the DivSales class
#ifndef DIVSALES_H
#define DIVSALES_H

const int QUART = 4;

class DivSales
{
private:
	double salesQ[QUART];		// holds 4 quarters of sales figures for the division
	static double totalSalesY;	// holds the total corporate sales for all divisions for the entire year
public:
	// consructor inline, initializes all to 0 
	DivSales()
	{
		for (int count = 0; count < QUART; count++)
		{
			salesQ[count] = 0;
		}
		
	}

	// takes an array that holds sales for 4 quaters and adds all up to totalSales variable and assigns each to our static array member variable
	void salesAllQ(double allQuarters[]);

	//  takes an integer argument 0-3 and returns that subscript from the div quarterly sales array - inline
	double displayQ(int quarter)
	{
		return salesQ[quarter];
	}

};

// definition of the static member variable written outside the class
// double DivSales::totalSalesY = 0;

#endif