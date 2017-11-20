/*
 * hw4.cpp
 *
 *  Created on: 13 Jul 2017
 *      Author: SA Burt Macklind
 */
//Charles Wyatt
//cs2250 hw4
//07/13/2017

#include<iostream>
#include<string>
#include "myString.h"

using namespace std;

int main()
{
	MyString silly("wassup");
	silly.displayString();
	MyString jango = silly;
	jango.displayString();
	//default constructor
	MyString dingbat;
	dingbat.displayString();

	jango = silly;
	jango.displayString();

	jango += silly;
	jango.displayString();

	cout << "Number of strings: " << silly.getMyString() << endl;

	return 0;
}

