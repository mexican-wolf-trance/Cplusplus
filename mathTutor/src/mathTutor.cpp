/*
 * mathTutor.cpp
 *
 *  Created on: 24 Feb 2017
 *      Author: SA Burt Macklind
 */

#include<iostream>
#include<cmath>
#include<ctime>
#include<iomanip>
#include<cstdlib>
#include<windows.h>
using namespace std;

int main()
{
	char ch, quit; //this variable allows for the program to pause
	int num1, num2, num3, min, max, answer; //necessary for the maths and setting rand parameters


	cout << "Welcome to the math tutorial program." << endl;
	Sleep(1250);
	cout << "Here you will be tested on your ability to solve addition problems." << endl;
	Sleep(2000);
	cout << "Press ENTER to begin." << endl;

	ch = cin.get();

	while(true){ //an attempt to allow the program to continue as long as the user wants.

	srand(time(0)); //seeding rand function

	min = 0;     //set the parameters between 0 and 10000
	max = 10000;

	num1 = rand() % (max - min); //load the mathing variables
	num2 = rand() % (max - min);


	cout << setw(6) << num1 << endl;         //and now we construct our math problem
	cout << "+ " << setw(4) << num2 << endl; //make sure everything lines up all nice and pretty
	cout << "------  (Press ENTER when you think have the answer)" << endl;
	cin >> answer; //I wonder if there is away to setw() the cin input
	//ch = cin.get(); //pause

	num3 = num1 + num2; //the answer to the problem
	if (answer == num3)                                       //I thought I would tweak it a bit and have the user try to input the answer
		cout << "\nGood work." << endl;                       //and it would say if it was right or wrong
	else{                                                     //you can see the code I commented out though and see that if I had left it alone
		                                                      //it would be within the parameters of the assignment
		cout << "\nDude, c'mon. It is not that hard." << endl;
		Sleep(1000);                                          //Please don't count for my creativity!!!
		cout << "The answer was:" << endl;
		Sleep(1000);
		//cout << setw(6) << num3 << endl << endl << endl;
		cout << num3 << endl << endl;
		}

	cin.ignore();

	Sleep(1250);

	cout << "\nDo you wish to continue?(1 = no)" << endl; //I FIGURED IT OUT!!!!!!
		cin >> quit;
		if (quit == '1'){  //just needed to have the user input a variable
			cin.ignore();//and then check the variable is a certain digit or character
			cout << "Thanks for playing and good luck on your future mathing adventure.";
			break;       //and if it is true, break out o the program. too simple!!!
			}
		else{
			cin.ignore();
			cout << "\nPress ENTER to continue." << endl << endl;
			ch = cin.get();
			}
		}
	return 0;
}


