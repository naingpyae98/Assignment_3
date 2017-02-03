//
//  main.cpp
//  Prob7
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

//• His or her name
//• His or her age
//• The name of a city
//• The name of a college
//• A profession
//• A type of animal
//• A pet’s name
//
//After the user has entered these items, the program should display the following story, inserting the user’s input into the appropriate locations:
//There once was a person named NAME who lived in CITY. At the age of AGE, NAME went to college at COLLEGE. NAME graduated and went to work as a PROFESSION. Then, NAME adopted a(n) ANIMAL named PETNAME. They both lived happily ever after!

int main() {

	string name, age, city, college, profession, animal, ans, pet; //string variables that user will give literals for

	cout << "What is your name? "; //user gives literal for name variable
	getline(cin, name); //takes the whole line of string literal including spaces

	cout << "What is you age? "; //user gives literal for age variable
	getline(cin, age); //takes whole line of literal in case user inputs expanded form ex:eight hundred fourty six years old

	cout << "Which city do you live in? "; //users gives value for city variable
	getline(cin, city); //takes in whole line including spaces

	cout << "Which college do you go to? "; //user gives literal for college variable
	getline(cin, college); //takes in whole line including spaces

	cout << "Which profession are you in? "; //user gives literal for prfession variable
	getline(cin, profession); //takes in whole line including spaces

	cout << "What is your favorite animal? "; //user gives literal for animal variable
	getline(cin, animal); //takes in whole line including spaces

	cout << "Do you have a pet? If so, what is their name? If not, make one up :) "; //user gives literal for pet variable
	getline(cin, pet); //takes in whole line including spaces


	cout << "There was once a person named " << name << " who lived in " << city << ". At the age of " << age << ", " << name << " went to a college at " << college << ". " << name << " graduated and went to work as a " << profession << ". Then, " << name << " adopted an " << animal << " named " << pet << ". They both lived happily ever after!" << endl; //print out: There once was a person named NAME who lived in CITY. At the age of AGE, NAME went to college at COLLEGE. NAME graduated and went to work as a PROFESSION. Then, NAME adopted a(n) ANIMAL named PETNAME. They both lived happily ever after!


}
