/*
 * Matrix.cpp
 *
 *  Created on: Mar 29, 2020
 *      Author: aqeel
 */

#include "Matrix.h"
#include<iostream>
using namespace std;

Matrix::Matrix(int r,int c) {

row=r;
col=c;
p=new int*[row];
for(int i=0;i<row;i++)
{
p[i]=new int[col];

}
for(int j=0;j<row;j++)
{
	for(int k=0;k<col;k++){
		p[j][k]=NULL;
	}
}
}



Matrix::Matrix(const Matrix &other) {
	row=other.row;
	col=other.col;
	p=new int*[row];
	for(int i=0;i<row;i++)
	{
	p[i]=new int[col];

	}
	for(int j=0;j<row;j++)
	{
		for(int k=0;k<col;k++){
			p[j][k]=other.p[j][k];
		}
	}
}
void Matrix::setrows(int r)
{

row=r;
}
	int Matrix::getrows() const
	{
	return row;

	}
	void Matrix::setcolums(int c)
	{
		col=c;
	}
		int Matrix::getcolums() const
		{
			return col;
		}
		void Matrix::setp(int v,int i, int j)
		{
		this->p[i][j]=v;
		}
						int Matrix::getp(int i,int j) const
						{
							return this->p[i][j];
						}
	//Matrix(const Matrix &other);
	Matrix& Matrix::operator ++()
		{
		for(int j=0;j<row;j++)
			{
				for(int k=0;k<col;k++){
					this->p[j][k]=this->p[j][k]+1;
				}
			}
		return *this;
		}
	Matrix Matrix::operator ++(int ignore)
		{Matrix flag=*this;
		for(int j=0;j<row;j++)
					{
						for(int k=0;k<col;k++){
							this->p[j][k]=this->p[j][k]+1;
						}
					}
				return flag;
		}
	bool Matrix::operator()(int& i,int& j)
	{int v;
	cout<<"enter value which you want to set"<<endl;
	cin>>v;
		this->p[i][j]=v;
		return 1;
	}
	//	bool Matrix::operator()(int& i,int& j)const
	//	{
	//		*this(i,j);
	//		return 1;
	//	}

//	void Matrix::Display()
//	{
//		for(int j=0;j<row;j++)
//												{
//													for(int k=0;k<col;k++){
//														cout<<this->getp(j,k)<<" ";
//													}
//													cout<<endl;
//												}
//	}
	Matrix Matrix::operator+(const Matrix& c3)
	{Matrix c4(row,col);
		int h=0;
			for(int k=0;k<row;k++)
				{	for( h=0;h<col;h++)
					{
					c4.p[k][h]=this->p[k][h]+c3.p[k][h];
					}
				}
			return c4;
	}
	Matrix Matrix::operator-(const Matrix& c3)
	{Matrix c4(row,col);
	int h=0;
		for(int k=0;k<row;k++)
			{	for( h=0;h<col;h++)
				{
				c4.p[k][h]=this->p[k][h]-c3.p[k][h];
				}
			}
		return c4;

	}
	Matrix Matrix::operator*(const Matrix& c3)
	{Matrix m3(row,col);
		float s=0;
			for(int k=0;k<row;k++)
				{
				for(int i=0;i<col;i++)
					{	for(int j=0;j<row;j++)
							{	s=s+this->p[k][j]*c3.p[j][i];
							}
						m3.p[k][i]=s;
						s=0;
					}
				}
				return m3;
	}
	Matrix& Matrix::operator=(const Matrix& c3)
	{
		for(int k=0;k<row;k++)
				{for(int h=0;h<col;h++)
					{
					this->p[k][h]=c3.p[k][h];
					}
				}
		return *this;
	}
	bool Matrix::operator==(const Matrix& c3)
		{
		for(int k=0;k<row;k++)
						{for(int h=0;h<col;h++)
							{
							if(this->p[k][h]==c3.p[k][h])
							{}
							else
								return 0;
							}
						}
				return 1;
		}
	void Matrix::operator+=(const Matrix& c3)
		{
		int h=0;
					for(int k=0;k<row;k++)
						{	for( h=0;h<col;h++)
							{
							this->p[k][h]=this->p[k][h]+c3.p[k][h];
							}
						}

		}
	void Matrix::operator-=(const Matrix& c3)
		{
		int h=0;
					for(int k=0;k<row;k++)
						{	for( h=0;h<col;h++)
							{
							this->p[k][h]=this->p[k][h]-c3.p[k][h];
							}
						}}
ostream& operator<<(ostream& out,const Matrix& c3)
{
	for(int j=0;j<c3.getrows();j++)
													{
														for(int k=0;k<c3.getcolums();k++){
															cout<<c3.getp(j,k)<<" ";
														}
														cout<<endl;
													}
	return out;

		}
istream& operator>>(istream& in,Matrix& c3)
{int v;
	for(int j=0;j<c3.getrows();j++)
													{
													for(int k=0;k<c3.getcolums();k++){
															cout<<"enter value which you want to set for Matrix 1 at["<<j<<"]["<<k<<"]"<<endl;
																														cin>>v;
																									c3.setp(v,j,k);
														}
														cout<<endl;
													}
	return in;

		}
//	bool Matrix::operator()(int& i,int& j)const
//	{
//		*this(i,j);
//		return 1;
//	}














