/*
 * Shape.h
 *
 *  Created on: Apr 25, 2019
 *      Author: hassan
 */

#ifndef SHAPE_H_
#define SHAPE_H_
#include<iostream>
#include<string>
#include<cmath>
#include<cstdlib>
using namespace std;
class Shape
{
protected:
	string type;
public:
	Shape()
{
type="\0";
}
	Shape(string t)
{
type=t;
}
virtual float area ()=0;
virtual void Display()
{
cout<<"shape is: "<<type<<endl;
}
const string& getType() const
{
return type;
}
virtual ~Shape(){}
void setType(const string& typ){
type=typ;
}
};

#endif /* SHAPE_H_ */
