#include<string.h>
#include<iostream>
using namespace std;
//**************q3(1)****************
int **MatrixMul ( int **MatrixA , int rowsA , int colsA ,
int **MatrixB , int rowsB , int colsB ) {
int **p3=new int*[rowsA];
for(int k=0;k<rowsA;k++)
 p3[k]=new int[colsA];
if(rowsA==1&&colsB==1)
{int i=0,j=0;
while(i<rowsA)
{while(j<colsA)
{
p3[i][j]=MatrixA[i][j]*MatrixB[j][i];
j++;
}
j=0;
i++;


}
return p3;}
else
{int i=0,j=0;
while(i<rowsA)
{while(j<colsA)
{
p3[i][j]=MatrixA[i][j]*MatrixB[j][i]+MatrixA[i][j]*MatrixB[i][j];

j++;
}
j=0;
i++;

}
return p3;}
}
//**************q3(2)******************
int **MatrixAdd ( int **MatrixA , int rowsA , int colsA ,
int **MatrixB , int rowsB , int colsB ) {
int **p3=new int*[rowsA];
for(int k=0;k<rowsA;k++)
 p3[k]=new int[colsA];
if(rowsA==1&&colsB==1)
{int i=0,j=0;
while(i<rowsA)
{while(j<colsA)
{
p3[i][j]=MatrixA[i][j]+MatrixB[j][i];

j++;
}
j=0;
i++;

}
return p3;}
else
{int i=0,j=0;
while(i<rowsB)
{while(j<colsB)
{
p3[i][j]=MatrixA[i][j]+MatrixB[j][i];

j++;
}
j=0;
i++;
}
return p3;}
}
//***************q3(3)***********************
int **MatrixSub ( int **MatrixA , int rowsA , int colsA ,
int **MatrixB , int rowsB , int colsB ) {
int **p3=new int*[rowsA];
for(int k=0;k<rowsA;k++)
 p3[k]=new int[colsA];
if(rowsA==1&&colsB==1)
{int i=0,j=0;
while(i<rowsB)
{while(j<colsB)
{
p3[i][j]=MatrixA[i][j]-MatrixB[j][i];

j++;
}
j=0;
i++;
}
return p3;}
else
{int i=0,j=0;
while(i<rowsA)
{while(j<colsA)
{

p3[i][j]=MatrixA[i][j]-MatrixB[j][i];

j++;
}
j=0;
i++;
}
return p3;}
}
//******************q3(4)***************
int ** MatrixTranspose ( int** Matrix , int rows , int cols ) {
int **p3=new int*[rows];
for(int k=0;k<rows;k++)
 p3[k]=new int[cols];



int flag=0;
int i=0,j=0;
while(i<rows)
{while(j<cols)
{


p3[i][j]=Matrix[j][i];
j++;
}
i++;
j=0;
}
return p3;
}
//******************q3(5)************
int ** MatrixRotate ( int ** Matrix , int rows , int cols ) {

int **p3=new int*[rows];
for(int k=0;k<rows;k++)
 p3[k]=new int[cols];


int flag=0;
int i=0,j=0,h=cols-1;
while(i<rows)
{while(j<cols&&h>=0)
{
p3[i][j]=Matrix[h][i];
h--;
j++;
}
i++;
h=cols-1;
j=0;
}

return p3;}
//************q3(6)******************
int MatrixDet ( int ** Matrix , int rows , int cols ) {

if(rows==1||cols==1)
{
return Matrix[0][0];
}

if(rows==2||cols==2)
{
int s1=0;
s1=Matrix[0][0]*Matrix[1][1]-Matrix[0][1]*Matrix[1][0];

return s1;


}
if(rows==3||cols==3)
{int s1=0,s2=0;
int **p3=new int*[rows];
for(int k=0;k<rows;k++)
 p3[k]=new int[cols-1];

int flag=0;
int i=0;
int j=0;
while(i<rows)
{while(j<cols-1)
{


p3[i][j]=Matrix[i][j];
j++;
}
j=0;
i++;
}
s1=Matrix[0][0]*Matrix[1][1]*Matrix[2][2]+Matrix[0][1]*Matrix[1][2]*p3[2][0]+Matrix[0][2]*p3[1][0]*p3[2][1];
s2=Matrix[0][2]*Matrix[1][1]*Matrix[2][0]+p3[0][0]*Matrix[1][2]*Matrix[2][1]+Matrix[2][2]*p3[1][0]*p3[0][1];
return s1-s2;
}}
//**************q3(7)*******************
float ** MatrixInverse ( int ** Matrix , int rows , int cols ) {
if(rows==1||cols==1)
{
float **p3=new float*[rows];
for(int k=0;k<rows;k++)
 p3[k]=new float[cols];
p3[0][0]=Matrix[0][0]+1/(Matrix[0][0]);
return p3;
}
if(rows==2||cols==2)
{
float **p3=new float*[rows];
for(int k=0;k<rows;k++)
 p3[k]=new float[cols];
int i=1,j=1;
float d=MatrixDet ( Matrix , rows ,cols );
p3[i-1][j-1]=(Matrix[i][j])*(1/d);
p3[i-1][j]=-(Matrix[i-1][j])*(1/d);
p3[i][j-1]=-(Matrix[i][j-1])*(1/d);
p3[i][j]=(Matrix[i-1][j-1])*(1/d);
return p3;
}}
























