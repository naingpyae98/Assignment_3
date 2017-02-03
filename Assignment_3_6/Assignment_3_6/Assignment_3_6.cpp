//
//  main.cpp
//  Prob6
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

	cout << "Hi! I'll be your math tutor. :)" << endl; //introduces itself
	cout << "I'll give you a question and I'll wait for you to answer." << endl; //briefs the user

	char oprtr;
	cout << "Press a to practice addition and hit enter." << endl; //tells user instructions
	cout << "Or press s to practice subtraction and hit enter. ";
	cin >> oprtr; //takes in operator variable

	srand(time(0));
	int num1 = 1 + rand() % 500; //produces a random number from 1 to 500
	int num2 = 1 + rand() % 500; //produces a random number from 1 to 500
	int a = num1 + num2; //variable a is where first and second number are added
	int s = num1 - num2; //variable s is where first and second number are subtracted

	int mentee_ans;
	cout << setprecision(2) << fixed; //fixes 2 places after the decimal

	switch (oprtr) {
	case 'a': //if user press a
		cout << "What is " << num1 << " + " << num2 << "? Hit Enter to check answer."; //asks an addition problem
		cin >> mentee_ans;

		if (mentee_ans == a) //if user's answer is equal to variable a
			cout << "Good job!" << endl; //print "Good job!"
		else //otherwise
			cout << "Nice try. The answer was " << a << "." << endl; //print out this statement
		break; //stops from doing the next code
	case 's': //if user press s
		cout << "What is " << num1 << "-" << num2 << "? Hit enter to check answer."; //asks a subtraction problem
		cin >> mentee_ans;

		if (mentee_ans == s) //if user's answer is the same as s variable
			cout << "Good job!" << endl; //print "Good job!"
		else //otherwise
			cout << "Nice try. The answer was " << s << "." << endl; //print this statement
		break;//stops
	default://if user enters something other than a or s
		cout << "Please enter a or s."; //prints this statement
	}


}
