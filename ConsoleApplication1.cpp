// ConsoleApplication1.cpp : Defines the entry point for the console application.
// Jason Diaz Problem 1

#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{
	const int MAX_VAL = 2000000; // A constant - the MAX VALUE we want from the Fibonacci sequence
	int fibTerm1 = 1, fibTerm2 = 2, newfibTerm = 0, sum = 0;

	while (fibTerm1 < MAX_VAL) // While the current Fibonacci Term is less then our max value
	{

		if (fibTerm1 % 2 != 0) // If the current Fibonacci Term is an odd number
			sum += fibTerm1; //Updates the sum

		newfibTerm = fibTerm1 + fibTerm2;
		fibTerm1 = fibTerm2;
		fibTerm2 = newfibTerm;
	}
	cout << sum << endl; // Prints out sum
	cin.get();
    return 0;
}

