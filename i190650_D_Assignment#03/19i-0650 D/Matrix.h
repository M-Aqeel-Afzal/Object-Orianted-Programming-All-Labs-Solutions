#ifndef VEHICLE_H
#define VEHICLE_H
#define PI 3.1416
#include<cstring>
#include<iostream>
using namespace std;
class Matrix{
int rows;
int colums;
int val;

public:
void display(int c,Matrix **m1,int r);
void  input(Matrix **m1,int r,int c);
Matrix**  multiplycons( Matrix    **m1,int r,int c,float k);
Matrix**  addcons( Matrix **m1,int r,int c,float k);
Matrix**  multiplyElement( Matrix **m1, Matrix **m2,Matrix **m3,int r,int c);
Matrix**  multiply( Matrix **m1, Matrix **m2,Matrix **m3,int r,int c);
Matrix** subtract( Matrix    **m1, Matrix    **m2,Matrix    **m3,int i,int j);
Matrix**  add( Matrix    **m1, Matrix    **m2,Matrix    **m3,int i,int j);
Matrix**  assign(Matrix **m,Matrix **m2,int i,int j);
float  get(int i, int j, Matrix **m);
bool  set(int i, int j, float va,Matrix **m);
 Matrix(const Matrix  &m);
 Matrix(int r, int c);
 Matrix();
~Matrix();
int  getcolums();
void  setval(float);
float  getval();
int  getrows();


};
#endif
