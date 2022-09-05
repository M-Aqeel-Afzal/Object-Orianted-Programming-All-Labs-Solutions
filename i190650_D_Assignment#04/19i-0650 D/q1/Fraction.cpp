/*
 * Fraction.cpp
 *
 *  Created on: Mar 27, 2020
 *      Author: aqeel
 */

#include "Fraction.h"
#include<iostream>
#include<iomanip>
using namespace std;
Fraction::Fraction(const Fraction &other) {
	numerator=other.numerator;
	denumerator=other.denumerator;

}
void Fraction::setnumerator(int a)
{
	numerator=a;
}
		void Fraction::setdenumerator(int a)
		{
			denumerator=a;
		}
	double Fraction::getnumerator() const
	{
		return numerator;
	}
	double Fraction::getdenumerator() const
	{
		return denumerator;
	}
	void Fraction::display() const
	{double d=numerator/denumerator;
		cout<<"numerator is: "<<numerator<<endl;
		cout<<"Enumerator is: "<<denumerator<<endl;
		cout<<fixed<<showpoint<<setprecision(2)<<"faction is: "<<d<<endl;
	}
	Fraction Fraction::operator+(const Fraction &f)
	{double a,b;
	b=f.denumerator*denumerator;
	a=f.numerator*denumerator+f.denumerator*numerator;
		 Fraction f2(a,b);
		 return f2;
	}

		Fraction Fraction::operator-(const Fraction &f)
		{
			double a,b;
				b=f.denumerator*denumerator;
				a=f.denumerator*numerator-f.numerator*denumerator;
					 Fraction f2(a,b);
					 return f2;
		}
		Fraction Fraction::operator*(const Fraction &f)
		{
			double a,b;
				b=f.denumerator*denumerator;
				a=f.numerator*numerator;
					 Fraction f2(a,b);
					 return f2;
		}
		Fraction Fraction::operator/(const Fraction &f)
		{
			double a,b;
							b=f.numerator*denumerator;
							a=f.denumerator*numerator;
					 Fraction f2(a,b);
					 return f2;
		}
		Fraction& Fraction::operator+=(const Fraction &f)
			{

			this->denumerator=f.denumerator*denumerator;
			this->numerator=f.numerator*denumerator+f.denumerator*numerator;

					 return *this;
			}
		Fraction& Fraction::operator-=(const Fraction &f)
					{
			this->denumerator=f.denumerator*denumerator;
			this->numerator=f.denumerator*numerator-f.numerator*denumerator;

								 return *this;
					}
		Fraction& Fraction::operator*=(const Fraction &f)
					{
			this->denumerator=f.denumerator*denumerator;
			this->numerator=f.numerator*numerator;

							 return *this;
					}
		Fraction& Fraction::operator/=(const Fraction &f)
					{
			this->denumerator=f.numerator*denumerator;
			this->numerator=f.denumerator*numerator;

							 return *this;
					}
		bool Fraction::operator==(const Fraction &f)
		{
			if(this->numerator==f.numerator&&this->denumerator==f.denumerator)
			return 1;
			else
				return 0;
		}
		bool Fraction::operator!=(const Fraction &f)
				{double a,b;

					if(this->numerator==f.numerator&&this->denumerator==f.denumerator)
					return 0;
					else
						return 1;
				}

		bool Fraction::operator<(const Fraction &f)
		{double a,b;
		a=numerator/denumerator;
		b=f.numerator/f.denumerator;

			if(a<b)
								return 1;
								else
									return 0;
		}
				bool Fraction::operator>(const Fraction &f)
				{
					double a,b;
							a=numerator/denumerator;
							b=f.numerator/f.denumerator;

								if(a>b)
										return 1;
										else
											return 0;
				}
				bool Fraction::operator<=(const Fraction &f)
		{
					double a,b;
							a=numerator/denumerator;
							b=f.numerator/f.denumerator;

								if(a<=b)
										return 1;
										else
											return 0;
		}
				bool Fraction::operator>=(const Fraction &f)
		{
					double a,b;
							a=numerator/denumerator;
							b=f.numerator/f.denumerator;

								if(a>=b)
										return 1;
										else
											return 0;
		}

				istream& operator>>(istream& c, Fraction &f)
				{
					int a,b;
					cout<<"enter numerator"<<endl;
					cin>>a;
					cout<<"enter denumerator"<<endl;
					cin>>b;
					f.setnumerator(a);
					f.setdenumerator(b);
					return c;
				}
						ostream& operator<<(ostream& i,const Fraction &f)
						{
							f.display();
							return i;
						}
						Fraction& Fraction::operator++()//preincrement.
		{
			this->numerator=this->numerator+this->denumerator;
			return *this;
		}
								Fraction& Fraction::operator--()//predecrement.
		{
									this->numerator=this->numerator-this->denumerator;
												return *this;
		}
								Fraction Fraction::operator++(int ignore)//postincrement.
		{
			Fraction f=*this;
			this->numerator=this->numerator+this->denumerator;
			return f;
		}
								Fraction Fraction::operator--(int ignore)//postdecrement.
		{
									Fraction f=*this;
												this->numerator=this->numerator-this->denumerator;
												return f;
		}
								double Fraction::operator[](char i)
								{
									if(i=='n'||i=='N')
										return numerator;
												if(i=='d'||i=='D')
												return denumerator;

														return numerator;

								}
										double Fraction::operator[](char i)const
										{
											if(i=='n'||i=='N')
																					return numerator;
																							if(i=='d'||i=='D')
																							return denumerator;

																									return numerator;
										}




