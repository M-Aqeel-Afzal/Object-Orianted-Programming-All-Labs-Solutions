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
	int lenght;
	int width;
public:
	Rectangle()
{

lenght=0;
width=0;
}
	Rectangle( int l, int w)
{

lenght=l;
width=w;

}
	int getArea()
{
return lenght*width;
}
	int getPerimeter()

{
return 2*(lenght+width);

}
	int getlenght() const
{
return lenght;
}
	int getWidth() const
{
return width;
}

};

#endif /* RECTANGLE_H_ */

