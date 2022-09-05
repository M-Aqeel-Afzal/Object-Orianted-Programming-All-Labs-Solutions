/*
 * Matrix.h
 *
 *  Created on: Mar 29, 2020
 *      Author: aqeel
 */

#ifndef MATRIX_H_
#define MATRIX_H_
#include<iostream>
using namespace std;
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
		Matrix operator ++(int ignore); //post-increment
bool operator()(int& i,int& j);
bool operator()(int& i,int& j)const;
//void Display();
Matrix operator+(const Matrix& c3);
Matrix operator-(const Matrix& c3);
Matrix operator*(const Matrix& c3);
Matrix& operator=(const Matrix& c3);
bool operator==(const Matrix& c3);
void operator+=(const Matrix& c3);
void operator-=(const Matrix& c3);

};

#endif /* MATRIX_H_ */
