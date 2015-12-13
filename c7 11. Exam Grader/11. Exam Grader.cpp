#include "stdafx.h"
#include <iostream>
#include <fstream> // files
using namespace std;

int main()
{
	const int SIZE = 20; // array size - number of questions
	char correctAns[SIZE]; //  array to store the correct answers from a file
	char studentAns[SIZE]; // array to store the student's answers from another file

	int totalMissed = 0, // total questions missed by the student
		tempMissed; // a question that was missed
	double percent; // percent of questions answered correctly
	ifstream correctAnsFile;
	ifstream studentAnsFile;

	// open the files
	correctAnsFile.open("CorrectAnswers.txt");
	studentAnsFile.open("StudentAnswers.txt");

	// determine how many questions the student got wrong (also tests if files open)
	if (correctAnsFile && studentAnsFile)
	{
		for (int i = 0; i < SIZE; i++)
		{
			correctAnsFile >> correctAns[i];
			studentAnsFile >> studentAns[i];

			if (correctAns[i] != studentAns[i]) 
			{
				//display the questions missed - show the correct answer
				//and the students incorrect answer
				cout << "Wrong! " << "Student's answer: " << studentAns[i] << endl;
				cout << "\tThe correct answer was: " << correctAns[i] << endl;

				++totalMissed; // accumulates questions missed
			}
			
		}

		// close the files
		correctAnsFile.close();
		studentAnsFile.close();

		//display total missed, percentage, and if passed the exam
		cout << "\nThe student missed " << totalMissed << " questions" << endl;

		// percentage: # of q answered correctly / total # of questions * 100
		percent = (20 - static_cast<double>(totalMissed)) / 20 * 100;
		cout << "Percentage answered correctly: " << percent << "%" << endl;

		if (percent > 70)
		{
			cout << "The student has passed the exam!\n";
		}
		else
		{
			cout << "The student has failed the exam!\n";
		}

	}

	else 
	{
		//display error message
		cout << "Error opening the files\n";
	}



	return 0;
}