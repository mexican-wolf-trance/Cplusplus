/*
 * myString.h
 *
 *  Created on: 13 Jul 2017
 *      Author: SA Burt Macklind
 */
//Charles Wyatt
//cs2250 hw4
//07/13/2017

#ifndef MYSTRING_H_
#define MYSTRING_H_

#include<string>
#include<iostream>

using namespace std;

class MyString
{
	private:
		char *str;
		int size;
		static int strCount; //initialized to zero
		                     //in myString.cpp
	public:
		MyString();
		MyString(string);
		MyString(const MyString &);
		~MyString();
		void setStr(char *);
		void setSize(int);
		void displayString();
		char *getStr() const
			{ return str; }
		int getSize() const
			{ return size; }
		int getMyString () const
			{ return strCount; }
		void operator = (const MyString &);
		void operator += (const MyString &);

};

#endif /* MYSTRING_H_ */
