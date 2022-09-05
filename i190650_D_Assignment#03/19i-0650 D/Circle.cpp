#include<iostream>
#include<cstring>
#include"Circle.h"
#include<math.h>
using namespace std;
Circle::Circle()
{
x=0;
y=0;
radius=0;

}
Circle::Circle(int a, int b):x(a),y(b)
{
}
Circle::Circle(int a, int b, int r):x(a),y(b),radius(r)
{
if(radius<0)
{cout<<"invailed radius"<<endl;
radius=0;}
}
void Circle::set_x(int a)
{
x=a;
}

void Circle::set_y(int b)
{
y=b;
}
//void Circle::set_radius(int r)
//{
//radius=r;
//}
int Circle::get_x( )
{
return x;
}
int Circle::get_y( )
{
return y;
}
int Circle::get_radius( )
{
return radius;
}
Circle::~Circle(){}

bool Circle::setCenter(int a,int b)
{

x=a;
y=b;
return 1;
}

bool Circle::set_radius(int r)
{
if(r<0)
{cout<<"you enter wrong input.please enter again"<<endl;
return 0;}
else
{radius=r;
return 1;}
}
double Circle::getArea(int r)
{double area;
area=PI*r*r;
return area;
}
int Circle::returnLargestCircle(Circle *c,int index)
{int l=0,in;
	for(int i=0;i<index;i++)
	{
		if(l<c[i].radius)
		{
		l=c[i].radius;
		in=i;
		}
	}
return in;
}

bool Circle::overlapping(int r1,int r2,int index,Circle *c)
{int x1,x2,y1,y2,d1,d2;
for(int i=0;i<index;i++)
	{
		if(r1==c[i].radius)
		{x1=c[i].x;
		 y1=c[i].y;


			}
		if(r2==c[i].radius)
		{x2=c[i].x;
		 y2=c[i].y;


			}
}
d1=r1+r2;
d2=sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
if(d1>d2)
{return 1;}
else 
return 0;


}
int* Circle::overlappingCircles(int &index,Circle *c)
{bool v5;
int l,h=0;static int arr[100];
l=returnLargestCircle(c,index);
for(int i=0;i<index;i++)
{
v5=overlapping(c[l].radius,c[i].radius,index,c);
	if(v5==1)
	{
	if(c[l].radius==c[i].radius)
	{h--;}
	else
	arr[h]=i;
	h++;

	}


}
index=h;
return arr;
}





















