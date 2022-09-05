/*
 * Matrix.cpp
 *
 *  Created on: Mar 11, 2020
 *      Author: aqeel
 */

#include "Matrix.h"
#include<iostream>
using namespace std;
void Matrix::setrow(int i)
{
	this->row=i;
}
	void Matrix::setcolumn(int i)
	{
		this->column=i;
	}
	void Matrix::setvalue()
	{int v,k;
		for(int j=0;j<row;j++)
			{
				for(k=0;k<column;k++)
					{
					cin>>v;
			this->p1[j][k]=v;
			}
				k=0;
			}

	}
	int Matrix::getvalue(int i,int j)
	{
		return this->p1[i][j];
	}
Matrix& Matrix::operator=(const Matrix &m1)
{
for(int i=0;i<row;i++)
{
	for(int j=0;j<column;j++)
	{
	this->p1[i][j]=m1.p1[i][j];

	}
}
return *this;
}
	bool Matrix::operator==(const Matrix &m1)
		{
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<column;)
			{
			if(this->p1[i][j]==m1.p1[i][j])
			{
				j++;
			}
			else
				return 0;
			}
		}
		return 1;

		}
	Matrix Matrix::operator+(int x)
	{
Matrix p2;
for(int i=0;i<row;i++)
{
	for(int j=0;j<column;j++)
	{
	p2.p1[i][j]=this->p1[i][j]+x;

	}
}
return p2;
	}
	Matrix Matrix::operator+(const Matrix &m1)
	{Matrix p2;
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<column;j++)
			{
			p2.p1[i][j]=this->p1[i][j]+m1.p1[i][j];

			}
		}
		return p2;
	}
	Matrix Matrix::operator-(int x)
	{Matrix p2;
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<column;j++)
			{
			p2.p1[i][j]=this->p1[i][j]-x;

			}
		}
		return p2;
	}
		Matrix Matrix::operator-(const Matrix &m1)
		{
			Matrix p2;
					for(int i=0;i<row;i++)
					{
						for(int j=0;j<column;j++)
						{
						p2.p1[i][j]=this->p1[i][j]+m1.p1[i][j];

						}
					}
					return p2;

		}

		void Matrix::display()
		{
			for(int i=0;i<row;i++)
								{
									for(int j=0;j<column;j++)
									{
									cout<<this->p1[i][j]<<" ";

									}
									cout<<endl;
								}

		}









