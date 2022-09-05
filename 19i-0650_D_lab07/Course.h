/*
 * Course.h
 *
 *  Created on: Mar 7, 2020
 *      Author: aqeel
 */

#ifndef COURSE_H_
#define COURSE_H_
#include<string.h>
#include<iostream>
using namespace std;
class Course {
	char* coursecode=new char[20];
	string coursetitle;
	int cradithours;
	char section;
	int repeatcount;


public:

	void setcode(char* s);
	void settitle(string t);
	void sethours(int h);
	void setsec(char s);
	void setcount(int);

Course();
Course(char* cc, string ct, int ch,char s, int rc);
Course(const Course &c);
	char* getcode();
		string gettitle();
		int gethours();
		 char getsec();
		int getcount();

	virtual ~Course();
};

#endif /* COURSE_H_ */
