#include"Circle.h"
#include"Circle.cpp"
#include<iostream>
#include<cstring>
using namespace std;
int main()
{int g,x,y,r,r1,r2;double area;
bool v1,v2,v3;
char a;
cout<<"enter how many circles you want."<<endl;
cin>>g;
int k=g;
Circle crcl[g];
for(int i=0;i<g;i++)
{
cout<<"enter x coordinate of circle "<<i+1<<endl;
cin>>x;
cout<<"enter y coordinate of circle "<<i+1<<endl;
cin>>y;
crcl[i].setCenter(x,y);
cout<<"enter radius coordinate of circle "<<i+1<<endl;
cin>>r;
v1=crcl[i].set_radius( r);
while(v1==0)
{
cin>>r;
v1=crcl[i].set_radius( r);
}

}
in:
cout<<endl<<"choose any option from these"<<endl<<endl;
cout<<"1:get area of a circle\n2:find largest circle from arrray.\n3:find that two circles are overlapping or not.\n4:find array of circles overlapping the largest circle.\n5:exit the manu."<<endl;
cin>>a;
switch(a)
{case '1':
cout<<"enter the radius of the circle."<<endl;
cin>>r;
for(int i=0;i<g;i++)
{if(r==crcl[i].get_radius())
	{
	area=crcl[i].getArea(r);
	cout<<"radius is: "<<r<<"    coordinates of center are:  ("<<crcl[i].get_x()<<","<<crcl[i].get_y()<<")    area is: "<<area<<endl;

goto in;
	}
if(i==g-1)
{cout<<"there is no any circle having this radius"<<endl;
goto in;}
}
case '2':
x=crcl[0].returnLargestCircle( crcl,g);
cout<<endl<<"radius of largest circle is"<<crcl[x].get_radius()<<"    coordinates of largest center are ("<<crcl[x].get_x()<<","<<crcl[x].get_y()<<")"<<endl<<endl;
goto in;
case '3':
cout<<"enter the radius of the 1st circle ."<<endl;
cin>>r1;
cout<<"enter the radius of the 2nd circle ."<<endl;
cin>>r2;
v2=crcl[0].overlapping(r1,r2,g,crcl);
if(v2)
cout<<"***********yes these Circles are overlapping**********"<<endl;
else
cout<<"***********No these Circles are not overlapping**********"<<endl;
goto in;
case '4':
int *array;
array=crcl[0].overlappingCircles(k,crcl);
cout<<"************overlapping ciecles *************"<<endl;
for(int i=0;i<k;i++)
{cout<<"radius : "<<crcl[array[i]].get_radius()<<"    coordinates of center are ("<<crcl[array[i]].get_x()<<","<<crcl[array[i]].get_y()<<")"<<endl;}
goto in;
case '5':
break;
default:
cout<<"you entered wrong."<<endl;
goto in;
}
return 0;
}



























