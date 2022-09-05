#include<iostream>
#include<string>
#include"TextBook.h"
#include"Course.h"
#include"Instructor.h"
using namespace std;
int main()
{string s1,s2,s3,s4,s5,s6,s7;

cout<<"enter course name"<<endl;
cin>>s1;
cout<<"enter instructor last name"<<endl;
cin>>s2;
cout<<"enter instructor first name"<<endl;
cin>>s3;
cout<<"enter office"<<endl;
cin>>s4;
cout<<"enter book title"<<endl;
cin>>s5;
cout<<"enter author name"<<endl;
cin>>s6;
cout<<"enter publisher name"<<endl;
cin>>s7;

Course c1(s1,s2,s3,s4,s5,s6,s7);
cout<<"***********course1 information*************"<<endl;
c1.print();
Course c2=c1;
cout<<"***********course2 information*************"<<endl;
c2.print();


return 0;
}

