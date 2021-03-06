// main.cpp : Defines the entry point for the console application.
// Aligns the labels, colons and '$' to the right.
// List the values in USD format to the right.

#include "stdafx.h"
#include <iostream>
#include <iomanip>		
#include <locale>

int main()
{
	double west = 36364.87, midwest = 12431.33, east = 127690.50, south = 9200.00;

	std::cout << std::fixed << std::setprecision(2);
	std::cout.imbue(std::locale("en-us"));

	std::cout << std::setw(11) << "West: $ " << std::setw(10) << west << std::endl;
	std::cout << std::setw(11) << "Midwest: $ " << std::setw(10) << midwest << std::endl;
	std::cout << std::setw(11) << "East: $ " << std::setw(10) << east << std::endl;
	std::cout << std::setw(11) << "South: $ " << std::setw(10) << south << std::endl;

	return 0;	
}


