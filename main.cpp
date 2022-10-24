/*Task 3. In a one-dimensional array consisting of
N real numbers, calculate:
■ The sum of negative elements;
■ Product of elements located between min and max
elements;
■ Product of elements with even numbers;
■ The sum of elements located between the first and last negative elements*/
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	const int size = 15;
	int arr[size];

	for (int i = 0; i < size; i++)             //array
	{
		arr[i] = rand() % 35 - 5;
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
	int sum = 0, negSum = 0;
	int max = 0, min = 0;
	int product = 1, productMinMax = 1;
	int index_max = 0, index_min = 0;
	for (int j = 0; j < size; j++)
	{
		if (arr[j] < 0)
		{
			negSum += arr[j];

		}
		if (arr[j] > max)
		{
			max = arr[j];
			index_max = j;
		}
		if (arr[j] < min)
		{
			min = arr[j];
			index_min = j;
		}
		if (arr[j] % 2 == 0)                                         //product
		{
			product *= arr[j];
		}
	}
	if (index_max > index_min)									//productMinMax
	{
		for (int k = index_min + 1; k < index_max; ++k)
		{
			productMinMax *= arr[k];
		}
	}
	if (index_max < index_min)
	{
		for (int n = index_max + 1; n < index_min; ++n)
		{
			productMinMax *= arr[n];
		}
	}

	for (int e = 0; e < size; e++)          //sum
	{
		if (arr[e] < 0)
		{
			min = e;
			break;
		}
	}
	for (int c = 0; c < size; c++)
	{
		if (arr[c] < 0)
		{
			max = c;
		}
	}
	for (int d = min + 1; d < max; d++)
	{
		sum = arr[d] + sum;
	}
	cout << "\n#------------------------------------------------------------------------------------------->";
	cout << "\n\nThe sum of negative elements : " << negSum;
	cout << "\nThe product of elements located between min and max elements : " << productMinMax;
	cout << "\nProduct of elements with even number : " << product;
	cout << "\nThe sum of elements located between the first and last negative elements : " << sum << endl;
	cout << "\n#------------------------------------------------------------------------------------------->" << endl;
	cout << endl;

	return 0;
}