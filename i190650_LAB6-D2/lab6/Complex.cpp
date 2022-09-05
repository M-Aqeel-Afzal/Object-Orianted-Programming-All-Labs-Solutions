
#include<iostream>
//using namespace std;
class Complex
{public:
    double real;
    double imaginary;
public:
Complex()
{
real=0;
 imaginary=0;}
Complex(double r,double i)
{
real=r;
imaginary=i;
}
Complex(const Complex & copy)
{
real=copy.real;

imaginary=copy.imaginary;
}



void setReal(double r)
{
real=r;
}
double getReal() 
{
return real;

}
void setImaginary(double i)
{
imaginary=i;
}
double getImaginary()
{
return imaginary;
}
Complex addComplex( double r)
{Complex d1;
d1.real=real+r;
d1.imaginary=imaginary;
return d1;

}

Complex addComplex( Complex &c1)
{ Complex d2;
d2.real=real+c1.real;
d2.imaginary=imaginary+c1.imaginary;

return d2;
}
Complex subComplex( double r)
{
Complex d1;
d1.real=real-r;
d1.imaginary=imaginary;
return d1;

}
Complex subComplex( Complex &c1)
{
Complex d2;
d2.real=real-c1.real;
d2.imaginary=imaginary-c1.imaginary;

return d2;
}
Complex mulComplex( double r)
{
Complex d1;
d1.real=real*r;
d1.imaginary=imaginary*r;
return d1;

}

Complex mulComplex( Complex &c1)
{
Complex d2;
d2.real=real*c1.real-imaginary*c1.imaginary;
d2.imaginary=real*c1.imaginary+c1.real*imaginary;

return d2;

}

};













