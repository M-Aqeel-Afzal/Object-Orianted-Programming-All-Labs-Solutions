#include "Shape.h"
#include "Rectangle.h"
#include "Square.h"
int main()
{
cout<<"************implementtation for Square**************"<<endl;
Square c1;//by default
cout<<"Area of Square is: "<<c1.getArea()<<endl;
cout<<"perameter of Square is: "<<c1.getPerimeter()<<endl;


//by peramitrized
Square c2(5);//by default
cout<<"Area of Square is: "<<c2.getArea()<<endl;
cout<<"perameter of Square is: "<<c2.getPerimeter()<<endl;





cout<<"\n\n\n************implementtation for Rectangle**************"<<endl;
Rectangle r1;//by default
cout<<"Area of Reactagle is: "<<r1.getArea()<<endl;
cout<<"perameter of Reactagle is: "<<r1.getPerimeter()<<endl;


//by peramitrized
Rectangle r2(6,6);
cout<<"Area of Reactagle is: "<<r2.getArea()<<endl;
cout<<"perameter of Reactagle is: "<<r2.getPerimeter()<<endl;

return 0;

}


