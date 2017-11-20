/*
 * randomSearch.cpp
 *
 *  Created on: 20 Jun 2017
 *      Author: SA Burt Macklind
 */

#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>
#include<cctype>
using namespace std;

int binarySearch(int array[], int size, int value);

void selectionSort(int array[], int size);

int main()
{
	int value,
		min,
		max,
		count;
	const int size = 20;
	char ch,
		 quit;
	bool sameNumber;

	//first we begin the process of randomly generating the numbers
	srand(time(0));

	//here are the parameters
	min = 0;
	max = 100;

	//here we declare the array that houses each of the randomly generated numberd
	int arr1[size];

	for (count = 0; count < size; count++)
		arr1[count] = rand() % (max - min);

	//the array is displayed in order to assure that every variable in the array has a value
	for (count = 0; count < size; count++)
		cout << arr1[count] << " ";
	cout << endl;

	//however, there is a large chance the numbers could be dublicated, so we have to weed them out
	while(true)
	{
		sameNumber = true;
		//first we sort the array
		selectionSort(arr1, size);

		//and display it to make sure the sorting is working
		for (count = 0; count < size; count++)
			cout << arr1[count] << " ";
		cout << endl;

		//now we go through each value and see if it is identical to the one next to it
		for (count = 0; count < size; count++)
		{
			//if it is, we generate a new number
			if (arr1[count] == arr1[count + 1])
			{
				arr1[count] = rand() % (max - min);
				//and sort it again
				selectionSort(arr1, size);
			}
		}
		//now we make sure that none of the values are identical to each other
		for (count = 0; count < size; count++)
		{
			if (arr1[count] != arr1[count + 1])
			{
				sameNumber = false;
			}
		}
		if (!sameNumber)
			break;
		else
			continue;
		//if it is, we start the process over again
		//otherwise, we can continue
	}

	//we display it one last time to ensure that none of the values are identical
	for (int count = 0; count < size; count++)
		cout << arr1[count] << " ";
	cout << endl;

	//and now we can search the array
	while(true)
	{
		cout << "Enter value to be searched" << endl;
		cin >> value;

		if (binarySearch(arr1, size, value) == -1)
			cout << "Value not found" << endl;
		else
			cout << "Yes: " << binarySearch(arr1, size, value);

	//we ask the user if they want to search again
		cout << "\nDo you wish to search again?(1 = no, 2 = yes)" << endl;
		cin >> quit;
			while(true)
			{
				if (quit == '1' || quit == '2')
					break;
				else
				{
					cout << "Incorrect input." << endl;
					cout << "Try again." << endl;
					cin >> quit;
					continue;
				}
			}
			if (quit == '1')
			{
				cin.ignore();
				break;
			}
			else
			{
				cin.ignore();
				cout << "\nPress ENTER to continue." << endl << endl;
				ch = cin.get();
			}
	}
cout << "Thanks for playing!" << endl;
//and we're done
return 0;
}

int binarySearch(int array[], int size, int value)
{
	int first = 0,
		last = size -1,
		middle,
		position = -1;
	bool found = false;

	while (!found && first <= last)
	{
		middle = (first + last) / 2;
		if (array[middle] == value)
		{
			found = true;
			position = middle;
		}
		else if (array[middle] > value)
			last = middle -1;
		else
			first = middle +1;
	}
	return position;
}

void selectionSort(int array[], int size)
{
	{
	   int startScan, minIndex, minValue;

	   for (startScan = 0; startScan < (size - 1); startScan++)
	   {
	      minIndex = startScan;
	      minValue = array[startScan];
	      for(int index = startScan + 1; index < size; index++)
	      {
	         if (array[index] < minValue)
	         {
	            minValue = array[index];
	            minIndex = index;
	         }
	      }
	      array[minIndex] = array[startScan];
	      array[startScan] = minValue;
	   }
	}
}

