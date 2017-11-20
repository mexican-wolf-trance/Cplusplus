/*
 * fileSharing.cpp
 *
 *  Created on: 23 Mar 2017
 *      Author: SA Burt Macklind
 */
#include<fstream>
#include<iostream>
#include<string>

using namespace std;

int main()
{
	ofstream whatevs;
	ifstream soWhat;
	string name;

	whatevs.open("C:/Users/SA Burt Macklind/Desktop/super.txt");

	if (whatevs)
	{

	whatevs << "Charles Wyatt";


	whatevs.close();

	}
	else
		cout << "It ain't open, dummy.";

	soWhat.open("C:/Users/SA Burt Macklind/Desktop/super.txt");

	soWhat >> name;

	cout << name;

	soWhat >> name;

	cout << " " << name;

	soWhat.close();

	return 0;
}


