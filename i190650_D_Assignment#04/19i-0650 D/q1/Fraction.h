/*
 * Fraction.h
 *
 *  Created on: Mar 27, 2020
 *      Author: aqeel
 */

#ifndef FRACTION_H_
#define FRACTION_H_
#include<iostream>
using namespace std;
class Fraction {
	 double numerator;
	 double denumerator;
public:
	Fraction()
{
	numerator=0;
	denumerator=1;
}
	Fraction(int n)
	{
		numerator=n;
			denumerator=1;
	}
	Fraction(int n,int d)
	{

		for(int i=2;i<=n;i++)
	{
		if(n%i==0)
			if(d%i==0)
			{
				n=n/i;
				d=d/i;
				i=2;
			}
	}
		numerator=n;
			denumerator=d;


	for(int i=2;i<=d;i++)
{
	if(n%i==0)
		if(d%i==0)
		{
			n=n/i;
			d=d/i;
			i=2;
		}
}
	numerator=n;
		denumerator=d;
}

	~Fraction()
	{

	}
	Fraction(const Fraction &other);
	double getnumerator() const;
	double getdenumerator() const;
	void display() const;
	void setnumerator(int a) ;
		void setdenumerator(int a);
	Fraction operator+(const Fraction &f);
	Fraction operator-(const Fraction &f);
	Fraction operator*(const Fraction &f);
	Fraction operator/(const Fraction &f);
	Fraction& operator+=(const Fraction &f);
		Fraction& operator-=(const Fraction &f);
		Fraction& operator*=(const Fraction &f);
		Fraction& operator/=(const Fraction &f);
		bool operator==(const Fraction &f);
		bool operator!=(const Fraction &f);
		bool operator<(const Fraction &f);
		bool operator>(const Fraction &f);
		bool operator<=(const Fraction &f);
		bool operator>=(const Fraction &f);
		Fraction& operator++();//pre-increment.
		Fraction& operator--();//pre-decrement.
		Fraction operator++(int ignore);//post-increment.
		Fraction operator--(int ignore);//post-decrement.
		double operator[](char i);//post-decrement.
		double operator[](char i)const;//post-decrement.


};

#endif /* FRACTION_H_ */
