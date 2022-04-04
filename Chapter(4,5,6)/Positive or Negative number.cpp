// Positive or Negative number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Name of this C++ program - positive or negative or zero number

Programmer : Jaime Ramirez

Course : CSC160 Coputer Science 1 : C++

Submission Date : 4 / 15 / 2021
*/
#include<iostream>
using namespace std;
int main()
{
    //promps the user to enter size of array
    int pos = 0, neg = 0, zer = 0, i, arr[100], tot;
    cout << "Enter the Size (max. 100): ";
    cin >> tot;
    cout << "Enter " << tot << " Numbers: ";
    for (i = 0; i < tot; i++)
    {
        cin >> arr[i];
        if (arr[i] > 0)
            pos++;
        else if (arr[i] == 0)
            zer++;
        else
            neg++;
    }
    cout << "\nFrequency of Positive Numbers: " << pos;//cout positive number
    cout << "\nFrequency of Zero: " << zer;//cout zero number
    cout << "\nFrequency of Negative Numbers: " << neg;//cout negative number
    cout << endl;
    return 0;//End of program
}
