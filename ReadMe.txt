The purpose of this repository is to document my development in programming.
 
It contains my solutions to some of the programming challenges I have done 
in the textbook after reading through each chapter.

IDE: All programs are compiled using Microsoft Visual Studio 2013

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
// Chapter 8 Searching and Sorting Arrays
//================================================================================================


8. Search Benchmarks (CUSTOM: with insertion sort)
Write a program that has an array of at least 20 integers. 
It should sort the list using insertion sort and display the new list then,

It should call a function that
uses the linear search algorithm to locate one of the values. The function should keep
a count of the number of comparisons it makes until it finds the value. Then the
program,

should call a function that uses the binary search algorithm to locate the same
value. It should also keep count of the number of comparisons it makes. Display these
values on the screen.


//================================================================================================
// Chapter 9 Pointers
//================================================================================================


1. Array Allocator
Write a function that dynamically allocates an array of integers. The function should
accept an integer argument indicating the number of elements to allocate. The function
should return a pointer to the array. (Custom: let the user input the values for the allocated
ints and then display the values that the user chose. Do not forget to free the memory.)


2. Test Scores #1
Write a program that dynamically allocates an array large enough to hold a userdefined
number of test scores. Once all the scores are entered, the array should be
passed to a function that sorts them in ascending order. Another function should be
called that calculates the average score. The program should display the sorted list of
scores and averages with appropriate headings. Use pointer notation rather than array
notation whenever possible.
Input Validation: Do not accept negative numbers for test scores.


8. Mode Function
In statistics, the mode of a set of values is the value that occurs most often or with the
greatest frequency. Write a function that accepts as arguments the following:
A) An array of integers
B) An integer that indicates the number of elements in the array
The function should determine the mode of the array. That is, it should determine
which value in the array occurs most often. The mode is the value the function should
return. If the array has no mode (none of the values occur more than once), the function
should return -1. (Assume the array will always contain nonnegative values.)
Demonstrate your pointer prowess by using pointer notation instead of array notation
in this function.


//================================================================================================
// Chapter 10 Characters, C-Strings, and More About the string Class
//================================================================================================


1. String Length
Write a function that returns an integer and accepts a pointer to a C-string as an argument.
The function should count the number of characters in the string and return that
number. Demonstrate the function in a simple program that asks the user to input a
string, passes it to the function, and then displays the function’s return value.


3. Word Counter
Write a function that accepts a pointer to a C-string as an argument and returns the
number of words contained in the string. For instance, if the string argument is “Four
score and seven years ago” the function should return the number 6. Demonstrate the
function in a program that asks the user to input a string and then passes it to the function.
The number of words in the string should be displayed on the screen. Optional
Exercise: Write an overloaded version of this function that accepts a string class object
as its argument.


14. Word Separator
Write a program that accepts as input a sentence in which all of the words are run
together, but the first character of each word is uppercase. Convert the sentence to a
string in which the words are separated by spaces and only the first word starts with
an uppercase letter. For example the string “StopAndSmellTheRoses.” would be converted
to “Stop and smell the roses.”


//================================================================================================
// Chapter 11 Structured Data
//================================================================================================


1. Movie Data
Write a program that uses a structure named MovieData to store the following information
about a movie:
Title
Director
Year Released
Running Time (in minutes)
The program should create two MovieData variables, store values in their members,
and pass each one, in turn, to a function that displays the information about the movie
in a clearly formatted manner.


12. Course Grade
Write a program that uses a structure to store the following data:

Member Name 	Description

Name 		Student name
Idnum 		Student ID number
Tests 		Pointer to an array of test scores
Average 	Average test score
Grade 		Course grade

The program should keep a list of test scores for a group of students. It should ask the
user how many test scores there are to be and how many students there are. It should
then dynamically allocate an array of structures. Each structure’s Tests member
should point to a dynamically allocated array that will hold the test scores.
After the arrays have been dynamically allocated, the program should ask for the ID
number (Custom: also ask for the name) and all the test scores for each student . 
The average test score should be calculated
and stored in the average member of each structure. The course grade should
be computed on the basis of the following grading scale:

Average Test Grade Course Grade
91–100 A
81–90 B
71–80 C
61–70 D
60 or below F
The course grade should then be stored in the Grade member of each structure. Once
all this data is calculated, a table should be displayed on the screen listing each student’s
name, ID number, average test score, and course grade.
Input Validation: Be sure all the data for each student is entered. Do not accept negative
numbers for any test score.






