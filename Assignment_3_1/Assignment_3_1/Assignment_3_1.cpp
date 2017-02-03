//
//  main.cpp
//  Prob!
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

	int score_1, score_2, score_3; //user gives literals for score_1, score_2, score_3

	cout << "Let's find your average gold score for 3 rounds." << endl; //tells user what we're doing

	cout << "What was your score in round 1? "; //asks user to give value for score_1
	cin >> score_1; //saves value into score_1 variable

	cout << "What was your score in round 2? "; //asks user to give value for score_2
	cin >> score_2; //saves value into score_2 variable

	cout << "What was your score in round 3? "; //asks user to give value for score_2
	cin >> score_3; //saves value in score_3

	int total_score = score_1 + score_2 + score_3; //finds the sum of all 3 scores
	int avg_score = total_score / 3; //divides sum by 3 to find the average
	cout << "Your average score is " << avg_score << "." << endl; //tells the user their average score

	return 0; // end program
}
