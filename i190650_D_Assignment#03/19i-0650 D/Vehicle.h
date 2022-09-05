#ifndef VEHICLE_H
#define VEHICLE_H
#include<cstring>
#include<iostream>
using namespace std;
class Vehicle
{
private:
 char *reg_number;
string make;
int year_manufacturing;
double current_value;
void intia_reg(char *a)//for intializing of reg_number.
{
reg_number=new char(strlen(a)+1);
strcpy(reg_number,a);
}
public:
Vehicle();
Vehicle(char *str)
{

intia_reg(str);
}
Vehicle(char *str,string m,int y,double v);
Vehicle(double v);

Vehicle(const Vehicle &c);
void setreg_number(char *str );
void set_make(string m);
void set_year(int y);
void set_value(double v);
char* getreg_number();
string getmake();
int getyear();
double getvalue();

bool addVehicle(char *str,string m,int y,double cv);
int ageOfVehicle(Vehicle *v,int index,int last_y);//returns age of vehicle on the basis of year passed
void getVehicleDetails(Vehicle *v,int size);//return detail of vehicle
bool getVehicleDetailsAtIndex(Vehicle *v,int index,int f);//return detail of vehicle stored at certain index
bool isMatching(Vehicle *v,char *reg,int size);//returns true if passed vehicle matches with it
Vehicle* returnByMake(Vehicle *v,string m,int index);//returns the array of vehicles of specific make
Vehicle* returnByValue(Vehicle *v,double val,int index);//returns the array of vehicles of specific value
Vehicle* returnByYear(Vehicle *v,int y,int index);//returns the array of vehicles of specific year
bool vehicleSold(Vehicle *v,string s,int flag);//deletes the specific vehicle once its sold
~Vehicle();

















};
#endif
