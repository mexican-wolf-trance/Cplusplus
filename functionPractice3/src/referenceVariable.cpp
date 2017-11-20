/*
 * main.cpp
 *
 *  Created on: 24 Jan 2017
 *      Author: SA Burt Macklind
 */



// A simple, insulting C++ program
#include<iostream>
#include<cmath>
using namespace std;

void doubleVal (int & num)
{
	num = num * 2;
}

int main()
{
	int x = 12;

	for (unsigned int i = 0; i < 5; i++)
	{
		doubleVal (x);
		cout << x << endl;
	}
	return 0;
}
