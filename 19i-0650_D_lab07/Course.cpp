/*
 * Course.cpp
 *
 *  Created on: Mar 7, 2020
 *      Author: aqeel
 */

#include "Course.h"

Course::Course() {
	 coursecode="CS 103";
	coursetitle="computer programming";
		cradithours=5;
		 section='D';
		 repeatcount=1;

}

Course::~Course() {

}
void Course::setcode(char* s)
{
	coursecode=s;

}
	void Course::settitle(string t)
	{
		coursetitle=t;
	}
	void Course::sethours(int h)
	{
		cradithours=h;
	}
	void Course::setsec(char s)
	{
		 section=s;
	}
	void Course::setcount(int c)
	{
		repeatcount=c;
	}


	Course::Course(char* cc, string ct, int ch,char s, int rc)
{
	coursecode=cc;
		coursetitle=ct;
			cradithours=ch;
			 section=s;
			 repeatcount=rc;
}
	Course::Course(const Course &c)
{
	coursecode=c.coursecode;
			coursetitle=c.coursetitle;
				cradithours=c.cradithours;
				 section=c.section;
				 repeatcount=c.repeatcount;
}
	char* Course::getcode()
	{
		return coursecode;
	}
		string Course::gettitle()
		{
			return coursetitle;
		}
		int Course::gethours(){
			return cradithours;
		}
		 char Course::getsec()
		 {
			 return section;
		 }
		int Course::getcount()
		{
			return repeatcount;
		}











