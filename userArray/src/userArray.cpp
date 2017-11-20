/*
 * userArray.cpp
 *
 *  Created on: 26 Jun 2017
 *      Author: SA Burt Macklind
 */

//Charles Wyatt
//cs2250 hw2
//06/27/2017

#include<iostream>
#include<cctype>
#include<string>
#include<ctime>

using namespace std;

void showArray(char *array)
{
	for ( ; *array; array++)
	//for (int count = 0; *(array + count) != '\0'; count++)
		//cout << *(array + count) << " ";
		cout << *array << " ";
	cout << endl;
}

void selectionSort(char *array)
{
	{
	   int startScan, minIndex, minValue;

	   for (startScan = 0; *(array + startScan) != '\0'; startScan++)
	   {
	      minIndex = startScan;
	      minValue = *(array + startScan);
	      for(int index = startScan + 1; *(array + index) != '\0'; index++)
	      {
	         if (*(array + index) < minValue)
	         {
	            minValue = *(array + index);
	            minIndex = index;
	         }
	      }
	      *(array + minIndex) = *(array + startScan);
	      *(array + startScan) = minValue;
	   }
	}
}

int main()
{
	int N,
		count;
	string str;
	unsigned int i;
	char min = 97,
		 max = 122,
		 quit,
		 ch;
	srand(time(0));

	while(true)
	{
		char *arrayPtr = nullptr;
		while(true)
		{
			cout << "How many N's do you want?" << endl;
			cin >> str;
			bool truTru = true;

			for (i = 0; i < str.length(); i++)
			{
				char c = str.at(i);
				if (!isdigit(c))
				//if ((int)c < 48 || (int)c > 57)
				{
					cout << "Make sure you are entering numbers, ya dummie." << endl;
					truTru = false;
					break;
				}
			}

			if (!truTru)
				continue;
			else
				break;
		}

		N = atoi(str.c_str());
		arrayPtr = new char[N + 1];
		arrayPtr[N] = '\0';


		for(count = 0; count < N; count++)
			arrayPtr[count] = min + (rand() % (max - min));

		showArray(arrayPtr);

		selectionSort(arrayPtr);

		showArray(arrayPtr);

		delete[] arrayPtr;

		cout << "Wanna enter more N's? (1 = no, 2 = yes)" << endl;
		cin >> quit;
			while(true)
			{
				if (quit == '1' || quit == '2')
						break;
				else
					{
						cout << "Incorrect input." << endl;
						cout << "Try again." << endl;
						cin >> quit;
						continue;
					}
			}
			if (quit == '1')
				break;
			else
			{
				cin.ignore();
				cout << "\nPress ENTER to continue." << endl;
				ch = cin.get();
			}
	}
cout << "Thanks for your N's!" << endl;

return 0;
}


