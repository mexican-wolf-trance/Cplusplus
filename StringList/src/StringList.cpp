/*
 * StringList.cpp
 *
 *  Created on: 17 Jul 2017
 *      Author: SA Burt Macklind
 */
//Charles Wyatt
//cs2250 hw5
//07/21/2017
#include "StringList.h"
#include<iostream>
#include<string>

using namespace std;

void RickList::displayList()
{
	RickNode *nodePtr;
	nodePtr = head;

	while(nodePtr)
	{
		cout << nodePtr->value << " ";
		nodePtr = nodePtr->next;
	}
	cout << endl;
}
void RickList::deleteNode(string searchValue)
{
	RickNode *nodePtr;
	RickNode *previousNode;

	if (!head)
		return;
	if (head->value == searchValue)
	{
		nodePtr = head->next;
		delete head;
		head = nodePtr;
	}
	else
	{
		nodePtr = head;
		while (nodePtr != nullptr && nodePtr->value != searchValue)
		{
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}
		if(nodePtr)
		{
			previousNode->next = nodePtr->next;
			delete nodePtr;
		}
	}
}
RickList::~RickList()
{
	cout << "And awaaaay we go!" << endl;
	RickNode *nodePtr;
	RickNode *nextNode;
	nodePtr = head;

	while(nodePtr != nullptr)
	{
		nextNode = nodePtr->next;
		delete nodePtr;
		nodePtr = nextNode;
	}
}
void RickList::insertBack(string newValue)
{
    RickNode *newNode;
	RickNode *lastNode;

	newNode = new RickNode;
	newNode->value = newValue;
	newNode->next = nullptr;


    if(!head)
    {
        head = newNode;
        return;
    }
    else
    {
        lastNode = head;
        while(lastNode->next)
        	lastNode = lastNode->next;
        lastNode->next = newNode;
    }
}
void RickList::insertFront(string newValue)
{
	RickNode *newNode;
	RickNode *nodePtr;

	newNode = new RickNode;
	newNode->value = newValue;


	if(!head)
	{
		head = newNode;
		newNode->next = nullptr;
	}
	else
	{
		nodePtr = head;
		head = newNode;
		newNode->next = nodePtr;
	}


}
void RickList::deleteFront()
{
	RickNode *nodePtr;

	if (!head)
		return;
	else
	{
		nodePtr = head->next;
		delete head;
		head = nodePtr;
	}
}
void RickList::deleteBack()
{
	RickNode *nodePtr;
	RickNode *previousNode;
	RickNode *tempNode;

	if (!head)
		return;
	if (head->next == nullptr)
	{
		tempNode = head;
		delete tempNode;
		head = nullptr;
	}
	if (head)
	{
		nodePtr = head;
		previousNode = nullptr;

		while(nodePtr->next)
		{
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}
		if (previousNode)
		{
			previousNode->next = nullptr;
			delete nodePtr;
		}
	}
}
