/*
 * studentGetter.h
 *
 *  Created on: 3 Jul 2017
 *      Author: SA Burt Macklind
 */
//Charles Wyatt
//cs2250 hw2
//06/27/2017

#ifndef STUDENTGETTER_H_
#define STUDENTGETTER_H_

#include<string>

using namespace std;

struct Name
	{
		string firstName;
		string lastName;
	};
enum year {FRESHMAN, SOPHMORE, JUNIOR, SENIOR};

class Student
{
	private:
		Name fullName;
		string idNumber;
		string department;
		year schoolYear;
	public:
		Student();
		Student(string, string, string);
		Student(string, string, string, string, int);
		void setName(string, string);
		void setIdNumber(string);
		void setDepartment(string);
		void setYear(int);
		string getName() const
			{return fullName.firstName + " " + fullName.lastName;}
		string getIdNumber() const
			{return idNumber;}
		string getDepartment() const
			{return department;}
		year getYear() const
			{return schoolYear;}
};
#endif /* STUDENTGETTER_H_ */
