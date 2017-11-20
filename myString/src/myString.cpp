/*
 * myString.cpp
 *
 *  Created on: 13 Jul 2017
 *      Author: SA Burt Macklind
 */
//Charles Wyatt
//cs2250 hw4
//07/13/2017

#include "myString.h"
#include<string>
#include<iostream>

using namespace std;

//strCount initialized to zero
int MyString::strCount = 0;

MyString::MyString(string _char)
{
	size = _char.length();
	str = new char[size];
	for (int count = 0; count < size; count++)
		str[count] = _char.at(count);
	strCount++;
}
MyString::MyString()
{
	size = 0;
	str = new char[0];
	strCount++;
}
MyString::MyString(const MyString &obj)
{
	size = obj.size;
	str = new char[size];
	for (int count = 0; count < size; count++)
		str[count] = obj.str[count];
	strCount++;
}
MyString::~MyString()
{
	strCount--;
	delete[] str;
}
void MyString::displayString()
{
	for (int count = 0; count < size; count++)
 		cout << str[count];
	cout << endl;
}
void MyString::operator = (const MyString &right)
{
	delete[] str;
	size = right.size;
	str = new char[size];
	for (int count = 0; count < size; count++)
		str[count] = right.str[count];
}
void MyString::operator += (const MyString &right)
{
	int newsize = size + right.size;
	char *tmp = new char[newsize];

	for (int count = 0; count < size; count++)
		tmp[count] = str[count];
	delete[] str;
	int count2 = 0;
	for (int count = size; count < newsize; count++)
	{
		tmp[count] = right.str[count2];
		count2++;
	}
	str = tmp;
	size = newsize;
}

