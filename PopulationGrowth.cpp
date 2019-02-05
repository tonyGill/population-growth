/*


Algorithm was designed in the following series of steps:
1) Define and initialize variable for year starting at 1900 and remaining 20 year intervals for 1920, 1940, 1960, 1980 & 2000
2) Define and initialize variable for amount of population growth in 1000 at each of the 20 year intervals
3) Display the year and population growth as ASCII asterisk symbol, where each asterisk represents population growth in the 1000s
5) Output final table with all yearly intervals and corresponding population growth

Functions/Formulas

Function in this case was only the main function with variable for yearly intervals as integer type and population growth
represented as asterisks per 1000s of people


Revision History:
January 30, 2019: First working edition created
February 3, 2019: Final version revised and completed


*/

#include <iostream>
#include <iomanip>
using namespace std;




int main()
{

	// Defines the variable for each 20 year interval marking change in population size
	double year = 1900;

	double yrInterval = 20;

	// This defines the variable for symbolizing population as 1 asterisk per thousand of people
	char astSym = '*';

	// Defines the actual population size and growth
	double popGrowth;

	// Displays the intial message notifying the user that this program represents the population growth stats for Prarieville
	cout << "\nPrarieville Growth in Population Stats" << endl;
	cout << "\n(each * represents 1000 people)" << endl;



	popGrowth = 11000; popGrowth <= 3000; popGrowth++;
	popGrowth /= 1000;

	// Displays the first year interval of 1900 and associated population growth predefined
	cout << year << setw(2);
	for (int i = 1; i <= popGrowth; i++)
	{

		popGrowth = 12000;
		popGrowth /= 1000;
		cout << astSym;
	}
	cout << endl;

	// Displays the first year interval of 1920 and associated population growth predefined
	cout << year + yrInterval << setw(2);

	for (int i = 1; i < popGrowth; i++)
	{
		popGrowth = 14000;
		popGrowth /= 1000;
		cout << astSym;
	}
	cout << endl;

	// Displays the first year interval of 1940 and associated population growth predefined
	cout << year + yrInterval * 2 << setw(2);

	for (int i = 1; i < popGrowth; i++)
	{
		popGrowth = 18000;
		popGrowth /= 1000;
		cout << astSym;
	}

	// Displays the first year interval of 1960 and associated population growth predefined
	cout << endl;
	cout << year + yrInterval * 3 << setw(2);

	for (int i = 1; i < popGrowth; i++)
	{
		popGrowth = 19900;
		popGrowth /= 1000;
		cout << astSym;
	}
	cout << endl;

	// Displays the first year interval of 1980 and associated population growth predefined
	cout << year + yrInterval * 4 << setw(2);

	for (int i = 1; i < popGrowth; i++)
	{
		popGrowth = 20000;
		popGrowth /= 1000;
		cout << astSym;
	}
	cout << endl;

	// Displays the first year interval of 2000 and associated population growth predefined
	cout << year + yrInterval * 5 << setw(2);
	for (int i = 1; i < popGrowth; i++)
	{
		popGrowth = 55000;
		popGrowth /= 1000;
		cout << astSym;
	}
	cout << endl;




	return 0;
}