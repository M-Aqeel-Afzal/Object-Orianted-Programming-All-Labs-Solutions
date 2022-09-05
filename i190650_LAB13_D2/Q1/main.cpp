#include "Shape.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"
int main()
{
cout<<"************implementtation for Circle**************"<<endl;
Circle c1;//by default
c1.Display();
cout<<"Area of Cricle is: "<<c1.area()<<endl;


//by peramitrized
Circle c2("Circle",12);
c2.Display();
cout<<"Area of Cricle is: "<<c2.area()<<endl;





cout<<"\n\n\n************implementtation for Triangle**************"<<endl;
Triangle t1;//by default
t1.Display();
cout<<"Area of triangle is: "<<t1.area()<<endl;


//by peramitrized
Triangle t2("triangle",12,12);
t2.Display();
cout<<"Area of triangle is: "<<t2.area()<<endl;



cout<<"\n\n\n************implementtation for Rectangle**************"<<endl;
Rectangle r1;//by default
r1.Display();
cout<<"Area of Reactagle is: "<<r1.area()<<endl;


//by peramitrized
Rectangle r2("Rectangle",6,6);
r2.Display();
cout<<"Area of Ractangle is: "<<r2.area()<<endl;

return 0;

}
