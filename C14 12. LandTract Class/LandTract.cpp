// implementation file
#include "stdafx.h"
#include "FeetInches.h"
#include "LandTract.h"



// calculate the area in inches
void LandTract::calcArea()
{
	int tempFeetConvW,	// holds inches of Width that have been converted from feet
		tempFeetConvL;	// holds inches of Length that have been converted from feet

	// convert to inches, calculate the area in inches
	tempFeetConvW = width.getFeet() * 12;
	tempFeetConvL = length.getFeet() * 12;

	area = width.getInches() * tempFeetConvW * length.getInches() * tempFeetConvL;
	
}