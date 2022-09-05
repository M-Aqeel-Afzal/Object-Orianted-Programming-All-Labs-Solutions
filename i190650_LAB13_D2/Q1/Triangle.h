/*
 * Triangle.h
 *
 *  Created on: Apr 25, 2019
 *      Author: hassan
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_
#include"Rectangle.h"
class Triangle:public Shape
{
private:
float base;
float height;

public:
	Triangle()
{
type="Nothing";
base=0;
height=0;
}
	Triangle(string t, float b, float h):Shape(t)
{
//type=t;
base=b;
height=h;
}
	float area ()
{
return .5*height*base;
}
	void Display()
{
cout<<"shape is: "<<type<<endl;
cout<<"base is: "<<base<<endl;
cout<<"shape is: "<<height<<endl;

}
	float getBase() const 
{
return base;
}
	float getHeight() const
{
return height;
}
void setbase(float b)
{
base=b;
}
void setheight(float h)
{
height=h;
}
};

#endif /* TRIANGLE_H_ */

















