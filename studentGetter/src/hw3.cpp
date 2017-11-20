/*
 * hw3.cpp
 *
 *  Created on: 6 Jul 2017
 *      Author: SA Burt Macklind
 */
//Charles Wyatt
//cs2250 hw2
//06/27/2017

#include<iostream>
#include<string>
#include"studentGetter.h"

using namespace std;

void displayStudent(Student);

int main()
{
	Student stu1("What" , "Evers" , "223" , "Art" , 0);
	Student stu2("Single" , "Minded" , "123");
	{
		stu2.setDepartment("Silver");
		stu2.setYear(3);
	}
	Student stu3;
	{
		stu3.setName("Dont" , "Like");
		stu3.setIdNumber("Too");
		stu3.setDepartment("Hard");
		stu3.setYear(2);
	}


	displayStudent(stu1);
	displayStudent(stu2);
	displayStudent(stu3);

	return 0;
}

void displayStudent(Student Student)
{
	string Year[] {"" , "FRESHMAN" , "SOPHMORE" , "JUNIOR" , "SENIOR"};

	cout << "Name: " << Student.getName() << endl;
	cout << "ID Number: " << Student.getIdNumber() << endl;
	cout << "Department: " << Student.getDepartment() << endl;
	cout << "Year: " << Year[Student.getYear() + 1] << endl;
	cout << endl;

}

