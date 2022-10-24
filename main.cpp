/*Task 2. The user enters the company's profit for the year (12
months). The user then enters a range (eg
3 and 6 — search between the third and sixth month). Necessary
determine the month in which the profit was maximum, and
the month in which the profit was minimal, taking into account
of the selected range*/

#include <iostream>
using namespace std;

int main()
{
	int const month = 12;
	int masiv[month];
	int a = 0, b = 0;
	cout << "Enter the company's profit for the year (12 months) : " << endl;
	for (int i = 0; i < month; i++)				
	{
		cout << "Months " << i + 1 << " = ";
		cin >> masiv[i];
	}

	int monthMin, monthMax;
	cout << "\nSelect the range of months in which we determine the maximum value\nfrom ";
	cin >> monthMin;
	cout << "to ";
	cin >> monthMax;
	monthMin -= 1;
	monthMax -= 1;
	int min = masiv[monthMin];
	int max = masiv[monthMin];

	for (; monthMin <= monthMax; monthMin++)
	{
		if (min > masiv[monthMin])
		{
			min = masiv[monthMin];
			b = monthMin;
		}
		else if (max < masiv[monthMin])
		{
			max = masiv[monthMin];
			a = monthMin;
		}
	}
	cout << "\nMinimum profit in " << b + 1 << " month was = " << min << endl;
	cout << "Maximum profit in " << a + 1 << " month was = " << max << endl;
	return 0;
}
