/*
 * anotherInClass.cpp
 *
 *  Created on: 2 Feb 2017
 *      Author: SA Burt Macklind
 */

#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<iomanip>

using namespace std;

int num1;

int randomNumberGenerator()
{
		srand(time(0));
		int min, max;

		min = 1;
		max = 101;

		num1 = rand() % ((max - min + 1) + min);
		//num2 = rand() % ((max - min + 1) + min);

		cout << num1 << endl;
		//cout << num2 << endl;
		return 0;
}

bool logicalAND(bool exp1, bool exp2)
{
	string result;
	if (exp1 && exp2)
	{
		//result = "True";
		return true;
	}
	else
		return 0;
}

/*void calcDistance(double x1, double y1, double x2, double y2)

{
	double result;

	result = sqrt(pow((x1-x2),2) + pow((y1-y2)2));

	cout << "Distance = " << result << endl;
}
*/
int main()
{
	/*double x1, x2, y1, y2;
	cout << "Enter A coordinates" << endl;
	cin >> x1 >> y1;
	cout << "Enter B coordinates" << endl;
	cin >> x2 >> y2;

	calcDistance(x1, y1, x2, y2);

	calcDistance(2,3,4,5);*/

	srand(time(0));

	cout << logicalAND(randomNumberGenerator() > 3, randomNumberGenerator() < 90) << endl;

	cout << randomNumberGenerator() << endl;

	return 0;
}

