//
//  main.cpp
//  Prob4
//
//  Created by Katrina Agatha Bonoan on 2/2/17.
//  Copyright © 2017 Katrina Agatha Bonoan. All rights reserved.
//
#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

	float cel_temp;

	cout << "Let's convert a Celsius temperature into Fahrenheit temperature" << endl; //tells user what we are doing
	cout << "What Celsius temperature do you want to convert? "; //asks user to give a temp in celsius
	cin >> cel_temp; //saves value in variable

	float fahr_temp = (9 * cel_temp) / 5 + 32; //converts into fahrenheit temperature

	cout << setprecision(2) << fixed; //fixes 2 places after the decimal
	cout << cel_temp << " Celsius " << "is the same as " << fahr_temp << " Fahrenheit." << endl; //tells user what the fahrenheit temperature is
}
