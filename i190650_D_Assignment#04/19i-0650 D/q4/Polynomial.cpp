/*
 * Polynomial.cpp
 *
 *  Created on: Mar 30, 2020
 *      Author: aqeel
 */

#include "Polynomial.h"
#include<iostream>
using namespace std;
Polynomial::Polynomial() {
	dgri=0;
	c_arr= new int;
	c_arr[dgri]=0;

}
Polynomial::Polynomial(int d) {
	dgri=d;
dgri++;
	c_arr= new int;


}

Polynomial::~Polynomial() {
delete []c_arr;
}
int Polynomial::getdgri()const
{
	return dgri;
}
	void Polynomial::setdgri(int d)
	{
		dgri=d;
	}
	int Polynomial::getarr(int i)const
	{
		return c_arr[i];
	}
	void Polynomial::setarr(int i,int v)
	{
		c_arr[i]=v;
	}
Polynomial::Polynomial(const Polynomial &other) {
dgri=other.dgri;
c_arr= new int;
for(int i=0;i<=dgri;i++)
{
	c_arr[i]=other.c_arr[i];
}

}
Polynomial Polynomial::operator=(const Polynomial &p1)
{Polynomial p3(p1.dgri-1);

for(int i=0;i<=dgri;i++)
{
	p3.c_arr[i]=p1.c_arr[i];
}
return p3;
}
	bool Polynomial::operator==(const Polynomial &p1)
		{if(dgri==p1.dgri)
		{
		for(int i=0;i<dgri;i++)
		{
			if(c_arr[i]==p1.c_arr[i])
			{
				if(i+1==dgri)
				return true;
			}
		}}
		return false;
		}
	Polynomial Polynomial::operator+(const Polynomial &p1)
	{
		Polynomial p2(dgri-1);
		for(int i=0;i<dgri;i++)
		{
			p2.c_arr[i]=c_arr[i]+p1.c_arr[i];
		}
		return p2;
	}
	Polynomial Polynomial::operator-(const Polynomial &p1)
	{Polynomial p2(dgri-1);
		for(int i=0;i<dgri;i++)
				{
					p2.c_arr[i]=c_arr[i]-p1.c_arr[i];
				}
				return p2;
	}
	void Polynomial::operator+=(const Polynomial &p1)
		{
		for(int i=0;i<dgri;i++)
						{
							c_arr[i]=c_arr[i]+p1.c_arr[i];
						}

		}
	void Polynomial::operator-=(const Polynomial &p1)
		{
		for(int i=0;i<dgri;i++)
						{
							c_arr[i]=c_arr[i]-p1.c_arr[i];
						}

		}

ostream& operator<<(ostream& out,const Polynomial& p2 )
{int p=p2.getdgri();
int p3=p2.getdgri();
p--;
p3--;
	for(int i=0;i<p2.getdgri();i++)
	{
		if(p>1)
out<<p2.getarr(i)<<"x"<<p;
		if(p==1)
					{out<<p2.getarr(i)<<"x";
		}
		if(p==0)
			{out<<p2.getarr(i);
}
if(p2.getarr(i+1)<0)
	out<<"";
if(p>0&&p2.getarr(i+1)>=0)
	out<<"+";
p--;
	}
	cout<<endl;
	return out;
}

istream& operator>>(istream& in,Polynomial& p2 )
{if(p2.getdgri()==0)
{
	cout<<"degree is zero"<<endl;
	return in;
}
	for(int i=0;i<p2.getdgri();i++)
		{cout<<"enter value of coffecient: "<<i+1<<endl;
		int v;
		in>>v;
		p2.setarr(i,v);
		}
	return in;
}











