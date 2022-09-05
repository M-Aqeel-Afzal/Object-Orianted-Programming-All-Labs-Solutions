#include<iostream>
using namespace std;
bool match( int ** matrix1, int** matrix2, int r,int c,int ch  )
{
if(r<0)
return true;
else
{if(c>0)
  c--;
  else
  {
r--;c=ch;
if(r<0)
return true;
}
if(matrix1[r][c]==matrix2[r][c])
return match(matrix1,matrix2,r,c,ch);
else
return false;
}
}
bool equal(int ** matrix1, int** matrix2,int** matrix3,int row, int column)
{
bool test1=0,test2=0,test3=0;

test1=match(matrix1,matrix2,row-1,column,column-1);

if(test1==true)
test2=match(matrix2,matrix3,row-1,column,column-1);
if(test2==true)
test3=match(matrix1,matrix3,row-1,column,column-1);
if(test3==true)
return test3;
else
return test3;
}

