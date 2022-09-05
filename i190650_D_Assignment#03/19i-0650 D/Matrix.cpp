#include<iostream>
#include<cstring>
#include"Matrix.h"
#include<math.h>
using namespace std;
Matrix::Matrix()
{
rows=2;
colums=2;
val=0;
}
Matrix::Matrix(int i, int j)
{

rows=i;
colums=j;


}
// a parametrized constructor
Matrix::Matrix(const Matrix &m)
{
rows=m.rows;
colums=m.colums;
}
// copy constructor

int Matrix::getrows()
{
return rows;
}
int Matrix::getcolums()
{
return colums;
}


bool Matrix::set(int i, int j, float va,Matrix **m)//set value at specified index.
{
if(i>=0&&i<=rows&&j>=0&&j<=colums)
	{m[i][j].val=va;
	return 1;
	}
	else

	return 0;

	}
void Matrix::setval(float v)
	{

	this->val=v;

	}
float  Matrix::getval()
		{

		return this->val;

		}
Matrix::~Matrix()
{}
float Matrix::get(int i, int j,Matrix **m)
	{float v;
	v=m[i][j].val;
	return v;
	}
Matrix** Matrix::assign( Matrix **m,Matrix **m2,int i,int j)//assign value means copy.
{


	for(int k=0;k<i;k++)
		{for(int h=0;h<j;h++)
			{
			m2[k][h].val=m[k][h].val;
			}	
		}
return m2;
}

Matrix** Matrix::add(Matrix **m1, Matrix **m2,Matrix **m3,int i,int j)//addition of two matrixes
{	int h=0;
	for(int k=0;k<i;k++)
		{	for( h=0;h<j;h++)
			{ 
			m3[k][h].val=m1[k][h].val+m2[k][h].val;
			}	
		}
return m3;
}
Matrix** Matrix::subtract( Matrix **m1, Matrix **m2,Matrix **m3,int i,int j)//subtraction of two matrixes
	{
		for(int k=0;k<i;k++)
			{for(int h=0;h<j;h++)
				{ 
					m3[k][h].val=m1[k][h].val-m2[k][h].val;
				}
			}
return m3;
	}
Matrix** Matrix::multiply( Matrix **m1,Matrix **m2,Matrix **m3,int r,int c)//multiplicatoin of two matries
	{	
	float s=0;
	for(int k=0;k<r;k++)
		{
		for(int i=0;i<c;i++)
			{	for(int j=0;j<r;j++)
					{	s=s+m1[k][j].val*m2[j][i].val;
					}
				m3[k][i].val=s;
				s=0;	
			}
		}
		return m3;
	}

Matrix ** Matrix::multiplyElement(Matrix **m1, Matrix **m2,Matrix **m3,int r,int c)//multiplication by elements
	{
		for(int k=0;k<r;k++)
			{	for(int h=0;h<c;h++)
					{ 
						m3[k][h].val=m1[k][h].val*m2[k][h].val;
					}
			}
	return m3;
	}



Matrix** Matrix::addcons( Matrix **m1,int r,int c,float l)//addition of a constent
	{
		for(int k=0;k<r;k++)
			{
				for(int h=0;h<c;h++)
					{ 
						m1[k][h].val=m1[k][h].val+l;
					}
			}
	return m1;
	}
Matrix** Matrix::multiplycons( Matrix    **m1,int r,int c,float l)//multiplication of a constent
	{
		for(int k=0;k<r;k++)
			{
				for(int h=0;h<c;h++)
					{ 
						m1[k][h].val=m1[k][h].val*l;
					}
			}
	return m1;
	}  
void Matrix::input(Matrix **m1,int r,int c)//input for a matrixe
	{
		for(int k=0;k<r;k++)
			{
				for(int h=0;h<c;h++)
					{ 
						cin>>m1[k][h].val;
					}
			}
	}
void Matrix::display(int c,Matrix **m1,int r)//displaying a matrix
	{
		for(int k=0;k<r;k++)
			{
				for(int h=0;h<c;h++)
					{ 
						cout<<m1[k][h].val<<" ";
					}
			cout<<endl;
			}
	}





























