
#ifndef DATE_H
#define DATE_H
#include <string>
#include<iostream>


using namespace std;
using std::string;
using std::to_string;
class Date {
protected:
int day;
int month;
int year;
public:
Date();
Date(int, int, int);
void setDate(int, int, int);
 Date(const Date &d);

string getDate();
virtual int getDay() const;
virtual int getMonth() const;
virtual  int getYear() const;
void setDay(int y) ;
void setMonth(int m) ;
void setYear(int d) ;
};
#endif
Date::Date(const Date &d)
{
day=d.day;
month=d.month;
year=d.year;
}
Date::Date(int d, int m, int y)  {
day=d;
month=m;
year=y;

}
Date::Date()
{
day=1;
month=2;
year=2010;
}
void Date::setDate(int d, int m, int y)
{
day=d;
month=m;
year=y;


}
void Date::setDay(int d) 
{

day=d;

}
void Date::setMonth(int m) 
{

month=m;
}
void Date::setYear(int y) 
{

year=y;
}
string Date::getDate() {
	return to_string(day) + "/" + to_string(month) + "/" + to_string(year);
}

int Date::getYear() const {

//cout<<"////////////"<<year<<endl;
	return year;
}

int Date::getMonth() const {
	return month;
}

int Date::getDay() const {
	return day;
}
