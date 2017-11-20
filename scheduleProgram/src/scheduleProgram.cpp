/*
 * scheduleProgram.cpp
 *
 *  Created on: 1 Jul 2017
 *      Author: SA Burt Macklind
 */

#include<iostream>
#include<string>

using namespace std;

struct Employee
 {
  string name;
  char MedAid;
  char PCPI;
 };
struct WorkDays
 {
  string overNight;
  string morning;
  string treatment;
 };

class Check
{
	private:
		string name;
		char MedAid;
		char PCPI;
	public:
		void setName(string);
		void setMedAid(char);
		void setPCPI(char);
		string getName() const;
		char getMedAid() const;
		char getPCPI() const;
};
enum days {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};

int main()
{
 int size;
 cout << "Enter number of employees" << endl;
 cin >> size;
 cin.ignore();
 //needs to be dynamically allocated with "new" function
 Employee *workerPtr = nullptr;
 workerPtr = new Employee;
 WorkDays Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday;

 for (int count = 0; count < size; count++)
 {
  cout << "employee name?" << endl;
  getline(cin, workerPtr[count].name);
  cout << "medaid? y = yes n = no" << endl;
  cin >> workerPtr[count].MedAid;
  cout << "pcpi? y = yes n = no" << endl;
  cin >> workerPtr[count].PCPI;
  cin.ignore();
 }
 for (int count = 0; count < size; count++)
 {
  cout << "This is name: " << workerPtr[count].name << endl;
  cout << "MedAid: " << workerPtr[count].MedAid << endl;
  cout << "PCPI: " << workerPtr[count].PCPI << endl << endl;
 }
 for (int count = SUNDAY; count < SATURDAY; count++)
  {
   if (workerPtr[count].MedAid == 'y' || workerPtr[count].MedAid == 'Y')
    {
     Sunday.overNight = workerPtr[count].name;
     cout << (count + 1) << ": " << Sunday.overNight << endl;
    }
  }
delete[] workerPtr;
return 0;
}





