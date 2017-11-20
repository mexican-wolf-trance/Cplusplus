/*
 * allCaps.cpp
 *
 *  Created on: 11 Jul 2017
 *      Author: SA Burt Macklind
 */

#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main()
{
	string x;
	cout << "SAY SOMETHING!!!" << endl;;
	getline(cin, x);
	int y = x.length();
	char c[y];
	unsigned int i;

	for (i = 0; i < y; i++)
		c[i] = toupper(x.at(i));
	for (i = 0; i < y; i++)
	{
		if (c[i] == '?')
			c[i] = '!';
		cout << c[i];
	}

	return 0;
}


