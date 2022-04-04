// Convert to UpperCase.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	char toUpper;
	cout << "Enter a character:";
	cin >> toUpper;
	toUpper = toUpper - 32;
	cout << "Converted character to UpperCase:";
	cout << toUpper;
	return 0;
}
