/*
 * Complex.h
 *
 *  Created on: Mar 24, 2020
 *      Author: aqeel
 */

#ifndef COMPLEX_H_
#define COMPLEX_H_

class Complex {
	double real,img;
public:
	Complex()
{
	real=0;
	img=0;

}
	//Complex(double r,double i);
	~Complex();
	Complex(const Complex &other);

	Complex(double,double);

		void setReal(double r);
		double getReal()const;

		void setImaginary(double i);
		double getImaginary() const;

		bool operator!()const;

};

#endif /* COMPLEX_H_ */
