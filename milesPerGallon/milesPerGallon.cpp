/*A car holds 16 gallons of gas and can travel 312 miles before
refueling.Write a program that calculates the number of 
miles per gallon that this car gets.Display a header, the
miles travelled, the gallons used, and the result, which 
will have decimal places.Take a screenshot of the codeand 
another of the running program displaying the result.*/

#include <iostream>
using namespace std;

int main()
{
	double miles = 312,
		gallons = 16,
		MPG = miles / gallons;

	cout << "Miles per Gallon Project\n\n";
	cout << "Miles:  \t" << miles << endl;
	cout << "Gallons: \t" << gallons << endl;
	cout << "MPG: \t\t" << MPG << endl;

	//to keep window open
	system("pause");
	return 0;
}


