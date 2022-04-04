// 24hour_to_12hour.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Name of this C++ program - 24 hour to 12 hour converstion
Programmer : Jaime Ramirez

Course : CSC160 Coputer Science 1 : C++

Submission Date : 4 / 15 / 2021


Write a program that converts from 24-hour notation to 12-hour notation.
For example, it should convert 14:25 to 2:25 PM. The input is given as two
integers. There should be at least three functions, one for input, one to do the
conversion, and one for output. Record the AM/PM information as a value of
type char, ‘A’ for AM and ‘P’ for PM. Thus, the function for doing the conversions will have a call-by-reference formal parameter of type char to record
whether it is AM or PM. (The function will have other parameters as well.)
Include a loop that lets the user repeat this computation for new input values
again and again until the user says he or she wants to end the program.


*/


//Standerd Libary
#include <cstdio>
#include <stdio.h>
#include <iostream>

//namespace
using namespace std;

//My main
int main()
{
    //askes user to enter time in 24 hour format
    int twenty_four_hrs;
    cout << "Enter the time in twenty four hour format:";
    cin >> twenty_four_hrs;
    cout << "\n";
    int hrs, min;
    hrs = twenty_four_hrs / 100;
    min = twenty_four_hrs % 100;
    cout << "Time in Twelve Hour Format is:\t";//displays in 13 hour format

    //if statment
    if (hrs == 0 && hrs != 12) {
        hrs = 12;
        printf("%.2d:%.2d AM\n", hrs, min);
    }
    else if (hrs == 12 && hrs != 0) {
        hrs = 12;
        printf("%.2d:%.2d PM\n", hrs, min);
    }
    else if (hrs < 12 && hrs != 0) {
        hrs = hrs;
        min = min;
        printf("%.2d:%.2d AM\n", hrs, min);
    }
    else if (hrs > 12 && hrs != 0)
    {
        hrs = hrs - 12;
        min = min;
        printf("%.2d:%.2d PM\n", hrs, min);
    }

}
