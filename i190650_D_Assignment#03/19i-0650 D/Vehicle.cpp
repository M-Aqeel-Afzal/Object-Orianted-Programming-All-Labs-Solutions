#include<iostream>
#include<cstring>
#include"Vehicle.h"
using namespace std;
Vehicle::Vehicle():reg_number(NULL),year_manufacturing(0),make(""),current_value(0)
{
reg_number=NULL;
year_manufacturing=0;
make="0";
current_value=0;
}
Vehicle::Vehicle(char *str,string m,int y,double cv):reg_number(NULL),make(m)
{
intia_reg(str);
make=m;
year_manufacturing=y;
current_value=cv;

}
Vehicle::Vehicle(double v):current_value(v)
{
current_value=v;

}
 Vehicle::Vehicle(const Vehicle &c)
{
intia_reg(c.reg_number);
make=c.make;
year_manufacturing=c.year_manufacturing;
current_value=c.current_value;

}
void Vehicle::setreg_number(char *str )
{
intia_reg(str);
}
void Vehicle::set_make(string m)
{
make=m;

}
void Vehicle::set_year(int y)
{
year_manufacturing=y;
}
void  Vehicle::set_value(double v)
{
current_value=v;
}
 char* Vehicle::getreg_number()
{
return reg_number;
}

string Vehicle::getmake()
{
return make;
}
int Vehicle::getyear()
{
return year_manufacturing;
}
double Vehicle::getvalue()
{
current_value;
}
Vehicle::~Vehicle()
{}

bool Vehicle::addVehicle(char *str,string m,int y,double cv)
{
Vehicle:: setreg_number(str );
Vehicle:: set_make( m);
if(y>0)
Vehicle:: set_year(y);
else
return 0;
if(cv>=0)
Vehicle::set_value(cv);
else
return 0;
return 1;
}
int Vehicle::ageOfVehicle(Vehicle *v,int index,int last_y)
{int k=0;
k=last_y-(v[index].year_manufacturing);
return k;
}
void Vehicle::getVehicleDetails(Vehicle *v,int size)
{
for(int i=0;i<size;i++)
{
cout<<"regestration number is:"<<v[i].reg_number<<"  make is:"<<v[i].make<<"    year of manufacturing: "<<v[i].year_manufacturing<<"     currant value:"<<v[i].current_value<<endl;
if(v[i].current_value==0)
break;
}
}
bool Vehicle::getVehicleDetailsAtIndex(Vehicle *v,int index,int f)
{if(f==0)
return 0;
cout<<"regestration number is:"<<v[index].reg_number<<"  make is:"<<v[index].make<<"    year of manufacturing: "<<v[index].year_manufacturing<<"     currant value:"<<v[index].current_value<<endl;
return 1;}
bool Vehicle::isMatching(Vehicle *v,char *reg,int size)
{int h=0;
for(int i=0;i<size;i++,h++)
{
if(strlen(v[i].reg_number)==strlen(reg))
{
cout<<"*****yes it is matching with a vahical having make "<<v[i].make<<"  and year of amnufacturing "<<v[i].year_manufacturing<<endl;
return 1;}
else if(h==(size-1))
return 0;
else
return 0;
}

}
Vehicle* Vehicle::returnByMake(Vehicle *v,string m,int index)
{int h=0;
 int const l=index;
static Vehicle v3[5];
for(int i=0;i<index;i++)
{
if(v[i].make==m)
{v3[h].make=v[i].make;
v3[h].reg_number=v[i].reg_number;
v3[h].year_manufacturing=v[i].year_manufacturing;
v3[h].current_value=v[i].current_value;
h++;

}

}
return v3;
}
Vehicle* Vehicle::returnByValue(Vehicle *v,double val,int index)
{int h=0;
static Vehicle v4[5];
for(int i=0;i<index;i++)
{
if(v[i].current_value==val)
{
v4[h].reg_number=v[i].reg_number;
v4[h].year_manufacturing=v[i].year_manufacturing;
v4[h].make=v[i].make;
v4[h].current_value=v[i].current_value;
h++;

}

}
return v4;
}
Vehicle* Vehicle::returnByYear(Vehicle *v,int y,int index)
{int h=0;
static Vehicle v5[100];
for(int i=0;i<index;i++)
{
if(v[i].year_manufacturing==y)
{v5[h].year_manufacturing=v[i].year_manufacturing;
v5[h].current_value=v[i].current_value;
v5[h].reg_number=v[i].reg_number;
v5[h].make=v[i].make;
h++;

}

}
return v5;
}
bool Vehicle::vehicleSold(Vehicle *v,string s,int index)
{
for(int i=0;i<index;i++)
{
if(s==v[i].getreg_number())
{v[i].set_year(0);
v[i].set_value(0);
v[i].setreg_number("(no number)");
v[i].set_make("(no make)");
return true;

}}
return 0;
}













