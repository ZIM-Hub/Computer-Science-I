// Weight test score.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*

Name of this C++ program- weight test score

Programmer: Jaime Ramirez

Course: CSC160 Coputer Science 1: C++

Submission Date: 3/15/2021

Brief Description of this program
Design an algorithm to find the weighted average of four test scores .
The four test scores and thir respective weight are given in the
following format:

testScore weightTestScore

*/

// Importing input/output library
#include <iostream>
#include <iomanip>

// Standard namespace
using namespace std;

// Declaring function
void testScores(double score_1, double score_2, double score_3, double score_4);

//Mymain
int main()
{
    // Defining variables
    double score_1, score_2, score_3, score_4, score_5;

    // Ask user to enter 5 test scores
    cout << "Enter Score #1: ";
    cin >> score_1;
    cout << "Enter Score #2: ";
    cin >> score_2;
    cout << "Enter Score #3: ";
    cin >> score_3;
    cout << "Enter Score #4: ";
    cin >> score_4;

    //Calling Function
    testScores(score_1, score_2, score_3, score_4);
}

// Declaring function
void testScores(double score_1, double score_2, double score_3, double score_4)
{
    //Veriables
    double weightTestScore;

    //Data
    weightTestScore = (score_1 + score_2 + score_3 + score_4);

    //fixed point
    cout << setprecision(1) << fixed;
    //Displayes average score
    cout << "\nThe average test score is: " << weightTestScore << endl;

}
