/*
 * holiday.h
 *
 *  Created on: Mar 6, 2020
 *      Author: aqeel
 */
#include<iostream>
#include<cstring>
using namespace std;
#ifndef HOLIDAY_H_
#define HOLIDAY_H_

class Holiday {
	string name;
	int day;
	string month;
public:
	Holiday();
	Holiday(string n, int d, string m);
     bool setName(string &s);
     string getName() ;
     bool setDay(int u);
     int getDay() ;
     bool setMonth(string &p);
     string getMonth() ;
	 ~Holiday();
	Holiday(const Holiday &other);
//	void inSameMonth(Holiday a, Holiday b);
//	double avgDate(Holiday arr[], int size);
};

#endif /* HOLIDAY_H_ */
