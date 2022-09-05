/*
 * Complex.cpp
 *
 *  Created on: Mar 24, 2020
 *      Author: aqeel
 */

#include "Complex.h"

Complex::Complex(double r,double i) {
real=r;
img=i;

}

Complex::~Complex() {

}

Complex::Complex(const Complex &other) {
real=other.real;
img=other.img;

}

void Complex::setReal(double r)
{
	real=r;
}
		double Complex::getReal()const
		{
			return real;
		}

		void Complex::setImaginary(double i)
		{
			img=i;
		}
		double Complex::getImaginary() const
		{
			return img;
		}

		bool Complex::operator!()const
		{
			if(real==0&&img==0)
			{
			return 1;
			}
			else
				return 0;
			}


