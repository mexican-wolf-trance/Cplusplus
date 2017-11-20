/*
 * powerOverloading.cpp
 *
 *  Created on: 28 Apr 2017
 *      Author: SA Burt Macklind
 */

#include<iostream>
#include<cmath>

using namespace std;

int sum(int a, int b);
int sum(int c, int d, double g);
int sum(double h, int i, double j, int k);

int main()
{
	cout << sum(12, 23) << endl;

	cout << sum(22, 43, 98.32) << endl;

	cout << sum(23.4332, 12, 98.002, 19) << endl;

	return 0;
}

int sum(int a, int b)
{
	return a + b;
}

int sum(int c, int d, double g)
{
	return c + d + g;
}

int sum(double h, int i, double j, int k)
{
	return h + i + j + k;
}
