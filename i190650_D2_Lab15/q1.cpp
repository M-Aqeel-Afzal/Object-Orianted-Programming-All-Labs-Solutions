//============================================================================
// Name        : lab15.cpp
// Author      : aqeel
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
template<class T>
class Container
{
	T *value;
	int capacity;
	int counter;

public:
	Container()
{

	value=NULL;
	capacity=0;
	counter=0;
}
	Container(T s)
	{capacity=s;
		value=new T[capacity];

		counter=0;
		for(int i=0;i<capacity;i++)
		{
			value[i]=0;
		}
	}
	void insert(T v)
	{
		if(counter<capacity)
		{value[counter]=v;
		counter++;
		}
	}

	bool isFull()
	{
	if(counter==capacity)
		{
		return true;
		}
	else
		return false;
	}
	bool search(T v)
	{
		for(int i=0;i<capacity;i++)
		{
			if(value[i]==v)
				return true;
		}
		return false;
	}
	bool remove(T v)
	{//cout<<v<<" ";


		Container<T> v2(capacity);

		for(int i=0;i<capacity;i++)
		{
			v2.value[i]=value[i];

		}///value delete;
		//this->value=new T[v2->capacity];
		//capacity--;
		int j=0;
		for(int i=0;i<capacity;i++)
				{
					if(v2.value[i]==v)
						{
						counter--;

						}
					else{

					value[j]=v2.value[i];
					j++;
					}
				}

		return true;
	}
	void print()
	{
		for(int i=0;i<counter;i++)
	{cout<<value[i]<<" ";
	}
	cout<<endl;
	}
};
int main() {
	bool b;
	cout<<"\n\nfunctionality for int class type\n\n"<<endl;// for int
		Container<int> v1(3);
		v1.insert(5);
		v1.insert(4);
		v1.insert(3);
		b=v1.isFull();
if(b)
{
	cout<<"yes is full"<<endl;
}
else
	cout<<"not array is not full"<<endl;
b=v1.search(3);
if(b)
{
	cout<<"yes number exist in array"<<endl;
}
else
	cout<<" number is not exist "<<endl;
cout<<"\n\nArray before remove operation\n\n"<<endl;
		v1.print();
		v1.remove(4);
		cout<<"\n\nArray After remove operation\n\n"<<endl;
				v1.print();


				cout<<"\n\nfunctionality for float class type\n\n"<<endl;// for float
						Container<float> v2(3);
						v2.insert(2.5f);
						v2.insert(3.4f);
						v2.insert(3.3f);
						b=v2.isFull();
				if(b)
				{
					cout<<"yes is full"<<endl;
				}
				else
					cout<<"not array is not full"<<endl;
				b=v2.search(3.3f);
				if(b)
				{
					cout<<"yes number exist in array"<<endl;
				}
				else
					cout<<" number is not exist "<<endl;
				cout<<"\n\nArray before remove operation\n\n"<<endl;
						v2.print();
						v2.remove(3.4f);
						cout<<"\n\nArray After remove operation\n\n"<<endl;
								v2.print();



	cout<<"\n\nfunctionality for double class type\n\n"<<endl;// for double
	Container<double> v3(4);
	v3.insert(2.5);
	v3.insert(3.4);
	v3.insert(3.3);
	v3.insert(5.5);
	b=v3.isFull();
	if(b)
	{
		cout<<"yes is full"<<endl;
	}
		else
		cout<<"not array is not full"<<endl;
	b=v3.search(3.4);
	if(b)
	{
		cout<<"yes number exist in array"<<endl;
	}
	else
		cout<<" number is not exist "<<endl;
	cout<<"\n\nArray before remove operation\n\n"<<endl;
			v3.print();
		v3.remove(3.4);
		cout<<"\n\nArray After remove operation\n\n"<<endl;
				v3.print();

	return 0;
}
