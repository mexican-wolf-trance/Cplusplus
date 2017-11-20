/*
 * changeAndHope.cpp
 *
 *  Created on: 23 Mar 2017
 *      Author: SA Burt Macklind
 */
#include<iostream>
#include<fstream>
#include<string>
#include<istream>
#include<chrono>
#include<thread>

using namespace std;

int main()
{
	string penny, quarter, dime, nickle;
	int dollar;
	unsigned int i;
	char ch, quit;

	cout << "Play a game with me! Haha! Do it!" << endl;
	//auto start = chrono::high_resolution_clock::now(); //this is my attempt to find an alternative
	//std::this_thread::sleep_for(2s);                   //to the Sleep() function
	//auto end = chrono::high_resolution_clock::now();   //i cannot get it to work despite the fact
	cout << "Do it." << endl;                            //that I followed the syntax exactly
	//std::this_thread::sleep_for (std::chrono::seconds(1.25));
	cout << "..." << endl;
	//std::this_thread::sleep_for (std::chrono::seconds(1.25));
	cout << "Do." << endl;
	//std::this_thread::sleep_for (std::chrono::seconds(1.25));
	cout << "It." << endl;
	//std::this_thread::sleep_for (std::chrono::seconds(1.25));
	cout << "Let's see if you can correctly arrange coins to equal one dollar!" << endl;
	//std::this_thread::sleep_for (std::chrono::seconds(1.25));

	while(true)
	{
	cout << "Gimme yo quarters: ";

	while (true)
	{
		cin >> quarter;
		bool isNum = true;
		//change = quarter;

		for (i = 0; i < quarter.length(); i++)
		{
			char c = quarter.at(i);

			if ((int)c < 48 || (int)c > 57)
		 	{
			cout << "MONEY CAN'T BE NOT NUMBERS GAH." << endl;
			isNum = false;
			break;
		 	}
		}

		if (!isNum)
			continue;
		else
			break;
	}
	cout << "Yo dimes! ";
	while (true)
		{
			cin >> dime;
			bool isNum = true;
			//change = quarter;

			for (i = 0; i < dime.length(); i++)
			{
				char c = dime.at(i);

				if ((int)c < 48 || (int)c > 57)
			 	{
				cout << "MONEY CAN'T BE NOT NUMBERS GAH." << endl;
				isNum = false;
				break;
			 	}
			}


			if (!isNum)
				continue;
			else
				break;
		}
	cout << "NOW THE NICKLES *giggle* ";

	while (true)
		{
			cin >> nickle;
			bool isNum = true;
			//change = quarter;

			for (i = 0; i < nickle.length(); i++)
			{
				char c = nickle.at(i);

				if ((int)c < 48 || (int)c > 57)
			 	{
				cout << "MONEY CAN'T BE NOT NUMBERS GAH." << endl;
				isNum = false;
				break;
			 	}
			}


			if (!isNum)
				continue;
			else
				break;
		}
	cout << "pennies...: ";
	while (true)
		{
			cin >> penny;
			bool isNum = true;
			//change = quarter;

			for (i = 0; i < penny.length(); i++)
			{
				char c = penny.at(i);

				if ((int)c < 48 || (int)c > 57)
			 	{
				cout << "MONEY CAN'T BE NOT NUMBERS GAH." << endl;
				isNum = false;
				break;
			 	}
			}


			if (!isNum)
				continue;
			else
				break;
		}
	cout << "Now let's see if they......EQUAL A DOLLAR. YA!" << endl;

	int quarters = atoi(quarter.c_str());
	int dimes = atoi(dime.c_str());
	int nickles = atoi(nickle.c_str());
	int pennies = atoi(penny.c_str());

	dollar = (quarters * 25) + pennies + (nickles * 5) + (dimes * 10);


	if (dollar == 100)
		cout << "OMG BRO! That's one...whole...DOLLAAARRRRRR!!!!" << endl;
	else if (dollar < 100)
		cout << "Haha, that was less than a dollar. What a loser. Douche bag." << endl;
	else if (dollar > 100)
		cout << "Silly goose. That was more than a dollar. You're a goose and you are silly." << endl;
	else if (dollar > 200)
		cout <<"WOOOOOOW. That was way more than a dollar. Are you even trying? Seriously." << endl;

	cin.ignore();

	cout << "\nWanna play again?(1 = no)" << endl;
			cin >> quit;
			if (quit == 49){
				cin.ignore();
				cout << "Thanks for playing. I really...REALLY appreciate it...";
				break;
				}
			else{
				cin.ignore();
				cout << "\nPress ENTER to continue." << endl << endl;
				ch = cin.get();
				}
	}
	return 0;
}


