/*
 * Circle.h
 *
 *  Created on: Apr 25, 2019
 *      Author: hassan
 */

//#ifndef CIRCLE_H_
//#define CIRCLE_H_
#include"Triangle.h"
class Circle:public Shape
{
private:
	int radius;

public:
Circle()
{
type="Nothing";
radius=0;

}
Circle(string t, int r):Shape(t)
{
//type=t;
radius=r;
}
float area ()
{
return 3.14*radius*radius;
}
void Display()
{
Shape::Display();
cout<<"radius is: "<<radius<<endl;
}

int getRadius() const 
{
return radius;
}
void setradius(int r)
{
radius=r;
}





};

//#endif /* CIRCLE_H_ */

