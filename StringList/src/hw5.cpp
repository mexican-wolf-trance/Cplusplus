/*
 * hw5.cpp
 *
 *  Created on: 17 Jul 2017
 *      Author: SA Burt Macklind
 */
//Charles Wyatt
//cs2250 hw5
//07/21/2017
#include<iostream>
#include<string>
#include "StringList.h"

using namespace std;

int main()
{
	RickList squanch;

	string morty = "(1) And that's the waaaaaay the news goes!",
	       summer ="(2) Wuba luba dub dub!",
	       janet = "(3) That's why I always say 'Schlub schlub schlibbity dog'!",
	       jerry = "(4) Hit the sack, Jack!",
		   birdperson = "(5) Uh-oh! Summersault jump!",
		   getSchwifty = "(6) Grasssssssss tastes bad. Ya.";




	squanch.insertFront(morty);
	squanch.displayList();
	cout << endl;

	squanch.insertBack(summer);
	squanch.displayList();
	cout << endl;

	squanch.insertFront(janet);
	squanch.displayList();
	cout << endl;

	squanch.insertBack(jerry);
	squanch.displayList();
	cout << endl;

	squanch.insertFront(birdperson);
	squanch.displayList();
	cout << endl;

	squanch.insertBack(getSchwifty);
	squanch.displayList();
	cout << endl;

	squanch.deleteBack();
	squanch.displayList();
	cout << endl;

	squanch.deleteFront();
	squanch.displayList();
	cout << endl;

	squanch.deleteBack();
	squanch.displayList();
	cout << endl;

	squanch.deleteFront();
	squanch.displayList();
	cout << endl;

	squanch.deleteBack();
	squanch.displayList();
	cout << endl;

	squanch.deleteFront();
	squanch.displayList();
	cout << endl;

	return 0;
}


