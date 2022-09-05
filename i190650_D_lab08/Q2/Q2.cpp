#include<iostream>
#include"Distance.h"
using namespace std;
int main(int argc, char **argv) {
	Distance d1(0,0),d2(0,0),d3(0,0),d4(0,0),d5(0,0);
	d2.setFeet(20);
	d2.setInches(40);
	d1.setFeet(30);
		d1.setInches(50);
d3=d1-d2;//subtracting
d4=d1+d2;//adding
d5=d1;//assignment
cout<<"d3 which is subtration result so feet: "
		<<d3.getFeet()<<" inches "<<d3.getInches()<<endl;
cout<<"d4 which is addition result so feet: "
		<<d4.getFeet()<<" inches "<<d4.getInches()<<endl;

cout<<"d5 which is assignment result so feet: "
		<<d5.getFeet()<<" inches "<<d5.getInches()<<endl;

	return 0;
}
