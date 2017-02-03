// Assignment_3_9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include <iomanip>
#include <string>

int main()
{
	cout << "This program will tell you which secondary color you will get by mixing two secondary color\n";
	cout << "Primary colors are \"red\", \"yellow\" and, \"blue\"." << endl;
	string c1; // Color 1
	string c2; // Color 2
	cout << "Please enter first Primary color.\n";
	cin >> c1;
	cout << "Please enter second Primary color.\n";
	cin >> c2;
	if ((c1 == "red" && c2 == "blue") || (c1 == "blue" && c2 == "red")) // If they mix red and blue.
		cout << "When you mix red and blue, you get purple." << endl;
	else if ((c1 == "red" && c2 == "yellow") || (c1 == "yellow" && c2 == "red")) // If they mix red and yellow.
		cout << "When you mix red and yellow, you get orange." << endl;
	else if ((c1 == "yellow" && c2 == "blue") || (c1 == "blue" && c2 == "yellow")) // If they mix yellow and blue.
		cout << "When you mix yellow and blue, you get green." << endl;
	else
		cout << "Invalid color. Primary colors are \"red\", \"yellow\" and, \"blue\"." << endl; // If they didnt enter the color right.	
    return 0;
}

