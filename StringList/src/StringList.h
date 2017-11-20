/*
 * StringList.h
 *
 *  Created on: 17 Jul 2017
 *      Author: SA Burt Macklind
 */
//Charles Wyatt
//cs2250 hw5
//07/21/2017
#ifndef STRINGLIST_H_
#define STRINGLIST_H_

#include<iostream>
#include<string>

using namespace std;

class RickList
{
private:
	struct RickNode
		{
			string value;
			struct RickNode *next;
		};

		RickNode *head;
public:
	RickList()
		{ head = nullptr; }
	~RickList();

	void insertFront(string);
	void insertBack(string);
	void deleteFront();
	void deleteBack();
	void deleteNode(string);
	void displayList();
};



#endif /* STRINGLIST_H_ */
