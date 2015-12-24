#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

struct MovieData // stores movie information
{
	string title;
	string director;
	int yearReleased;
	int timeMin;		// running time in minutes
};

//function prototype
void displayMovie(MovieData);

int main()
{
	MovieData movie1, movie2;

	//store values in the members of movie1 and movie2
	movie1.title = "Star Wars: The Force Awakens";
	movie1.director = "J.J. Abrams";
	movie1.yearReleased = 2015;
	movie1.timeMin = 136;

	movie2.title = "Ex Machina";
	movie2.director = "Alex Garland";
	movie2.yearReleased = 2015;
	movie2.timeMin = 108;
	
	// display the movie information in a clearly formatted manner
	cout << "\tMovie 1\n";
	displayMovie(movie1);

	cout << "\n\tMovie 2\n";
	displayMovie(movie2);

	return 0;
}

// function definitions =============================================

//function displays the movie information
void displayMovie(MovieData movie)
{
	cout << "Title: " << movie.title << endl;
	cout << "Director: " << movie.director << endl;
	cout << "Year Released: " << movie.yearReleased << endl;
	cout << "Length: " << movie.timeMin << " minutes" << endl;
}