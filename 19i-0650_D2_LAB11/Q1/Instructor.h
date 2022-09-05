/*
 * Instructor.h
 *
 *  Created on: 03 Apr 2020
 *      Author: user
 */

#ifndef INSTRUCTOR_H_
#define INSTRUCTOR_H_
#include<string>
using namespace std;

class Instructor {
string lastName;// Last name
string firstName;// First name
string officeNumber; // Office number
public:
	Instructor()
{
lastName="\0";
firstName="\0";
officeNumber="\0";


}
	virtual ~Instructor(){}
	Instructor(const Instructor &o)
{

lastName=o.lastName;
firstName=o.firstName;
officeNumber=o.officeNumber;

}
	void set( string lname, string fname, string office)
{
lastName=lname;
firstName=fname;
officeNumber=office;

}
	// print function
	void print() const
{
cout<<"First name of instructor: "<<firstName<<endl;
cout<<"Last name of instructor: "<<lastName<<endl;
cout<<"Office number is: "<<officeNumber<<endl;


}
string getfname()const
{
return firstName;
}
string getlname()const
{
return lastName;
}
string getoffice()const
{
return officeNumber;
}
};

#endif /* INSTRUCTOR_H_ */
