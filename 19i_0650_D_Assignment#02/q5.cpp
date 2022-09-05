#include<iostream>
#include<cstring>
using namespace std;
struct name
{
char F_Name[20];
char L_Name[20];
};
struct student
{
string reg_no;
name student_name;
int marks[5];
float GPA;
};
int takedata(struct student &s)
{
cout<<"enter the registration:"<<endl;
cin>>s.reg_no;
 cout<<"enter fist name "<<endl;
cin>>s.student_name.F_Name;
cout<<"enter last name "<<endl;
cin>>s.student_name.L_Name;
cout<<endl<<endl<<"enter marks:"<<endl<<endl;
int sum=0;
for(int i=0;i<5;i++)
{
cout<<"enter marks of subject "<<i+1<<" :";
cin>>s.marks[i];
sum=sum+s.marks[i];
}
return sum;
}
int main()
{int num;
cout<<"enter the total number of student:"<<endl;
cin>>num;
 student *std=new student[num];
double avg[num];double gpa[num];
for(int i=0;i<num;i++)
{cout<<endl<<endl;
cout<<"enter data of student "<<i+1<<endl;
avg[i]=(takedata(std[i]))/5;
}
for(int i=0;i<num;i++)//counting of GPA.
{
if(avg[i]<50)
gpa[i]=0.00;
else if(avg[i]>=50&&avg[i]<59)
gpa[i]=1.80;
else if(avg[i]>=60&&avg[i]<69)
gpa[i]=2.87;
else if(avg[i]>=70&&avg[i]<79)
gpa[i]=3.10;
else if(avg[i]>=80&&avg[i]<89)
gpa[i]=3.62;
else if(avg[i]>=90&&avg[i]<=100)
gpa[i]=4.00;
}
cout<<endl<<endl<<"   ********   ////   student having GPA above 3.00  /////  *************"<<endl<<endl;
for(int i=0;i<num;i++)                                             //counting of GPA above 3.00.
{
if(gpa[i]>3.00)
{
cout<<"Name : "<<std[i].student_name.F_Name<<endl;
cout<<"registration number: "<<std[i].reg_no<<endl;
cout<<"GPA IS: "<<gpa[i]<<endl;
}
}
for(int i=1;i<num;i++)                                             //sorting of GPA array.
{float h=0;
if(gpa[i-1]<gpa[i])
{
h=gpa[i];
gpa[i]=gpa[i-1];
gpa[i-1]=h;
}}
for(int i=0;i<num;i++)
//cout<<gpa[i]<<"  ";
return 0;

}








