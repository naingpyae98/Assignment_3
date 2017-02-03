// Assignment_3_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include <iomanip>
#include <string>

int main()
{
	double total_Collected, total_Sale; 
	string month, year;
	double  state_Tax_Percent, county_Tax_Percent; // The tax %
	double state_Tax, county_Tax, total_Tax; // Amount of money collected from tax
	state_Tax_Percent = .04; // 4% tax
	county_Tax_Percent = .02; // 2% tax
	cout << "Please Enter the Month: ";
	cin >> month;
	cout << "Please Enter the Year: ";
	cin >> year;
	cout << "Please Enter the Total Amount of Money Collected: ";
	cin >> total_Collected; // Amount of $ collected including tax
	total_Sale = total_Collected / (1 + state_Tax_Percent + county_Tax_Percent); // amount of money collected without tax.
	state_Tax = total_Sale * state_Tax_Percent; // amount of county tax collected
	county_Tax = total_Sale * county_Tax_Percent; // amount of county tax collected
	total_Tax = county_Tax + state_Tax;
	cout << setprecision(2) << fixed; // set to 2 decimal since it is money.
	cout << "Month: " + month + "\n" + "Year: " + year << endl;
	cout << "--------------------" << endl;
	cout << left << setw(30) << "Total Collected: " << "$ " << right << setw(10) << total_Collected << endl;
	cout << left << setw(30) << "Sales: " << "$ " << right << setw(10) << total_Sale << endl;
	cout << left << setw(30) << "County Sales Tax: " << "$ " << right << setw(10) << county_Tax << endl;
	cout << left << setw(30) << "State Sales Tax: " << "$ " << right << setw(10) << state_Tax << endl;
	cout << left << setw(30) << "Total Sales Tax: " << "$ " << right << setw(10) << total_Tax << endl;

	return 0;
}
