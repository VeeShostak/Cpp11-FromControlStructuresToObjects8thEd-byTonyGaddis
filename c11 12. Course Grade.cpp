#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

struct StudentInfo
{
	string name;			// student name
	unsigned int idNum;		// student ID number (Watch for overflow if id num is too long - can make it a string)
	int *tests;				// pointer to an array of test scores
	int average;			// average test score
	char grade;				// course grade
};

//function prototype
void compGrade(StudentInfo *, int);

int main()
{
	int numScores,
		numStudents,
		total;			// accumulator to calculate avrg student score

	cout << "How many test scores per student? ";
	cin >> numScores;
	

	cout << "How many students? ";
	cin >> numStudents;
	

	// dynamically allocate an array of structures (size is the num of students)
	StudentInfo *ptrStudents = nullptr;
	ptrStudents = new StudentInfo[numStudents];

	// user enters id number and test scores data for each student
	for (int count = 0; count < numStudents; count++)
	{
		// make each student's tests member point to a dynamically allocated
		// array that will hold the test scores
		(ptrStudents + count)->tests = new int[numScores];

		//let user enter id num and name for each student
		cout << "Enter the ID number for student " << (count + 1) << ": ";
		cin >> (ptrStudents + count)->idNum;
		

		cout << "Enter the name for student " << (count + 1) << ": ";
		cin >> (ptrStudents + count)->name;
		

		total = 0; // reset accumulator for each student (initialize accumulator)

		// let user enter test scores data for each student
		for (int count2 = 0; count2 < numScores; count2++)
		{
			do {
				cout << "For student " << (count + 1) << " enter score " << (count2 + 1) << ": ";
				cin >> (*(ptrStudents + count)).tests[count2];

			} while ((*(ptrStudents + count)).tests[count2] < 0); // only positive values for test scores

			total += (*(ptrStudents + count)).tests[count2];
		}

		// calculate the average and store in average member of each struct (for each student)
		(ptrStudents + count)->average = (total / numScores);

		//compute course grade based on grading scale
		compGrade(ptrStudents, count);
		
	}


	// display a table of each students name, ID number, average test score, and course grade
	cout << "========================================\n\n";
	cout << "\tInfo for all students\n";
	for (int count = 0; count < numStudents; count++)
	{
		cout << "Student " << (count + 1) << endl;
		cout << "Name: " << (ptrStudents + count)->name << endl;
		cout << "ID: " << (ptrStudents + count)->idNum << endl;
		cout << "Average Test Score: " << (ptrStudents + count)->average << endl;
		cout << "Course Grade: " << (ptrStudents + count)->grade << endl;

		cout << "\n========================================\n";
	}

	//free memory
	delete[] ptrStudents;
	ptrStudents = nullptr;


	return 0;
}

// function definitions ===========================================================

// computes grades and stores in the pointer that is passed
// -student parameter is the index for the current student that the grade needs to be calculated for
void compGrade(StudentInfo *ptrSt, int student) 
{
	char grade; // the letter grade

	if ((ptrSt + student)->average >= 91 && (ptrSt + student)->average <= 100)
		(ptrSt + student)->grade = 'A';

	else if ((ptrSt + student)->average >= 81 && (ptrSt + student)->average <= 90)
		(ptrSt + student)->grade = 'B';

	else if ((ptrSt + student)->average >= 71 && (ptrSt + student)->average <= 80)
		(ptrSt + student)->grade = 'C';

	else if ((ptrSt + student)->average >= 61 && (ptrSt + student)->average <= 70)
		(ptrSt + student)->grade = 'D';

	else if ((ptrSt + student)->average <= 60)
		(ptrSt + student)->grade = 'F';
}