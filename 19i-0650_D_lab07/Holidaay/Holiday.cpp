/*
 * holiday.cpp
 *
 *  Created on: Mar 6, 2020
 *      Author: aqeel
 */

#include "Holiday.h"
#include<cstring>
Holiday::Holiday() {
	day=0;
	name="NULL";
	month="NULL";



}
holiday::holiday(string &n, int d, string &m)
{
name=n;
month=m;
day=d;
}
bool Holiday::setName(string &s)
{
name=s;
return 1;

}
    string Holiday::getName()
    {
    	return name;
    }
    bool Holiday::setDay(int u)
    {
    	day=u;
    	return 1;
    }
    int Holiday::getDay()
    {
    	return day;
    }
    bool Holiday::setMonth(string &p)
    {
    	month=p;
    	return 1;
    }
    string Holiday::getMonth()
    {
    	return month;
    }


holiday::Holiday(const Holiday &other) {
	name=other.name;
	day=other.day;
	month=other.month;

}
Holiday::~Holiday() {

}
bool Holiday::inSameMonth (Holiday &a, Holiday &b)
{
if(a.month==b.month)
	return true;
}
double avgDate(Holiday arr[], int size)
{int sum=0;
double avg=0;
	for(int i=0;i<size;i++)
	{
		sum=sum+arr[i].day;
	}
	avg=sum/size;
	return avg;
}


















