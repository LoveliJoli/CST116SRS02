// main.cpp : Defines the entry point for the console application.
// Ask the user to enter a number.
// Read the number.
// Convert the user's number in scientific notation.

#include "stdafx.h"
#include <iostream>
#include <iomanip>


int main()
{
	double number = 0;

	std::cout << std::scientific;
	std::cout << "Enter a number: " << std::endl;
	std::cin >> number;
	std::cout << number << std::endl;

    return 0;
}

