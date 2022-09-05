#ifndef SQUARE_H_
#define SQUARE_H_
#include"Shape.h"
class Square: public Shape
{
private:
	int Side;
	
public:
	Square()
{

Side=0;
}
	Square( int s)
{

Side=s;

}
	int getArea()
{
return Side*Side;
}
	int getPerimeter()

{
return 4*Side;

}
	int getSide() const
{
return Side;
}

};

#endif /* RECTANGLE_H_ */
