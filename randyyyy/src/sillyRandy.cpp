/*
 * sillyRandy.cpp
 *
 *  Created on: 17 Feb 2017
 *      Author: SA Burt Macklind
 */

#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace std;

int randy()
{
	int num1, num2;
	srand(time(0));
	int min, max;

	min = 1;
	max = 6;

	num1 = rand() % ((max - min + 1) + min);
	num2 = rand() % ((max - min + 1) + min);

	cout << num1 << endl;
	cout << num2 << endl;
	return 0;
}


int main()
{

	double x1, y1, x2, y2, distance;

	cout << "Gimme yo digits ";
	cin >> x1 >> y1 >> x2 >> y2;

	distance = sqrt (pow ((x2 - x1), 2) + pow ((y2 - y1), 2));

	cout << "this yo digits?" << endl;
	cout << distance;

	randy();

	return 0;
}
