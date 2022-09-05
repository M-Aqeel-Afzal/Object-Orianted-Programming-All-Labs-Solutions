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
void print(struct student a1)
{
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;

cout<<"displaying name:"<<endl;
cout<<a1.name<<endl;
cout<<"displaying age:"<<endl;
cout<<a1.age<<endl;
cout<<"displaying roll.no:"<<endl;
cout<<a1.roll_no<<endl;
cout<<"displaying marks:"<<endl;
cout<<a1.marks<<endl;};
 
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
print(p1);



return 0;
}
