These are some of the programming challenges that I have done from the textbook 
after reading each chapter. 

This is for the purpose of my development in programming.

//================================================================================================
Textbook: Starting Out with C++ from Control Structures to Objects (8th Edition) by Tony Gaddis

Programming Challenges by Chapter:


//================================================================================================
// Chapter 5 Loops and Files
//================================================================================================


1.Sum of Numbers
Write a program that asks the user for a positive integer value. The program
should use a loop to get the sum of all the integers from 1 up to the number
entered. For example, if the user enters 50, the loop will find the sum of 1,
2, 3, 4, ... 50.
Input Validation: Do not accept a negative starting number.


17.Sales Bar Chart
Write a program that asks the user to enter today's sales for five stores.
The program should then display a bar graph comparing each store?s sales.
Create each bar in the bar graph by displaying a row of asterisks. Each
asterisk should represent $100 of sales. Here is an example of the program's
output.
Enter today's sales for store 1: 1000 [Enter]
Enter today's sales Enter today's sales for store 2: 1200 [Enter]
Enter today's sales Enter today's sales for store 3: 1800 [Enter]
Enter today's sales Enter today's sales for store 4: 800 [Enter]
Enter today's sales Enter today's sales for store 5: 1900 [Enter]
SALES BAR CHART
(Each * = $100)
Store 1: **********
Store 2: ************
Store 3: ******************
Store 4: ********
Store 5: *******************


19 Budget Analysis
Write a program that asks the user to enter the amount that he or she has
budgeted for a month. A loop should then prompt the user to enter each
of his or her expenses for the month and keep a running total. When the
loop finishes, the program should display the amount that the user is over or
under budget.


20 Random Number Guessing Game
Write a program that generates a random number and asks the user to guess
what the number is. If the user?s guess is higher than the random number,
the program should display ?Too high, try again.? If the user?s guess is lower
than the random number, the program should display ?Too low, try again.?
The program should use a loop that repeats until the user correctly guesses
the random number.


//================================================================================================
// Chapter 6 Functions
//================================================================================================


1. Markup
Write a program that asks the user to enter an item’s wholesale cost and its markup
percentage. It should then display the item’s retail price. For example:
 -If an item’s wholesale cost is 5.00 and its markup percentage is 100%, then the
item’s retail price is 10.00.
 -If an item’s wholesale cost is 5.00 and its markup percentage is 50%, then the item’s
retail price is 7.50.
The program should have a function named calculateRetail that receives the
wholesale cost and the markup percentage as arguments and returns the retail price
of the item.
Input Validation: Do not accept negative values for either the wholesale cost of the
item or the markup percentage.


//================================================================================================
// Chapter 7 Arrays
//================================================================================================


1. Largest/Smallest Array Values
Write a program that lets the user enter 10 values into an array. The program should
then display the largest and smallest values stored in the array.


2. Rainfall Statistics
Write a program that lets the user enter the total rainfall for each of 12 months into
an array of double s. The program should calculate and display the total rainfall for
the year, the average monthly rainfall, and the months with the highest and lowest
amounts.
Input Validation: Do not accept negative numbers for monthly rainfall figures.


11. Exam Grader
One of your professors has asked you to write a program to grade her final exams,
which consist of only 20 multiple-choice questions. Each question has one of four possible
answers: A, B, C, or D. The file CorrectAnswers.txt contains the correct answers
for all of the questions, with each answer written on a separate line. The first line
contains the answer to the first question, the second line contains the answer to the
second question, and so forth. (Download the book’s source code from the companion
Web site at www.pearsonhighered.com/gaddis . You will find the file in the Chapter 07
folder.NOTE: The file is not there so I created my own file)

Write a program that reads the contents of the CorrectAnswers.txt file into a char
array, and then reads the contents of another file, containing a student’s answers, into a
second char array. (You can use the file StudentAnswers.txt for testing purposes. This
file is also in the Chapter 07 source code folder, available on the book’s companion
Web site. .NOTE: The file is not there so I created my own file) 
The program should 
determine the number of questions that the student
missed and then display the following:

• A list of the questions missed by the student, showing the correct answer and the
incorrect answer provided by the student for each missed question
• The total number of questions missed
• The percentage of questions answered correctly. This can be calculated as
Correctly Answered Questions ÷ Total Number of Questions
• If the percentage of correctly answered questions is 70% or greater, the program
should indicate that the student passed the exam. Otherwise, it should indicate that
the student failed the exam.


//================================================================================================
// Chapter 8
//================================================================================================


