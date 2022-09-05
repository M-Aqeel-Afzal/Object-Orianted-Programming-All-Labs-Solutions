#include<iostream>
#include"Matrix.h"
//#include"Matrix.cpp"
using namespace std;
int main(int argc, char **argv) {
//Matrix m1,m2,m3,m4;
int r=3,c=3,v;

Matrix m1(3,3),m2(3,3),m3(3,3),m4(3,3);
//cout<<"enter values\n\n(there are total four Matrix"<<endl;
cout<<"values for m1"<<endl;
	m1.setvalue();
	m1.display();


		m2=m1+1;
cout<<"showing of m2 after adding 1 in m1 and storing in m2"<<endl;
m2.display();
m2=m1-4;
cout<<"showing of m2 after subtracting 4 in m1 and storing in m2"<<endl;
m2.display();
m3=m1+m2;
cout<<"showing of m3 after adding m1 and m2 and storing in m3"<<endl;
m3.display();
m3=m1-m2;
cout<<"showing of m3 after subtracting m1 and m2 and storing in m3"<<endl;
m3.display();
	return 0;
}
