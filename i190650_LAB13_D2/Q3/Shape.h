#ifndef SHAPE_H_
#define SHAPE_H_
#include<iostream>
#include<string>
#include<cmath>
#include<cstdlib>
using namespace std;

class Shape
{ public:
virtual int getArea() = 0;
virtual int getPerimeter() = 0;
}; //is a pure virtual function, so we do not need to implement here

#endif /* SHAPE_H_ */
