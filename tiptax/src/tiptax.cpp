/*
 * tiptax.cpp
 *
 *  Created on: 31 Jan 2017
 *      Author: SA Burt Macklind
 */

#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

int main()
{
	double meal, pretip, tip, pretax, tax, mealTax, mealTotal;

	cout << "How much was the meal? "; //input the the meal, pretax, pretip
	cin >> meal;
	cout << "What's the tax? ";
	cin >> pretax;
	cout << "How much do you want to tip? ";
	cin >> pretip;
	//meal = 43.50; //previous iteration
	//tax = 0.0575;
	//tip = 0.15;
	tip = pretip / 100; //in order to convert to decimal form to make math easier
	tax = pretax / 100;

	mealTax = meal * tax + meal; //arithmetic! how much is the meal after tax?
	mealTotal = mealTax * tip + mealTax; //how much after the tip?

	//and now it's story time!!!
	cout << "\nIf the meal costs $" << setprecision(2) << fixed << meal	<<
			", then it costs $";
	cout << mealTax <<  " with tax." << endl;
	cout << "With a(n) "<< setprecision(0) << pretip <<"% tip, the total comes to $"
			<< setprecision(2) << fixed << mealTotal << endl << endl << endl;
	Sleep(2000);

	if(pretip >= 20) //and now for my patented insult
		cout << "You rich bastard.";
	else
		cout << "You cheap bastard.";
	return 0;
}
