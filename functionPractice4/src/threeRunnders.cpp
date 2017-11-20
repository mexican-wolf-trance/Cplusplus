/*
 * threeRunnders.cpp
 *
 *  Created on: 10 Mar 2017
 *      Author: SA Burt Macklind
 */

#include<iostream>
#include<string>

using namespace std;

int nameLength (string fName, string lName);

int main()
{

	int fullNameLength = nameLength("What", "Ever");
	cout <<  "This is the length: "  << fullNameLength << endl;
}

int nameLength (string fName, string lName)
{
	int totalLength, len1, len2;

	len1 = fName.length();
	len2 = lName.length();


	totalLength = len1 + len2;
	return totalLength;
}
