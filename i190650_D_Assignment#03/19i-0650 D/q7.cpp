#include"Matrix.h"
#include"Matrix.cpp"
#include<iostream>
#include<cstring>
using namespace std;
int main()
{static int row,col;int val,v1,v4,r,c;
char flag;
bool v2,v3;
cout<<"enter number of rows."<<endl;
cin>>row;
cout<<"enter number of colums."<<endl;
cin>>col;

Matrix** m1=new Matrix*[row];
Matrix** m3=new Matrix*[row];
Matrix** m2=new Matrix*[row];
Matrix** m4=new Matrix*[row];
for(int i=0;i<col;i++)
{
m1[i]=new Matrix[col];
m2[i]=new Matrix[col];
m3[i]=new Matrix[col];
m4[i]=new Matrix[col];

}
cout<<"input for matrix 1."<<endl;
for(int i=0;i<row;i++)
{for(int j=0;j<col;j++)
{
cin>>val;
m1[i][j].setval(val);
}}
cout<<"input for matrix 2."<<endl;
for(int i=0;i<row;i++)
{for(int j=0;j<col;j++)
{
cin>>val;
m2[i][j].setval(val);
}}
in:
cout<<"\n\n\nchoice any of the option from the following:\n\n\n"<<endl;
cout<<"1: Set value at spacified index.\n2:get value at spacified index.\n3:copy a matrix and return same.\n4:add two matrix.\n5:subtract two matrix.\n6:multiply two matrix.\n7:add a constent to every element of a matrix.\n8:multiply  a constent to every element of a matrix.\n9:take input in every element of a matrix.\na:Dispaly a matrix.\nb:element wise multiply two matrixes.\nc:exit manu\n\n";
cin>>flag;
switch(flag)
{
case'1' :


cout<<"enter row index:"<<endl;
cin>>r;
	while(r<0&&r>=row)
		{
		
		cout<<"wrong input"<<endl;
		cin>>r;

		}
cout<<"enter column index:"<<endl;
cin>>c;
		while(c<0&&c>=col)
		{
		cout<<"wrong input"<<endl;
		cin>>c;

		}
cout<<"enter value which you want to set:"<<endl;
cin>>val;
cout<<"enter matrix number (1 or 2):"<<endl;
cin>>v1;

if(v1==1)
	{
		v2=m1[0][0].set(r,c,val,m1);
			if(v2)
			cout<<"***********value has been set.**********"<<endl;
			else
				cout<<"***********value has not been set.(may be wrong input)**********"<<endl;}
				else if(v1==2)
					{
						v2=m2[0][0].set(r,c,val,m2);
								if(v2)
								cout<<"***********value has been set.**********"<<endl;
								else
								cout<<"***********value has not been set.(may be wrong 									input)**********"<<endl;}
				else
				cout<<"wrong matrix number."<<endl;
	goto in;
case '2':


cout<<"enter row index:"<<endl;
cin>>r;
	while(r<0&&r>=row)
			{	
				cout<<"wrong input"<<endl;
				cin>>r;
			}
cout<<"enter column index:"<<endl;
cin>>c;
	while(c<0&&c>=col)
			{

				cout<<"wrong input"<<endl;
				cin>>c;
			}
cout<<"enter matrix number (1 or 2):"<<endl;
cin>>v1;
if(v1==1)
cout<<m1[0][0].get(r,c,m1)<<endl;
else if(v1==2)
cout<<m2[0][0].get(r,c,m2)<<endl;
else
cout<<"wrong matrix number."<<endl;
goto in;
case '3':


cout<<"which matrix you want to copy.(1 or 2) in matrix 3"<<endl;
cin>>v1;
if(v1==1)
m3=m1[0][0].assign( m1, m3,row,col);
else if(v1==2)
m3=m2[0][0].assign( m1, m3,row,col);
else
cout<<"wrong matrix number."<<endl;
m3[0][0].display(col,m3,row);
goto in;
case '4':


cout<<"enter 1st matrix number (1 or 2):"<<endl;
cin>>v1;
cout<<"enter 2nd matrix number (1 or 2):"<<endl;
cin>>v4;
if(v1==1&&v4==2)
	{m4=m1[0][0].add(m1, m2,m4,row,col);
	
	cout<<"\n\n\nresultant matrix:\n\n\n"<<endl;

	m1[0][0].display(col,m4,row);
	}
else if(v1==2&&v4==1)
	{m4=m2[0][0].add(m2, m1,m4,row,col);
	cout<<"\n\n\nresultant matrix:\n\n\n"<<endl;
	m1[0][0].display(col,m4,row);
	}
else
cout<<"wrong matrix number."<<endl;
goto in;
case '5':


cout<<"enter 1st matrix number (1 or 2):"<<endl;
cin>>v1;
cout<<"enter 2nd matrix number (1 or 2):"<<endl;
cin>>v4;
if(v1==1&&v4==2)
{
		m4=m1[0][0].subtract(m1, m2,m4,row,col);
		cout<<"\n\n\nresultant matrix:\n\n\n"<<endl;
		m4[0][0].display(col,m4,row);
}
else if(v1==2&&v4==1)
{		m4=m2[0][0].subtract(m2, m1,m4,row,col);
		cout<<"\n\n\nresultant matrix:\n\n\n"<<endl;
		m4[0][0].display(col,m4,row);
}
else
cout<<"wrong matrix number."<<endl;
goto in;
case '6':


cout<<"enter 1st matrix number (1 or 2):"<<endl;
cin>>v1;
cout<<"enter 2nd matrix number (1 or 2):"<<endl;
cin>>v4;
if(v1==1&&v4==2)
{
		m4=m1[0][0].multiply(m1, m2,m4,row,col);
		cout<<"\n\n\nresultant matrix:\n\n\n"<<endl;
		m4[0][0].display(col,m4,row);
}
else if(v1==2&&v4==1)
{		m4=m2[0][0].multiply(m2, m1,m4,row,col);
		cout<<"\n\n\nresultant matrix:\n\n\n"<<endl;
		m4[0][0].display(col,m4,row);
}
else
cout<<"wrong matrix number."<<endl;
goto in;
case '7':
cout<<"enter matrix number (1 or 2):"<<endl;
cin>>v1;
cout<<"enter constent number :"<<endl;
cin>>v4;

if(v1==1)
m4=m1[0][0].addcons( m1,row,col,v4);
else if(v1==2)
m4=m2[0][0].addcons( m2,row,col,v4);
else
{		cout<<"wrong matrix number."<<endl;
		goto in;
}
m4[0][0].display(col,m4,row);
goto in;


case '8':
cout<<"enter matrix number (1 or 2):"<<endl;
cin>>v1;
cout<<"enter constent number :"<<endl;
cin>>v4;

if(v1==1)
m4=m1[0][0].multiplycons( m1,row,col,v4);
else if(v1==2)
m4=m2[0][0].multiplycons( m2,row,col,v4);
else
{		cout<<"wrong matrix number."<<endl;
		goto in;
}
m4[0][0].display(col,m4,row);
goto in;
case '9':
cout<<"enter matrix number (1 or 2):"<<endl;
cin>>v1;


cout<<"input values.:"<<endl;
if(v1==1)
{		
		m1[0][0].input( m1,row,col);
		m1[0][0].display(col,m1,row);
}
else if(v1==2)
{
		m2[0][0].input( m2,row,col);
		m2[0][0].display(col,m2,row);
}
else
{
		cout<<"wrong matrix number."<<endl;
		goto in;
}
goto in;
case 'a':
case 'A':
cout<<"enter matrix number (1 or 2):"<<endl;
cin>>v1;
if(v1==1)
{
	m1[0][0].display(col,m1,row);
}
else if(v1==2)
{
		m2[0][0].display(col,m2,row);
}
else
cout<<"wrong matrix number."<<endl;
goto in;
case 'b':
case 'B':
m4=m4[0][0].multiplyElement(m1,m2,m4,row,col);
cout<<"matrix 1 is:"<<endl;
m1[0][0].display(col,m1,row);
cout<<"\n\n\nmatrix 2 is:"<<endl;
m2[0][0].display(col,m2,row);
cout<<"\n\n\n resultant matrix  is:"<<endl;
m4[0][0].display(col,m4,row);
goto in;
case 'c':
case 'C':
break;
default:
cout<<"wrong input.\n\n\n"<<endl;
goto in;
}
}

























