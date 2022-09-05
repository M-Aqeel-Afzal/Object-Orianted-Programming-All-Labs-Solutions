/*
 * Semester.cpp
 *
 *  Created on: Mar 7, 2020
 *      Author: aqeel
 */

#include "Semester.h"
#include<string.h>
#include<iostream>
Semester::Semester() {

	 semestercode="spring 2018";
		cousrecode=1;

	
}

Semester::~Semester() {

}

Semester::Semester(const Semester &other) {
	semestercode=other.semestercode;
			cousrecode=other.cousrecode;

}
void Semester::setsemestercode(string s)
{
	semestercode=s;
}
	void Semester::setc_code(int k)
	{
		cousrecode=k;

	}
	void Semester::setc_arr(Course &c,int co)
{


this->coursearr[co].setcode(c.getcode());
this->coursearr[co].settitle(c.gettitle());
this->coursearr[co].sethours(c.gethours());
this->coursearr[co].setsec(c.getsec());
this->coursearr[co].setcount(c.getcount());
//count++;
}
Course Semester::getcourse()
{


}
	string Semester::getsemestercode()
	{
		return semestercode;

	}
		int Semester::getc_code()
		{
			return cousrecode;
		}
		int GetCreditHoursCount(Semester &s1,int n)
		{int sum=0;
for(int i=0;i<n;i++)
{
sum=sum+s1.coursearr[i].gethours();

}
			return sum;
		}
			bool FindCourseInSemesterRegistration(Semester &s,char* c, int size)
			{

				for(int i=0;i<size;i++)
				{
					if(strcmp(s.coursearr[i].getcode(),c)==0)
						return 1;
				

				}
				return 0;

			}











