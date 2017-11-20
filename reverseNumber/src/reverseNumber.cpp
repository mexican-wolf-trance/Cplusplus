/*
 * reverseNumber.cpp
 *
 *  Created on: 10 Feb 2017
 *      Author: SA Burt Macklind
 */

#include<iostream>
#include<istream>
#include<windows.h>
#include<ctype.h>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
	string reverse, tester;
	int test;
	unsigned int i;

	cout << "Hey kid!" << endl; //we begin with an odd proposition...
	Sleep(1250);
	cout << "Wanna see a magic trick?" << endl;
	Sleep(1000);
	cout << "No?" << endl;
	Sleep(750);
	cout << "Okay!" << endl;
	Sleep(1500);
	cout << "Gimme your 5 digit ID code you were implanted with at birth." << endl; //ask or the input, 5 numbers


	while (true) //i attempt a while loop to check if the user input is made up of numbers and contains only 5 digits
	{
	cin >> reverse;
	bool isNum = true;
	tester = reverse;
	test = reverse.length(); //i convert my variable reverse into a string and determine the length of the string

	for (i = 0; i < reverse.length(); i++)
	{
		char c = reverse.at(i);   //it works now
		                          // check to see ascii is between 48 and 57, or 0 through 9
		if ((int)c < 48 || (int)c > 57)
	 	{
		cout << "I know that's not it." << endl;
		Sleep(1250);
		cout << "It's supposed to be 5 NUMBERS." << endl;
		Sleep(1250);
		cout << "Dumbass." << endl;
		Sleep(1250);
		cout << "Now give me the code."  << endl;
		isNum = false;
		break; //instead of checking each character in the array, this kicks it out as soon as the first non number is discovered.
	 	}
	}

	if (!isNum)
		continue;

	if (test != 5) //check length to see if there are 5 digits
	{
		cout << "I know that's not it." << endl;
		Sleep(1250);
		cout << "It's supposed to be 5 NUMBERS." << endl;
		Sleep(1250);
		cout << "Dumbass." << endl;
		Sleep(1250);
		cout << "Now give me the code."  << endl;
		continue;
	}
	else //if everything works out okay (5 numbers, no letters or special characters), then the program should work from here
	{
	int x = atoi(reverse.c_str());

	int n1 = x % 10;
	x = x / 10;
	int n2 = x % 10;
	x = x / 10;
	int n3 = x % 10;
	x = x / 10;
	int n4 = x % 10;
	x = x / 10;
	int n5 = x % 10;

	Sleep(1000);
	cout <<"\n" << n1 << endl;
	Sleep(1000);
	cout << n2 << endl;
	Sleep(1000);
	cout << n3 << endl;
	Sleep(1000);
	cout << n4 << endl;
	Sleep(1000);
	cout << n5 << endl << endl;
	Sleep(1000);
	cout << "Haha! See?" << endl;
	Sleep(1000);
	cout << "It's backwards!" << endl;
	Sleep(1000);
	cout << "It's magic!" << endl;
	Sleep(1000);
	cout << "Haha!" << endl;
	Sleep(500);
	cout << "haha" << endl;
	Sleep(500);
	cout << "ha ha..." << endl;
	Sleep(1500);
	cout << "ha..." << endl;
	Sleep(2000);
	cout << "...awww...." << endl;
		}
	break;
	}
return 0;
}


