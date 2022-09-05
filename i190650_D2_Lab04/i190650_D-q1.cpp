#include<iostream>
#include<cstring>
using namespace std;
struct student
{
string  name;
int roll_no;

int age;
float marks;



};

 
int main()
{

student p1;



cout<<"name"<<endl;
cin>>p1.name;

cout<<"enter roll.no"<<endl;
cin>>p1.roll_no;
cout<<"enter age"<<endl;
cin>>p1.age;
cout<<"marks"<<endl;
cin>>p1.marks;



cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"displaying name:"<<endl;
cout<<p1.name<<endl;
cout<<"displaying age:"<<endl;
cout<<p1.age<<endl;
cout<<"displaying roll.no:"<<endl;
cout<<p1.roll_no<<endl;
cout<<"displaying marks:"<<endl;
cout<<p1.marks<<endl;


return 0;
}
