#ifndef VEHICLE_H
#define VEHICLE_H
#define PI 3.1416
#include<cstring>
#include<iostream>
using namespace std;
class Circle{
private:
int x;
int y;
double radius;
public:
// provide definitions of following functions...
Circle();// default constructor
Circle(int x, int y);
Circle(int x, int y, int radius);
void set_x(int );
void set_y(int );
bool set_radius(int );
int get_x( );
int get_y( );
int get_radius( );
~Circle();

bool setCenter(int a,int b);
double getArea(int r);
int returnLargestCircle(Circle *c,int index);
bool overlapping(int r1,int r2,int index,Circle *c);
int* overlappingCircles(int &index,Circle *c);
};
#endif
