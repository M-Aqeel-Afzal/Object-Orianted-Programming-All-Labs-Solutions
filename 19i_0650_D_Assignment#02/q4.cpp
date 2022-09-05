#include<iostream>
using namespace std;
//**************(functions for part (A))**************
 void displayspace_once(int );
void displayspace(int n)// for printing spaces(A)
{if(n>0)
{cout<<" ";
displayspace(n-1);
}}


void display(int n)//for displaying starik(A)
{if(n>0)
{cout<<"*";
display(n-1);
}}

void lineend1(int g,int num)//for ending of line.and increasing of number of starik and spaces(A)
{
if(g<=num)
{
displayspace(g);
display(g);
cout<<endl;
lineend1(++g,num);
}
}

void lineend2(int g)//for ending of line but decreasing of number of starik and spaces(A)
{
if(g>0)
{
displayspace(g);
display(g);
cout<<endl;
lineend2(--g);
}
}

//************(functions for part B)*********
void display1(int n)//for displaying starik(B)
{if(n>0)
{cout<<"*";
displayspace_once(n-1);
}}



void displayspace_once(int n)// for printing spaces(B)
{if(n>0)
{cout<<" ";
display1(n-1);
}}






void lineendB(int g,int num)//for ending of line.and increasing of number of starik and spaces(B)
{int spaces=g;
if(g>0)
{
displayspace(--spaces);
display1(num);
cout<<endl;
lineendB(--g,num);
}
}
//*****************(function for part (C))*****************

void displayspace2(int n)// for printing spaces(C)
{if(n>0)
{cout<<" ";
displayspace(n-1);
}}
void display2()//for displaying starik(C)
{
{cout<<"*";

}}

void lineendC(int g,int num,int spaces,int j,int spaceagain,int k)//for ending of line.and increasing of number of starik and spaces(C)
{
if(g<=num)
{
if(j>0)
{displayspace(spaces);
display2();
displayspace(--j);
display2();
cout<<endl;
lineendC(++g,num,++spaces,--j,spaceagain,k);}
else
{
displayspace2(spaces);
display2();
displayspace2(++k);
display2();

cout<<endl;
lineendC(++g,num,spaces,j,--spaces,++k);
}
}
}


int main()
{
int num,k=1;
cout<<"Choice any one option:"<<endl<<endl;
cout<<"(A):printing of arrow shape.\n(B):printing of rhabus pattran.\n(C):printing of X pattran."<<endl;
char flag;
cin>>flag;
switch(flag)//for diffrent chioces.
{
case 'a':
case 'A':
{cout<<"Enter number of rows:"<<endl;
cin>>num;
lineend1(k,num);
k=num-1;
lineend2(k);
break;
}
case 'b':
case 'B':
{
cout<<"Enter number of rows:"<<endl;
cin>>num;
k=num;
num=num*2;
lineendB(k,num);

break;
}

case 'c':
case 'C':
{
cout<<"Enter number of symbols:"<<endl;
cin>>num;
k=1;
num=num*2;
lineendC(k,num,k,num,num-10,-1);

break;
}
default:
cout<<"wrong input"<<endl;
}
return 0;
}











