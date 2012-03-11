//*******************************
// Chris Engstrom				*
// Project Euler - Problem 1	*
//**********************************************************
// Find the sum of all the multiples of 3 or 5 below 1000. *
//**********************************************************

#include <iostream>

using namespace std;

int main() {
	// int is sufficient for this problem but has problems for larger limits (circa 215000)
	int multipleLimit = 0,	// Limit to sum the multiples of
		sum = 0;			// Sum of the multiples of 3 or 5

	// Introduce the program and ask for the limit
	cout << "This program adds all the multiples of 3 or 5 below a certain limit." << endl << endl
		 << "What limit would you like to use? ";

	// Get the limit from the user
	cin >> multipleLimit;

	cout << endl;

	// Loop through all the numbers less than the limit,
	//	starting with 3 since 0-2 don't matter
	for (int i = 3; i < multipleLimit; i++) {
		// Check to see if the current number is a multiple of 3 or 5
		if(!(i % 3) || !(i % 5))
			// Only add the number to the sum once if it is a multiple of either 3 or 5
			sum += i;
	}

	// Report the results
	cout << "Sum of all the multiples of 3 or 5 below " << multipleLimit << ": " << sum << endl;

	return 0;
}