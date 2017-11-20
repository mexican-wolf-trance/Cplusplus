/*
 * math.cpp
 *
 *  Created on: 26 Jan 2017
 *      Author: SA Burt Macklind
 */

#include<iostream>
#include<cmath>
using namespace std;

void average(int a, int b, int c)
{
	double result;
	result = (a + b + c) / 3;
	cout << result << endl;
}

void logicalAND(bool exp1, bool exp2)
{
	if (exp1)
	{
		if (exp2)
			cout << "cool man" << endl;
		else
			cout << "really not cool man" << endl;
	}
	else
		cout << "not cool man" << endl;
}


int main()
{
	average(2,4,7);

	average(4,1,2);

	logicalAND(1<0,5<4);

	return 0;
}
