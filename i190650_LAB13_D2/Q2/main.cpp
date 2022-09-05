#include "Employee.h"
#include "Driver.h"
#include "Developer.h"
#include<iostream>
using namespace std;
int main()
{
cout<<"*************implementation for Driver*************"<<endl;
//by default using getter setter
Driver v1;
 v1.setEmpNo(1);
v1.setSalary(1200);
cout<<"emp no is: "<<v1.getEmpNo()<<endl;
cout<<"salary is: "<<v1.getSalary()<<endl;



//by peramitrized
Driver v2(2,1100);
 
cout<<"emp no is: "<<v2.getEmpNo()<<endl;
cout<<"salary is: "<<v2.getSalary()<<endl;



cout<<"\n\n\n\n*************implementation for Driver*************"<<endl;
//by default using getter setter
Developer p1;
 p1.setEmpNo(1);
p1.setSalary(2200);
cout<<"emp no is: "<<p1.getEmpNo()<<endl;
cout<<"salary is: "<<p1.getSalary()<<endl;



//by peramitrized
Developer p2(2,1500);
 
cout<<"emp no is: "<<p2.getEmpNo()<<endl;
cout<<"salary is: "<<p2.getSalary()<<endl;

return 0;
}
