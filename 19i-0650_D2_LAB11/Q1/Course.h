/*
 * Course.h
 *
 *  Created on: 03 Apr 2020
 *      Author: user
 */

#ifndef COURSE_H_
#define COURSE_H_
#include <iostream>
#include <string>
#include "Instructor.h"
#include "TextBook.h"
using namespace std;

class Course {
private:
string courseName;// Course name
Instructor instructor; // Instructor
TextBook textbook;// Textbook
public:
	// Constructor
			Course(string course, string instrLastName,
			string instrFirstName, string instrOffice,
			string textTitle, string author,
			string publisher)
{
courseName=course;
instructor.set(instrLastName,instrFirstName,instrOffice);
textbook.set(textTitle,author,publisher);

}
			// print function
			void print() const
{

cout<<"course Name is : "<<courseName<<endl;
textbook.print();
cout<<endl;
instructor.print();
}
	virtual ~Course()
{
}
	Course(const Course &o)
{
courseName=o.courseName;
instructor.set(o.instructor.getlname(),o.instructor.getfname(),o.instructor.getoffice());
textbook.set(o.textbook.gettitle(),o.textbook.getauthor(),o.textbook.getpublisher());



}
};

#endif /* COURSE_H_ */
