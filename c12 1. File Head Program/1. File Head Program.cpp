#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>


using namespace std;

int main()
{
	string fname;		// stores user's file name
	string display;		// To hold a line
	int lines = 0;		// counts number of lines

	// ask user for the file name
	cout << "What is the file name? ";
	cin >> fname;

	fstream dataFile(fname, ios::in);

	// check if file opened
	if (dataFile.fail())
	{
		cout << "ERROR: Cannot open the file\n";
		return 0;
	}


	// display first 10 lines of the file or if file is fewer than
	// 10 lines then display the entire file
	while (!dataFile.eof() && lines < 10)
	{
		dataFile >> display;

		cout << display << endl;
		lines++;
	}

	return 0;
}