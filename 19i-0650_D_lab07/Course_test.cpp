/*
 * Course_test.cpp
 *
 *  Created on: Mar 7, 2020
 *      Author: aqeel
 */

#include "Course.cpp"
#include "Semester.cpp"
#include<string.h>
#include <iostream>
using namespace std;

int main()
{int a,b;
char c1;
char*s4=new char[20];
char*s5=new char[20];
string s2,s3;
int n,t_c;
bool b1;
cout<<"how many course you want to registor:"<<endl;
cin>>n;
Course c[n];
Semester s1;
cout<<"enter semester code:"<<endl;
cin>>s3;
s1.setsemestercode(s3);
for(int i=0;i<n;i++)
{

cout<<"enter course code for course "<<i+1<<endl;
cin>>s4;
c[i].setcode(s4);
cout<<"enter course title for course "<<i+1<<endl;
cin>>s3;
c[i].settitle(s3);

cout<<"enter cradit hours for course "<<i+1<<endl;
cin>>a;
c[i].sethours(a);

cout<<"enter section for course "<<i+1<<endl;
cin>>c1;
c[i].setsec(c1);
cout<<"enter number of repeat courses for course "<<i+1<<endl;
cin>>b;
c[i].setcount(b);

s1.setc_arr(c[i], i);	
}
cout<<"totall number of cradit hours in this semester:\n\n\n"<<endl;
t_c=GetCreditHoursCount( s1, n);
cout<<"total cradit hours are "<<t_c<<endl;
cout<<"\n\n\nfor checking that course is registor in this semester or not enter course code"<<endl;
cin>>s5;
b1=FindCourseInSemesterRegistration(s1,s5, n);
if(b1)
cout<<"Yes course is registered"<<endl;
else
cout<<"No course is not registered"<<endl;


	return 0;
}
