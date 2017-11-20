/*
 * hw6.cpp
 *
 *  Created on: 24 Jul 2017
 *      Author: SA Burt Macklind
 */

//Charles Wyatt
//cs2250 hw6
//07/28/2017

#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main()
{
	unsigned int count;
	char brace,
		 trash;
	string bracket;
	stack <char> superStack;
	while (true)
	{
		cout << "Enter parentheses and/or braces: ";
		getline(cin , bracket);
		for (count = 0; count < bracket.length(); count++)
		{
			trash = bracket.at(count);
			if (trash == '(' || trash == '{' || trash == ')' || trash == '}')
				superStack.push(trash);
			if (trash == ')')
			{
				superStack.pop();
				if (superStack.empty())
					superStack.push(')');
				if (superStack.top() == '(' && !superStack.empty())
					superStack.pop();
			}
			if (trash == '}')
			{
				superStack.pop();
				if (superStack.empty())
					superStack.push(')');
				if (superStack.top() == '{' && !superStack.empty())
					superStack.pop();
			}
		}
		if (superStack.empty())
			cout << "Parentheses/braces are nested properly" << endl;
		else
			cout << "Parentheses/braces are NOT nested properly" << endl;

		for (count = 0; count < superStack.size(); count++)
			superStack.pop();

		cout << "Continue? (y/n)" << endl;
		cin >> brace;
		cin.ignore();
		while (true)
		{
			if (brace == 'y' || brace == 'n' || brace == 'Y' || brace == 'N')
				break;
			else
			{
				cout << "y or n" << endl;
				cin >> brace;
				cin.ignore();
			}
		}
		if (brace == 'y' || brace =='Y')
			continue;
		else
			break;
	}
return 0;
}

