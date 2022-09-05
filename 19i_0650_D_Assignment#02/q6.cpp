#include<iostream>
using namespace std;


struct Address
{
char city[20];
int postcode;
char email_id[20];
};



struct Salary
{
int Year;
float gross_salary;
};



struct Tax
{
int Year;
float tax_due;
float net_salary;
};


struct Employee
{
char name[20];
int scale;
Salary YearlySalary[3];
Tax YearlyTax[3];
Address addr;
Employee *next;
};
void inputdata(Employee &s,Employee *emp_ptr,int d)//function for input all data of empployees
{
cout<<"Enter name of employee: "<<d+1<<endl;
cin>>s.name;
cout<<"Enter scale of employee: "<<d+1<<endl;
cin>>s.scale;
cout<<"enter salary information for three years"<<endl<<endl<<endl;
	for(int i=0;i<3;i++)				//loop for taking input of salary
	{cout<<"enter year: "<<i+1<<" "<<endl;
	cin>>s.YearlySalary[i].Year;
	cout<<"Enter salary of employee: "<<d+1<<" for year: "<<s.YearlySalary[i].Year<<endl;
	cin>>s.YearlySalary[i].gross_salary;
	}
cout<<"enter tex information for three years"<<endl<<endl<<endl;
		for(int i=0;i<3;i++)			//loop for inputing tax data
		{cout<<"enter year: "<<i+1<<" "<<endl;
		cin>>s.YearlyTax[i].Year;
		cout<<"Enter tax due of employee: "<<d+1<<" for year: "<<s.YearlyTax[i].Year<<endl;
		cin>>s.YearlyTax[i].tax_due;
		cout<<"Enter net salary of employee: "<<d+1<<" for year: "<<s.YearlyTax[i].Year<<endl;
		cin>>s.YearlyTax[i].net_salary;
		}
cout<<"enter Adress information of employee: "<<d+1<<endl;
cout<<"enter city name of employee: "<<d+1<<" "<<endl;
cin>>s.addr.city;
cout<<"Enter postal code of employee: "<<d+1<<endl;
cin>>s.addr.postcode;
cout<<"Enter email ID of employee: "<<d+1<<endl;
cin>>s.addr.email_id;
s.next=emp_ptr;
emp_ptr=&s;

}

int main()			//main function
{
Employee *emp=new Employee[10];
Employee *emp_ptr=new Employee;
double *yearlytax=new double[10];
double *netsalary=new double[10];
double flag=0;
int h=0;
emp_ptr=NULL;
	for(int i=0;i<10;i++)//loop for calling input function
	{
	inputdata(emp[i],emp_ptr,i);

	}
		for(int i=0;i<10;i++)//loop for calculating yearly tax and netsalary
		{
		if(emp[i].scale>=1&&emp[i].scale<=10)
		yearlytax[i]=(emp[i].YearlySalary[i].gross_salary*5)/100;
		else
		yearlytax[i]=(emp[i].YearlySalary[i].gross_salary*7.5)/100;

		netsalary[i]=emp[i].YearlySalary[i].gross_salary-emp[i].YearlyTax[i].tax_due;
		}
cout<<"        ********Table of net salary of all empolyees********"<<endl<<endl;
cout<<"Name                       salary"<<endl;
			for(int i=0;i<10;i++)//loop for output
			{
			cout<<emp[i].name<<"          		  "<<netsalary[i]<<endl;
			if(yearlytax[i]>flag)
			{flag=yearlytax[i];
			h=i;
			}
}
cout<<"        ********Employee who have paid highest tax********"<<endl<<endl;
cout<<"Name:  "<<emp[h].name<<endl<<"address: "<<"City: "<<emp[h].addr.city<<"   postalcode: "<<emp[h].addr.postcode
<<"    email ID: "<<emp[h].addr.email_id<<endl;
return 0;
}















