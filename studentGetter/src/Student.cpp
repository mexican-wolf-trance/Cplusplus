/*
 * Student.cpp
 *
 *  Created on: 4 Jul 2017
 *      Author: SA Burt Macklind
 */
//Charles Wyatt
//cs2250 hw2
//06/27/2017

#include "studentGetter.h"
#include<string>

using namespace std;

Student::Student(string fName, string lName, string id)
{
	fullName.firstName = fName;
	fullName.lastName = lName;
	idNumber = id;
	schoolYear = FRESHMAN;
	department = "";

}

Student::Student(string fName, string lName, string id, string dept, int schYear)
{
	fullName.firstName = fName;
	fullName.lastName = lName;
	idNumber = id;
	schoolYear = static_cast<year>(schYear);
	department = dept;
}

Student::Student()
{
	fullName.firstName = "";
	fullName.lastName = "";
	idNumber = "0";
	schoolYear = FRESHMAN;
	department = "";
}

void Student::setName(string f_Name, string l_Name)
{
	fullName.firstName = f_Name;
	fullName.lastName = l_Name;
}
void Student::setIdNumber(string i_d)
{
	idNumber = i_d;
}
void Student::setDepartment(string depo)
{
	department = depo;
}
void Student::setYear(int _year)
{
	schoolYear = static_cast<year>(_year);
}

