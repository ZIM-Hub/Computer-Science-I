/*
Write a program that reads in the average
monthly rainfall for a city for each month of the yearand then reads
in the actual monthly rainfall for each of the previous 12 months.The
program then prints out a nicely formatted table showing the rainfall
for each of the previous 12 months as well as how much above or below
average the rainfall was for each month.The average monthly rainfall is
given for the months January, February, and so forth, in order.To obtain
the actual rainfall for the previous 12 months, the program first asks what
the current month isand then asks for the rainfall figures for the previous
12 months.The output should correctly label the months.
There are a variety of ways to deal with the month names.One
straightforward method is to code the months as integers and then
do a conversion before doing the output.A large switch statement is
acceptable in an output function.The month input can be handled in
any manner you wish, as long as it is relatively easyand pleasant for
the user.
After you have completed this program, produce an enhanced version that
also outputs a graph showing the average rainfalland the actual rainfall
for each of the previous 12 months.The graph should be similar to the
one shown in Display 7.8, except that there should be two bar graphs
for each monthand they should be labeled as the average rainfalland
the rainfall for the most recent month.Your program should ask the user
whether she or he wants to see the table or the bar graph and then should
display whichever format is requested.Include a loop that allows the user
to see either format as often as the user wishes until the user requests that
the program end.
*/
/*
Name of this C++ program - Avarage Monthly Rainfall

Programmer : Jaime Ramirez

Course : CSC160 Coputer Science 1 : C++

Submission Date : 05/06/2021
*/

#include <iostream>
#include <vector>
using namespace std;

// Global constant variable
const int ARRAY_SIZE = 12;

// Function Prototypes
double inputValidate(double);
void getValues(double[]);
double average(double);
double calculateTotal(double[]);
void findHighestMonths(double[], vector<int>&);
void findLowestMonths(double[], vector<int>&);
void display(double, double, vector<int>, vector<int>);

//My main
int main()
{
    double rainfall[ARRAY_SIZE];

    cout << "Enter average rainfall for each month: " << endl;
    getValues(rainfall);

    double total_rainfall = calculateTotal(rainfall);
    double avarage_rainfall = average(total_rainfall);

    vector<int>highest_months;
    findHighestMonths(rainfall, highest_months);

    vector<int>lowest_months;
    findLowestMonths(rainfall, lowest_months);

    display(total_rainfall, avarage_rainfall, highest_months, lowest_months);

    return 0;
} // END int main()

//input validate function
double inputValidate(double user_number)
{
    while (!(cin >> user_number) || user_number < 0)
    {
        cout << "Error: please enter a positive number."
            << "Try again: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return user_number;
}

//getvalues function
void getValues(double array[])
{
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << (i + 1)
            << ": ";
        array[i] = inputValidate(array[i]);
    }

}

//calculateTotal function
double calculateTotal(double array[])
{
    double total = 0;

    for (int i = 0; i < ARRAY_SIZE; i++)
        total += array[i];

    return total;
}

//average function
double average(double sum)
{
    return sum / ARRAY_SIZE;
}

//findHighestMonths function
void findHighestMonths(double array[], vector<int>& vector_array)
{
    double max = array[0];
    vector_array.push_back(0);

    for (int i = 1; i < ARRAY_SIZE; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
            vector_array.clear();
            vector_array.push_back(i);
        }
        else if (array[i] == max)
        {
            max = array[i];
            vector_array.push_back(i);
        }

    }

}

//findLowestMonths function
void findLowestMonths(double array[], vector<int>& vector_array)
{
    double min = array[0];
    vector_array.push_back(0);

    for (int i = 1; i < ARRAY_SIZE; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
            vector_array.clear();
            vector_array.push_back(i);
        }
        else if (array[i] == min)
        {
            min = array[i];
            vector_array.push_back(i);
        }


    }

}

//display funtion
void display(double total,
    double average,
    vector<int> highest_months,
    vector<int> lowest_months)
{
    const string MONTHS[] = { "January", "February", "March",
                             "April"  , "May"     , "June",
                             "July"   , "August"  , "September",
                             "October", "November", "December" };

    cout << "\nTotal rainfall for the year   = "
        << total
        << endl;

    cout << "Average monthly rainfall      = "
        << average
        << endl;

    cout << "Month with highest amount     = ";

    for (int i = 0; i < highest_months.size(); i++)
    {
        if (i == highest_months.size() - 1)
            cout << MONTHS[highest_months[i]];
        else
            cout << MONTHS[highest_months[i]] << ", ";

    }

    cout << endl;

    cout << "Month with lowest amount      = ";

    for (int i = 0; i < lowest_months.size(); i++)
    {
        if (i == lowest_months.size() - 1)
            cout << MONTHS[lowest_months[i]];
        else
            cout << MONTHS[lowest_months[i]] << ", ";
    }

    cout << endl;
}
