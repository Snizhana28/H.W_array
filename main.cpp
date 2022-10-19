/*Task 1. In a one-dimensional array filled with random numbers, determine the minimum and maximum
elements*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	const int size = 20;
	int arr[size];
	int max = 0; 
	int min = 0;
	for  ( int i = 0; i < size; i++)
	{
		arr[i] = rand() % 50 - 10;
		if (arr[i] < min)
		{
			min = arr[i];
		}
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	for (int j = 0; j < size; j++)
	{
		cout << arr[j] << "  ";
	}
	cout << "\nMinimal element -> " << min << endl;
	cout << "Maximum element -> " << max << endl;
	return 0;
}