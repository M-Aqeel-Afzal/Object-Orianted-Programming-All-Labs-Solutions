/*
 * Matrix.h
 *
 *  Created on: Mar 11, 2020
 *      Author: aqeel
 */

#ifndef MATRIX_H_
#define MATRIX_H_

class Matrix {
	int row;
	int column;
	int **p1;
public:
	Matrix()
{
		row=0;
		column=0;
p1=new int*[3];
for(int i=0;i<3;i++)
	p1[i]=new int[3];
}
	Matrix(int a,int b):row(a),column(b)
	{

		p1=new int*[3];
		for(int i=0;i<3;i++)
			p1[i]=new int[3];
	}
	void setrow(int);
	void setcolumn(int);
	void setvalue();
	int getvalue(int ,int);

	~Matrix()
	{
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<column;j++)
			{


			}
		}
	}
	Matrix(const Matrix &other)
	{
		row=other.row;
		column=other.column;
		p1=new int*[3];
		for(int i=0;i<3;i++)
			p1[i]=new int[3];
	}
	Matrix& operator=(const Matrix &);
	bool operator==(const Matrix &);
	Matrix operator+(int x);
	Matrix operator+(const Matrix &);
	Matrix operator-(int x);
		Matrix operator-(const Matrix &);
		void display();
};

#endif /* MATRIX_H_ */











