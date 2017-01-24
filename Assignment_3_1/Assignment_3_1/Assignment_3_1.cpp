// Assignment_3_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void problem_one()
{
	int score_1,
		score_2,
		score_3;
	double average_score;
	cout << "This is a program that displays the average score for three game of golf." << endl;
	cout << "Please enter your first score : ";
	cin >> score_1;
	cout << "Please enter your second score : ";
	cin >> score_2;
	cout << "Please enter your third score : ";
	cin >> score_3;
	average_score = static_cast<double>(score_1 + score_2 + score_3) / 3;
	cout << "Your average score is : " << average_score << endl;
}


int main() {
	problem_one();
	return 0;
}



