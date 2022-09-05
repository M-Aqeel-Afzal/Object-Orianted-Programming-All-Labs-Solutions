/*
 * Matrix.cpp
 *
 *  Created on: Mar 24, 2020
 *      Author: aqeel
 */

#include "Matrix.h"

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
	Matrix Matrix::operator ++(int ignoreMe)
		{Matrix flag=*this;
		for(int j=0;j<row;j++)
					{
						for(int k=0;k<col;k++){
							this->p[j][k]=this->p[j][k]+1;
						}
					}
				return flag;
		}
	Matrix& Matrix::operator --()
		{
		{
				for(int j=0;j<row;j++)
					{
						for(int k=0;k<col;k++){
							this->p[j][k]=this->p[j][k]-1;
						}
					}
				return *this;
				}
		}
	Matrix Matrix::operator --(int ignoreMe)
		{
		{Matrix flag=*this;
				for(int j=0;j<row;j++)
							{
								for(int k=0;k<col;k++){
									this->p[j][k]=this->p[j][k]-1;
								}
							}
						return flag;
				}
		}

