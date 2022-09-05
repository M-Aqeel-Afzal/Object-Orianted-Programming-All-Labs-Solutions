/*
 * Array.h
 *
 *  Created on: Mar 30, 2020
 *      Author: aqeel
 */

#ifndef ARRAY_H_
#define ARRAY_H_
#include<iostream>
using namespace std;
class Array {
	int size;
	int *arr;
public:

	Array()
{
		size=5;

arr=new int [5];
		for(int i=0;i<5;i++)
		{
this->arr[i]=0;
		}
}
	~Array();
	int getsize()const;
	void setarr(int,int  );
	Array(int);
	Array(int*,int);
int getarr(int i)const;
	Array(const Array &other);
	int& operator[](int idx);
	int& operator[](int idx)const;
	const Array& operator=(const Array&);
	 Array operator+(const Array&);
	 Array operator-(const Array&);
	 Array operator++();
	 Array operator++(int);
	 Array operator--();
		 Array operator--(int);
	 Array operator+=(const Array&);
	 Array& operator-=(const Array&);
	 bool operator!();
	 bool operator==(const Array&);
	 int operator()(int idx,int size);
};

#endif /* ARRAY_H_ */










