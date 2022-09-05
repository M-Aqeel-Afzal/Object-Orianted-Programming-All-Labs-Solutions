/*
 * Semester.h
 *
 *  Created on: Mar 7, 2020
 *      Author: aqeel
 */
#ifndef SEMESTER_H_
#define SEMESTER_H_
#include <string.h>
#include <iostream>
static int count=0;
using namespace std;
class Semester {
	string semestercode;
	int cousrecode;
	
	

public:
Course *coursearr=new Course();
	void setsemestercode(string s);
	void setc_code(int);
	void setc_arr(Course &c,int co);
Course getcourse();
	string getsemestercode();
		int getc_code();
		Course* getc_arr();

	Semester();
	virtual ~Semester();
	Semester(const Semester &other);


};

#endif /* SEMESTER_H_ */
