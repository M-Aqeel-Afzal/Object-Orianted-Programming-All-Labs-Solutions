
#include"Vehicle.h"
#include"Vehicle.cpp"
#include<iostream>
#include<cstring>
using namespace std;

int main()
{int g,flag=0,b=0;
cout<<"enter total number of vahicals"<<endl;
cin>>g;

Vehicle va1[g],v6;
string f;
char *r;
int y;
double v;
string m;
char a;
bool v1,v2=0,v3=0,v4;
in:
cout<<"Choose any of the option from the given list:"<<endl<<endl<<endl;
cout<<"1: add new car.\n2:find age of  a car.\n3:get all vahicals details.\n4:get vahical details at certain index.\n5:matching of a vahical.\n6: list of vahicals having same make.\n7: list of vahicals having same current market value.\n8: list of vahicals having same year of manufacturing.\n9:Delete the informatoin of a vahical which is sold.\n0: exit the manu."<<endl;
cin>>a;
switch(a){
case '1':
if(flag==(g))
cout<<"             ***************capacity is full***********"<<endl;
else
{cout<<"enter regertration number of vahical."<<endl;
cin>>r;
cout<<"enter year of manufacturing:"<<endl;
cin>>y;
while(y<0)
{
cout<<"*******wrong entry please enter again*******"<<endl;
cin>>y;
}
cout<<"enter make of tne vahical:"<<endl;
cin>>m;
cout<<"enter the crurant market value of the vahical."<<endl;
cin>>v;
while(v<0)
{
cout<<"*******wrong entry please enter again*******"<<endl;
cin>>v;
}
v1= va1[flag].addVehicle(r,m,y,v);
if(v1)
{cout<<"          **************new vahical is added*******"<<endl;
flag++;
}
else
cout<<"**********new vahical is not added(you may give some wrong information)**********"<<endl;

}
goto in;

break;
case '2':
if(flag==0)
cout<<"                                   *********** there is no vahical present*********"<<endl;
else
{int lyear,s;
s=0;
cout<<"enter regestration number of vahical:"<<endl;
cin>>f;
cout<<"enter last year"<<endl;
cin>>lyear;
for(int i=0;i<flag;i++)
{
if(f==va1[i].getreg_number())
s=va1[i].ageOfVehicle( va1,i,lyear);

}
cout<<"age of vahical is:"<<s<<endl;
goto in;
break;}
case '3':
v6.getVehicleDetails(va1,flag);
cout<<"\n\n\n";
goto in;
case '4':
cout<<"enter index number of vahical:"<<endl;
cin>>b;
if(b>=flag)
cout<<"*************wrong index**************"<<endl;
else
{
v2=va1[0].getVehicleDetailsAtIndex( va1,b,flag);


if(v2==0)
cout<<"************there is no any vahical of this regestration number***********"<<endl;}
goto in;
case '5':
cout<<"enter regestration number of vahical:"<<endl;
cin>>r;

v1=va1[0].isMatching(va1,r,flag);
if(v1==0)
cout<<"***********it is not matched any of the vahicals**********"<<endl;

goto in;
break;
case '6':
cout<<"enter required make of vahical"<<endl;
cin>>m;

Vehicle* arr;

arr=va1[0].returnByMake(va1, m,flag);
cout<<"vahicals having same make:"<<endl;
for(int i=0;i<flag;i++)
{
cout<<"regestration number is"<<arr[i].getreg_number()<<"   make "<<arr[i].getmake()<<endl;

}
goto in;
case '7':
cout<<"enter required value of vahical"<<endl;
cin>>v;
Vehicle* arr3;

 arr3=va1[2].returnByValue(va1, v,flag);
cout<<"vahicals having same value:"<<endl;
for(int i=0;i<flag;i++)
{
cout<<"regestration number is"<<arr3[i].getreg_number()<<"   value "<<arr3[i].getvalue()<<endl;

}
goto in;
case '8':
cout<<"enter required year of vahical"<<endl;
cin>>y;
Vehicle* arr2;

arr2=v6.returnByYear(va1, y,flag);
cout<<"vahicals having same value:"<<endl;
for(int i=0;i<flag;i++)
{
cout<<endl<<"regestration number is"<<arr2[i].getreg_number()<<"   value "<<arr2[i].getyear()<<endl;

}

goto in;
case '9':
cout<<"enter required regestration number of vahical which information you want to delete."<<endl;
cin>>f;
for(int i=0;i<flag;i++)
{
if(f==va1[i].getreg_number())
v4=va1[i].vehicleSold(va1,f,flag);

}
if(v4)
cout<<"***************information is deleted.***************"<<endl;
else
cout<<"************required vahical is not exsit***************"<<endl;
goto in;
case '0':
break;
default:
cout<<"*************you enter wrong choice.***********"<<endl;}
return 0;
}
























