// Assignment_3_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

const double YEN_PER_DOLLAR = 98.93; // Constant variables, they cannot be modify. 
const double EURO_PER_DOLLAR = 0.74;

int main()
{
	int dollar;
	float euro;
	float yen;
	cout << "Please enter the amount of US Dollar you wish to convert ";
	cin >> dollar;
	euro = dollar * EURO_PER_DOLLAR;
	yen = dollar * YEN_PER_DOLLAR;
	cout << setprecision(2) << fixed; // so it will only print out 2 diget after ".", since $ go only up to 2 decimal
	cout << dollar << " US Dollar = " + euro + " Euro" << endl;
	cout << dollar << " US Dollar = " + yen + " Janapnese Yen" << endl;


    return 0;
}

