// Valume of the cylinder.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*

Name of this C++ program- Volum of the cylinder

Programmer: Jaime Ramirez

Course: CSC160 Coputer Science 1: C++

Submission Date: 3/15/2021

Brief Description of this program.
consider the following program in which the statments are in the incorrect order.
Rearrange the statements so that the program prompts the user to input the height
and radius of the base of a cylinder and output the volume and surface area of the cylinder.
Format the output to two decimal places.

#include <iomanip>
#include <cmath>

int main()
{}

    *double height;

    cout << "Volume of the cylinder = "
        << PI * pow(radius, 2.0) height << endl;

    cout << "Enter the height of the cylinder: ";
    cin >> radius;
    cout << endl;

    return 0;*

    *double radius;
    
    cout << "Surface area: "
         << 2 * PI * radius * height + 2 * PI * pow(radius, 2.0)
         << endl;
    cout << fixed << showpoint << setprecision(2) ;

    cout << "Enter the radius of the base of the cylinder: ";
    cin  >> height;
    cout << endl;

    #include <iostream>
    const double PI = 3.14159;

    ising namespace std;*

*/

// Importing input/output library
#include <iostream>
#include <iomanip>
#include <cmath> //cmath is used for pow

// Standard namespace
using namespace std;

//Main
int main()
{
    const double PI = 3.14159;
    double height;
    double radius;

    cout << "Enter the height of the cylinder: ";
    cin >> radius;
    cout << endl;

    cout << "Enter the radius of the base of the cylinder: ";
    cin >> height;
    cout << endl;

    cout << "Surface area: "
        << 2 * PI * radius * height + 2 * PI * pow(radius, 2.0)
        << endl;
    cout << fixed << showpoint << setprecision(2);

    cout << "Volume of the cylinder = "
        << PI * pow(radius, 2.0) * height << endl;

    return 0;


}

