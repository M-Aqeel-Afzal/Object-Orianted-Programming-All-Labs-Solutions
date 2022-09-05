//============================================================================
// Name        : lab14.cpp
// Author      : aqeel
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include<iostream>
#include<fstream>
using namespace std;

int main() {
	int roll_no;
			string f_name;
			string l_name;
			string dprt;
			char section;
		ofstream o_file;
		o_file.open(" Student.txt");
		for(int i=0;i<10;i++)
		{
		cout<<"Enter Roll number of Student "<<i+1<<endl;
		cin>>roll_no;
		cout<<"Enter First Name of Student "<<i+1<<endl;
		cin>>f_name;
		cout<<"Enter Last Name of Student "<<i+1<<endl;
		cin>>l_name;
		cout<<"Enter Department of Student "<<i+1<<endl;
		cin>>dprt;
		cout<<"Enter Section of Student "<<i+1<<endl;
		cin>>section;
		o_file<<roll_no<<" ";

		o_file<<f_name<<" ";
		o_file<<l_name<<" ";
		o_file<<dprt<<" ";
		o_file<<section<<" ";
		o_file<<endl;

		}
		o_file.close();
	return 0;
}
