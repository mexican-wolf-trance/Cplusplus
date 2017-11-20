/*
 * arrayPractice.cpp
 *
 *  Created on: 27 Apr 2017
 *      Author: SA Burt Macklind
 */

#include<vector>
#include<iostream>

using namespace std;

const int SIZE = 5;
void displayArr(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
		arr[i]++;
	}
}

int main()
{
	/*vector<int> numbers {10, 20, 30, 40};

	numbers.begin();

	//numbers.insert(numbers.begin(), 4, 50);
	numbers.push_back(60);

	for (unsigned int i = 0; i < numbers.size(); i++)
		cout << numbers[i] << endl;

	numbers.pop_back();

	for (unsigned int i = 0; i < numbers.size(); i++)
			cout << numbers[i] << endl;*/

	int array[10];
	int anotherArray[5] = {1, 2, 3, 4, 5};
	int arrrrArray[5] = {2, 3, 4};
	int pirateArray[] = {3, 3, 3};

	int numbers[5][4];

	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			//numbers[i][j] = 0;
			cin >> numbers[i][j];
		}
	}

	for(int i = 0; i < 5; i++)
		{
			for(int j = 0; j < 4; j++)
			{
				cout << numbers[i][j] << " ";
			}
			cout << endl;
		}

	int sum2 = 0;
	for(int i = 0; i < 5; i++)
		{
			for(int j = 0; j < 4; j++)
			{
				sum2 += numbers[i][j];
			}
		}

	cout << sum2 << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << "Keep entering numbers." << endl;
		cin >> array[i];
	}
	cout << "Yer done. Thanks for that." << endl;
	int sum = 0;


	int maxValue = array[0];
	for (int i = 1; i < 10; i++)
	{
		if (maxValue < array[i])
		{
			maxValue = array[i];
		}
	}
	cout << "This is the largest." << endl;
	cout << maxValue << endl;

	int minValue = array[0];
	for (int i = 1; i < 10; i++)
	{
		if (minValue > array[i])
		{
				minValue = array[i];
		}
	}
	cout << "And this is the widdlest number." << endl;
	cout << minValue << endl;


	for (int i = 0; i < 10; i++)
	{
		sum += array[i];
	}
	cout << "Here's the total of the numbers." << endl;
	cout << sum << endl;
	cout << "And here is the average." << endl;
	cout << sum / 10 << endl;

	cout << "Here they are backwards." << endl;
	for (int i = 9; i > -1; i--)
	{
		cout << array[i] <<  endl;
	}

	//Linear search

	int value;
	cout << "Enter the value to search for." << endl;
	cin >> value;

	bool found = false;
	int index = -1;

	for(int i = 0; i < 10; i++)
	{
		if(array[i] == value)
		{
			found = true;
			index = i;
			break;
		}
	}
	if(found)
	{
		cout << "The element was found at index = " << index << endl;
	}
	else
	{
		cout << "It was not found." << endl;
	}

	displayArr(array, 10);

	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << endl;
	}

	return 0;
}



