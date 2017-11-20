/*
 * moreArrayPractice.cpp
 *
 *  Created on: 5 May 2017
 *      Author: SA Burt Macklind
 */

#include<iostream>

using namespace std;

int getSum(int arr[], int size);

int main()
{
	int array[5] = {12, 34, 56, 78, 90};
	int anArray[6] = {1, 3, 5, 7, 9, 2};

	cout << getSum(array, 5) << endl;
	cout << getSum(anArray, 6) << endl;

	return 0;
}

int getSum(int arr[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
		{
			sum += arr[i];
		}

		return sum;
}


