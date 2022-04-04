// junk mail.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Name of this C++ program - junk mail
Programmer : Jaime Ramirez

Course : CSC160 Coputer Science 1 : C++

Submission Date : 4 / 15 / 2021

 Write a program to generate personalized junk mail. The program takes
input both from an input file and from the keyboard. The input file contains the text of a letter, except that the name of the recipient is indicated
by the three characters #N#. The program asks the user for a name and then
writes the letter to a second file but with the three letters #N# replaced by
the name. The three-letter string #N# will occur exactly once in the letter.

(Hint: Have your program read from the input file until it encounters
the three characters #N#, and have it copy what it reads to the output
file as it goes. When it encounters the three letters #N#, it then sends
output to the screen asking for the name from the keyboard. You
should be able to figure out the rest of the details. Your program
should define a function that is called with the input- and output-file
streams as arguments. If this is being done as a class assignment,
obtain the file names from your instructor.)
Harder version (using material in the optional section “File Names as
Input”): Allow the string #N# to occur any number of times in the file.
In this case, the name is stored in two string variables. For this version, assume that there is a first name and last name but no middle
names or initials.


*/

//Standerd Libary
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

//Namespace
using namespace std;

//Declaring generatejunkmail function
void generateJunkMail(ifstream& infile, ofstream& outfile);

int main()
{
	//string values
	string inputFileName;
	string outputFileName;
	ifstream infile;
	ofstream outfile;

	cout << "Enter the input file name:  ";
	cin >> inputFileName;

	infile.open(inputFileName);

	if (infile.fail())
	{
		cout << "The input file " << inputFileName
			<< " does not exist!" << endl;
		exit(1);
	}

	cout << "Enter the output file name: ";
	cin >> outputFileName;

	outfile.open(outputFileName);

	if (outfile.fail())
	{
		cout << "The output file " << outputFileName
			<< " does not exist!" << endl;
		exit(1);
	}

	generateJunkMail(infile, outfile);

	infile.close();//infile closing
	outfile.close();//outfile closing

	return 0;
}

//Calling generatejunkmail function
void generateJunkMail(ifstream& infile, ofstream& outfile)
{
	char ch1, ch2, ch3;
	char foundCode = 0;
	while (infile.get(ch1))
	{
		char firstName[21], lastName[21];
		if ('#' == ch1)
		{
			infile.get(ch2);
			if ('N' == ch2)
			{
				infile.get(ch3);
				if ('#' == ch3)
				{
					if (foundCode == 0)
					{
						foundCode = 1;

						cout << "Enter a first and last names: ";
						cin >> firstName >> lastName;

						outfile << firstName << " " << lastName;
					}
					else
					{
						outfile << firstName << " " << lastName;
					}
				}
				else
				{
					infile.putback(ch3);
				}
			}
			else
			{
				infile.putback(ch2);
			}
		}
		else
		{
			outfile << ch1;
		}
	}
}
