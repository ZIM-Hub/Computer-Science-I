/*
Name of this C++ program - Avarage Monthly Rainfall

Programmer : Jaime Ramirez

Course : CSC160 Coputer Science 1 : C++

Submission Date : 05/06/2021
*/

// Importing input/output library
#include <iostream>
#include <iomanip>

//Namespace
using namespace std;

// Declaring functions
int inputValidate(int, int = 0);
double inputValidate(double, double = 15.00);
void getEmployeeInfo(const int, const int[], double[], double[], double[]);
void displayEmployeeInfo(const int, const int[], const double[]);

//My Main
int main()
{
    const int NUMBER_OF_EMPLOYEES = 7;//Const int
    int empId[] = { 5658845,
                    4520125,
                    7895122,
                    8777541,
                    8451277,
                    1302850,
                    7580489 };

    double hours[NUMBER_OF_EMPLOYEES],
        payRate[NUMBER_OF_EMPLOYEES],
        wages[NUMBER_OF_EMPLOYEES];// variable

    //calling functions
    getEmployeeInfo(NUMBER_OF_EMPLOYEES, empId, hours, payRate, wages);

    displayEmployeeInfo(NUMBER_OF_EMPLOYEES, empId, wages);

    return 0;
} // END int main()

//getting employe information
void getEmployeeInfo(const int NUMBER_OF_EMPLOYEES,
    const int empId[],
    double hours[],
    double payRate[],
    double wages[])
{
    for (int i = 0; i < NUMBER_OF_EMPLOYEES; i++)
    {
        cout << "Enter info for employee #" << empId[i] << " :" << endl;

        cout << "hours worked =  ";
        hours[i] = inputValidate(hours[i]);

        cout << "pay rate     = $";
        payRate[i] = inputValidate(payRate[i]);

        wages[i] = hours[i] * payRate[i];

        cout << endl;
    }
}

//Displaying to the user employee info
void displayEmployeeInfo(const int NUMBER_OF_EMPLOYEES,
    const int empId[],
    const double wages[])
{
    cout << setprecision(2) << fixed;
    cout << "Employee ID number and wages below: " << endl;
    for (int i = 0; i < NUMBER_OF_EMPLOYEES; i++)
    {
        cout << "Wages for Employee #" << empId[i]
            << " = $"
            << wages[i]
            << endl;
    }

}

//Int imputvalidate function
int inputValidate(int user_number, int condition_number)
{
    while (!(cin >> user_number) || user_number < condition_number)
    {
        cout << "Error. Your number must be "
            << condition_number
            << " or greater: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return user_number;
}
//double inputvalidate function
double inputValidate(double user_number, double condition_number)
{
    while (!(cin >> user_number) || user_number < condition_number)
    {
        cout << "Error. Your number must be "
            << condition_number
            << " or greater: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return user_number;
}
