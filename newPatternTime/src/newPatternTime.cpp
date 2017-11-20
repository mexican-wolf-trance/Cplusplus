/*
 * newPatternTime.cpp
 *
 *  Created on: 20 Apr 2017
 *      Author: SA Burt Macklind
 */


#include<iostream>

using namespace std;

int main()
{
	unsigned int i, j;
	char c = 43;

	for (i = 1; i <= 10; i++)
		{
			for (j = 1; j < i; j++)
					cout << c;
			cout << c << endl;
		}
	for (i = 1; i <= 10; i++)
		{

			for (j = i; j < 10; j++)
					cout << c;
			cout << c << endl;
		}


  return 0;
}

