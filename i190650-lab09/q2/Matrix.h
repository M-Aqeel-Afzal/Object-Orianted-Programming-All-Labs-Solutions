/*
 * Matrix.h
 *
 *  Created on: Mar 24, 2020
 *      Author: aqeel
 */
#include<iostream>
using namespace std;
#ifndef MATRIX_H_
#define MATRIX_H_

class Matrix {
	int row;
	int col;
	int** p;
public:
	Matrix()
{
	row=0;
	col=0;
	p=NULL;
}
	~Matrix()
	{
if(p[0][0]==!NULL)
{
for(int i=0;i<row;i++)
{
delete []p[i];
}
delete []p;
}
	}
	Matrix(int ,int);
	void setrows(int);
	int getrows() const;
	void setcolums(int);
		int getcolums() const;
		void setp(int,int,int);
				int getp(int ,int) const;
	Matrix(const Matrix &other);
	Matrix& operator ++(); //pre-increment
	Matrix operator ++(int ignoreMe); //post-increment
	Matrix& operator --(); //pre-decrement
	Matrix operator --(int ignoreMe); //post decrement

};

#endif /* MATRIX_H_ */
