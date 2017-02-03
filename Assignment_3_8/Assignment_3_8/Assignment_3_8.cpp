// Assignment_3_8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int num;
	cout << "This is the program that translate number to Roman numeral.\nPlease enter number from 1 to 10 and the Roman Numeral will display below." << endl;
	cin >> num;
	switch (num) {
	case 1: cout << "I" << endl; // if the num is 1,
		break; // break the loop.
	case 2: cout << "II" << endl; // if the num is 2, so on ... 
		break;
	case 3: cout << "III" << endl;
		break;
	case 4: cout << "IV" << endl;
		break;
	case 5: cout << "V" << endl;
		break;
	case 6: cout << "VI" << endl;
		break;
	case 7: cout << "VII" << endl;
		break;
	case 8: cout << "VIII" << endl;
		break;
	case 9: cout << "IX" << endl;
		break;
	case 10: cout << "X" << endl
		;
		break;
	default: cout << "Invaliaid input. Only number from 1 to 10 is allowed." << endl; // if they were to input any number other than 1 to 10
		break;
	}

	return 0;
}

