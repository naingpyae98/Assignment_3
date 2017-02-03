// Assignment_3_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iomanip>
#include <iostream>

using namespace std;
int main()
{
	double cookie; // amount of cookie
	cout << "Please enter the amount of cookie you wish to make ";
	cin >> cookie;
	double sugar = 1.5*(cookie / 48); // equation to calculate the sugar.
	double butter = 1 * (cookie / 48); // equation to calculate the butter.
	double flour = 2.75 * (cookie / 48);// equation to calculate the flour.
	cout << setprecision(2) << fixed;
	cout << "The amount of Sugar required is " << sugar << " cups" << endl;
	cout << "The amount of Butter required is " << butter << " cups" << endl;
	cout << "The amount of Flour required is " << flour << " cups" << endl;

    return 0;
}

