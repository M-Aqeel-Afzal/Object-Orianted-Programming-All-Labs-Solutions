/*
 * Rectangle.h
 *
 *  Created on: Apr 25, 2019
 *      Author: hassan
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_
#include"Shape.h"
class Rectangle: public Shape
{
private:
	int height;
	int width;
public:
	Rectangle()
{
type="\0";
height=0;
width=0;
}
	Rectangle(string t, int h, int w):Shape(t)
{
//type=t;
height=h;
width=w;

}
	float area ()
{
return height*width;
}
	void Display()
{
//Shape::Display();
cout<<"type  is: "<<type<<endl;
cout<<"height is: "<<height<<endl;
cout<<"width is: "<<width<<endl;
}
	int getHeight() const
{
return height;
}
	int getWidth() const
{
return width;
}

};

#endif /* RECTANGLE_H_ */

