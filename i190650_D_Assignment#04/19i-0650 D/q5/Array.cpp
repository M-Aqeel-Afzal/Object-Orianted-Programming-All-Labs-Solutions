/*
 * Array.cpp
 *
 *  Created on: Mar 30, 2020
 *      Author: aqeel
 */

#include "Array.h"
#include<iostream>
using namespace std;
Array::Array(int k) {
	size=k;
	arr=new int [size];
	for(int i=0;i<k;i++)
			{
arr[i]=0;
			}

}
void Array::setarr(int v,int i )
{
	arr[i]=v;
}
Array::Array(int *ar, int k) {
	size=k;
	arr=new int [size];
	for(int i=0;i<k;i++)
			{
	this->arr[i]=ar[i];
			}

}

int Array::getsize()const
{
	return this->size;
}

Array::Array(const Array& other) {
size=other.size;
arr=new int[size];
for(int i=0;i<other.size;i++)
			{
	arr[i]=other.arr[i];
			}
cout<<"copy"<<endl;
}
int Array::getarr(int i)const
{
	return arr[i];
}
	int& Array::operator[](int indx)
	{
//for(int i=0;i!=NULL;i++)
//{
//
//}
		if(indx!=NULL)
		{
			return this->arr[indx];
		}
	}
	int& Array::operator[](int idx)const
	{
		if(idx!=NULL)
				{
					return this->arr[idx];
				}
	}
	const Array&  Array::operator=(const Array& a1)
	{if(this->size!=a1.size)
		{cout<<"copy operatoin cannot be done because size is not same"<<endl;
		return *this;
		}

		for(int i=0;i<size;i++)
		{
			this->arr[i]=a1.arr[i];
		}
		return *this;
	}
	 Array Array::operator+(const Array& a1)
	 {Array a2=a1;

		 for(int i=0;i<size;i++)
		 		{
		 			a2.arr[i]=this->arr[i]+a1.arr[i];

		 		}

		 		return a2;
	 }
	 Array Array::operator-(const Array& a1)
	 {
		 Array a2=a1;

		 		 for(int i=0;i<size;i++)
		 		 		{
		 		 			a2.arr[i]=this->arr[i]-a1.arr[i];
		 		 		}
		 		 		return a2;
	 }
	 Array Array::operator++()
		{
		 for(int i=0;i<size;i++)
		 		 		 		{
		 		 		 			this->arr[i]=this->arr[i]+1;
		 		 		 		}
		 		 		 		return *this;
		}
	 Array Array::operator++(int ignore)
		{
		 Array a2=*this;
		 for(int i=0;i<size;i++)
		 		 		 		 		{
		 		 		 		 			this->arr[i]=this->arr[i]+1;
		 		 		 		 		}
		 		 		 		 		return a2;
		}
	 Array Array::operator--()
		{
		 for(int i=0;i<size;i++)
		 		 		 		 		{
		 		 		 		 			this->arr[i]=this->arr[i]-1;
		 		 		 		 		}
		 		 		 		 		return *this;
		}
		 Array Array::operator--(int)
		{
			 Array a2=*this;
			 		 for(int i=0;i<size;i++)
			 		 		 		 		 		{
			 		 		 		 		 			this->arr[i]=this->arr[i]-1;
			 		 		 		 		 		}
			 		 		 		 		 		return a2;
		}
	 Array Array::operator+=(const Array& a2)
		{
		 for(int i=0;i<size;i++)
		 		 		 		 		 		{
		 		 		 		 		 			this->arr[i]=this->arr[i]+a2.arr[i];
		 		 		 		  		 		}
		 		 		 		 		 		return *this;
		}
	 Array& Array::operator-=(const Array& a2)
		{
		 for(int i=0;i<size;i++)
		 		 		 		 		 		 		{
		 		 		 		 		 		 			this->arr[i]=this->arr[i]-a2.arr[i];
		 		 		 		 		  		 		}
		 		 		 		 		 		 		return *this;
		}
	 bool Array::operator!()
	 {
		 if(this->arr[0]==NULL)
			 return 1;
		 else
			 return 0;
	 }
	 bool Array::operator==(const Array& a2)
		{
		 for(int i=0;i<size;i++)
		 		 		 		 		 		 		 		{
		 		 		 		 		 		 		 			if(this->arr[i]==a2.arr[i])
		 		 		 		 		 		 		 			{

		 		 		 		 		 		 		 			}
		 		 		 		 		 		 		 			else
	 		 		 		 		 		 				return 0;
		 		 		 		 		 		  		 		}
		 		 		 		 		 		 		 		return 1;
	 }
	 int Array::operator()(int idx,int size)
	 {for(int i=0;i<size-1;i++)
	 {int a=0;
		 if(this->arr[0]==NULL||idx>=size||idx<0)
			 return a=-1;
		 if(i>=idx)
		 {
			this->arr[i]=this->arr[i+1] ;
		 }

		 if(i==size-1)
			 return a=1;

	 }
	 this->size--;
	 }
ostream& operator<<(ostream& out,const Array& a1)
{int s=a1.getsize();
	for(int i=0;i<s;i++)
		{

		cout<<a1.getarr(i)<<" ";

		}

	cout<<endl;
	return out;
}
istream& operator>>(istream& out, Array& a1)
{int v;
	int s=a1.getsize();
	for(int i=0;i<s;i++)
		{
		cout<<"enter value for index "<<i<<endl;
		cin>>v;
			a1.setarr(v,i);
		}


	return out;
}

Array::~Array() {

		delete []arr;


}











