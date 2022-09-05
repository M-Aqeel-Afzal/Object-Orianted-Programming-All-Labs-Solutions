//#include"submission.cpp"
#include<string>
#include<iostream>
using namespace std;
University::University()
{
name="\0";

 dept=new Department[5];
numberOfDepartments=5;
}
University::University(string n, int num)
{
name=n;

 dept=new Department[num];
numberOfDepartments=num;

}
	void University::setName(string n)
{
name=n;

}
	string University::getName() const
{
return name;

}
	void University::setnumberOfDepartments(int n)
{
numberOfDepartments=n;
}
	int University::getnumberOfDepartments() const
{
return numberOfDepartments;

}
	//void setDept(const Department &d );
	Department University::getDept() const
{
return dept[0];

}
	bool University::addDepartment(Department &d)
{
dept[0].setDeptID(d.getDeptID());
dept[0].setName(d.getName());
dept[0].setnoOfProfressors(d.getnoOfProfressors());

return 1;
}
	bool University::deleteDepartment(string n)
{
for(int i=0;i<numberOfDepartments;i++)
{
if(dept[i].getName()==n)
{
dept[i].setDeptID(0);
dept[i].setName("");
dept[i].setnoOfProfressors(0);



return 1;
}



}
return 0;

}
	bool University::updateDepartment(int id, string s)
{
for(int i=0 ;i<numberOfDepartments;i++)
{
if(dept[i].getDeptID()==id)
{

dept[i].setName(s);
return 1;
}



}
return false;


}
	void University::display()
{
cout<<name<<endl;
cout<<numberOfDepartments<<endl;
for(int i=0;i<numberOfDepartments;i++)
{
dept[i].getDeptID();
dept[i].getName();
dept[i].display();}}
	 University::~University()
{
delete []dept;
}

