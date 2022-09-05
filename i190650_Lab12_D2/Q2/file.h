#include<iostream>
#include"Date.h"

using namespace std;

//***************person class******************
class Person
{
protected:
string name;
string address;
public:
Person();

Person(const string&,const string&);
void set_value(const string &n,const string &ad);
void setname( string n);
string getname()const;
void setadress( string n);
string getadress()const;
~Person(){};

};
Person::Person()
{

name="No Person is Present";
address="No address is Present";
//cout<<"*"<<name<<"8"<<endl;


}
Person::Person(const string &n,const string &ad)
{

name=n;
//cout<<"*"<<name<<"8"<<endl;
address=ad;
}

void Person::setname( string n)
{
name=n;
}
string Person::getname()const
{

return name;
}
void Person::setadress( string n)
{
address=n;
}
string Person::getadress()const
{

return address;
}
//*************Employee class**********************
class Employee:public  Person,public virtual  Date
{
protected:
int em_no;
Date hire_d;
public:
Employee();
Employee(const string &n,const string &ad,int num,const Date d);

void setemno(int n);
int getemno()const;
void setdate(int d,int m,int y);
string getdate()const;
~Employee(){};
};

Employee::Employee():Person(),Date()
{
em_no=0;


}
Employee::Employee(const string &n,const string &ad,int num,const Date d):Person(n,ad)//,Date(d.getDay(),d.getMonth(),d.getYear())
{
em_no=num;
setDay(d.getDay());
setMonth(d.getMonth());
setYear(d.getYear());
}

void Employee::setemno(int n)
{
em_no=n;

}
int Employee::getemno()const
{
return em_no;
}

class ProductionWorker:public  Employee
{
protected: 
int shift;
double h_pay;
public:
ProductionWorker();
ProductionWorker(const string &n,const string &ad,int num,const Date d,int s,double h);

void setshift(int n);
int getshift()const;
void setpay(double n);
double getpay()const;
~ProductionWorker(){}

};
ProductionWorker::ProductionWorker():Employee()
{
shift=1;
h_pay=0;
}
ProductionWorker::ProductionWorker(const string &n,const string &ad,int num,const Date d,int s,double h):Employee(n,ad,num,d)
{
shift=s;
h_pay=h;

}

void ProductionWorker::setshift(int n)
{
shift=n;

}
int ProductionWorker::getshift()const
{
return shift;
}
void ProductionWorker::setpay(double n)
{
h_pay=n;
}
double ProductionWorker::getpay()const
{
return h_pay;
}
//******************TeamLeader class *************************

class TeamLeader:public virtual ProductionWorker
{
protected:
int mn_h;
int r_h;
int a_h;
public:
TeamLeader();
TeamLeader(const string &n,const string &ad,int num,const Date d,int s,double h,int m,int r,int a);

void setmn_h(int n);
int getmn_h()const;
void setr_h(int n);
int getr_h()const;
void seta_h(int n);
int geta_h()const;
void print();
int getDay() const;
int getMonth() const;
 int getYear() const;
double calculatesalary(Date d);
~TeamLeader(){}


};
TeamLeader::TeamLeader():ProductionWorker()
{
mn_h=0;
r_h=0;
a_h=0;

}
TeamLeader::TeamLeader(const string &n,const string &ad,int num,const Date d,int s,double h,int m,int r,int a):ProductionWorker(n,ad,num,d,s,h)
{
mn_h=m;
r_h=r;
a_h=a;



}

void TeamLeader::setmn_h(int n)
{
mn_h=n;
}
int TeamLeader::getmn_h()const
{
return mn_h;
}
void TeamLeader::setr_h(int n)
{
r_h=n;
}
int TeamLeader::getr_h()const
{
return r_h;
}
void TeamLeader::seta_h(int n)
{
a_h=n;
}
int TeamLeader::geta_h()const
{
return a_h;
}

int TeamLeader::getDay() const
{
return day;
}
int TeamLeader::getMonth() const
{
return month;
}
 int TeamLeader::getYear() const
{
return year;
}
double TeamLeader::calculatesalary(Date d)
{int a=0,b=0,c=0,t=0,f1,f2,f3;
double p=0;
cout<<"h"<<this->getYear()<<endl;
while(d.getYear()>getYear())
{f1=d.getYear();
f1--;
d.setYear(f1);
a++;
}
a=a*365;
while(d.getMonth()>getMonth())
{f2=d.getMonth();
f2--;
d.setMonth(f2);
b++;
}
b=b*30;
while(d.getDay()>getDay())
{f3=d.getDay();
f3--;
d.setDay(f3);
c++;
}
a=a*getr_h();
b=b*getr_h();
c=c*getr_h();
t=a+b+c;
int bo;
if(geta_h()>=getr_h())
 bo=geta_h()-getr_h();
else
bo=0;
bo=bo*getpay();
p=t*getpay()+bo+getmn_h();
return p;
}
void TeamLeader::print()
{
cout<<"\nName of leader is: "<<name<<endl;
cout<<"\nAddress of leader is: "<<address<<endl;
cout<<"\nEmployee Number of leader is: "<<em_no<<endl;
cout<<"\nDate of Hiring of leader is: "<<getDate()<<endl;
if(shift==1)                                             //conditions for shift.
cout<<"\nShift of leader is: Day"<<endl;
else if(shift==2)
cout<<"\nShift of leader is: Night"<<endl;
else
cout<<"\nshift is invalid "<<endl;
cout<<"\nHourly Pay  of leader is: "<<h_pay<<endl;
cout<<"\nMonthly bounns of leader is: "<<mn_h<<endl;
cout<<"\nRequired of leader is: "<<r_h<<endl;
cout<<"\nAttended of leader is: "<<a_h<<endl;
cout<<"\n\nDo you want to Calculate Salary of Leader(y/n)"<<endl;
int g1,g2,g3;
char g4;
cin>>g4;
if(g4=='y'||g4=='Y')
{
cout<<"enter currect year"<<endl;
cin>>g1;
while(getYear()>g1)
{
cout<<"invalid"<<endl;
cin>>g1;
}
cout<<"enter currect Month"<<endl;
cin>>g2;
while(0>g2||g2>12)
{
cout<<"invalid"<<endl;
cin>>g2;
}
cout<<"enter currect Day"<<endl;
cin>>g3;
while(0>g3||g3>30)
{
cout<<"invalid"<<endl;
cin>>g3;
}

}
Date d2(g3,g2,g1);
cout<<"\n Total Salary of Leader is: "<<calculatesalary(d2)<<endl;
}














