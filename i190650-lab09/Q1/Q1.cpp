#include<iostream>
#include"Complex.cpp"
using namespace std;
int main(int argc, char **argv) {
	double r,i;bool b;
	cout<<"enter a real number"<<endl;
cin>>r;
cout<<"enter a imaginary number"<<endl;
cin>>i;
Complex c(r,i);
cout<<"checking functionallity"<<endl;
b=!c;

if(b==0)
	cout<<"false"<<endl;
else
	cout<<"true"<<endl;
	return 0;
}
