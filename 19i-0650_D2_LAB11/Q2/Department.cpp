#include"submission.cpp"
#include<string>
#include<iostream>
using namespace std;
Department::Department()
{

name="\0";
 profList=new Professor[5];
noOfProfessors=5;
deptID=1;
}
	Department::Department(string n, int np, int id)
{

name=n;
 profList=new Professor[np];
noOfProfessors=np;
deptID=id;

}
	void Department::setDeptID(int i)
{

deptID=i;
}
	int Department::getDeptID() const
{
return deptID;
}
	void Department::setName(string n)
{
name=n;
}
	string Department::getName() const
{
return name;
}
	void Department::setnoOfProfressors(int n)
{
noOfProfessors=n;
}
	int Department::getnoOfProfressors() const
{
return noOfProfessors;
}
	bool Department::addProfessor(Professor p)
{
profList[0].setName(p.getName());
profList[0].setEmployeeID(p.getEmployeeID());
profList[0].setDesignation(p.getDesignation());
return 1;
}
	bool Department::deleteProfessor (int id)
{
for(int i=0 ;i<noOfProfessors;i++)
{
if(profList[i].getEmployeeID()==id)
{
profList[i].setName("\0");
profList[i].setEmployeeID(0);
profList[i].setDesignation("\0");
return 1;
}



}
return false;
}
	bool Department::updateProfessor (int id , string s)
{
for(int i=0 ;i<noOfProfessors;i++)
{
if(profList[i].getEmployeeID()==id)
{

profList[i].setName(s);
return 1;
}



}
return false;


}
	void Department::display()
{
cout<<"Department ID is: "<<deptID<<endl;
cout<<"no of professors are: "<<noOfProfessors<<endl;
for(int i=0 ;i<noOfProfessors;i++)
{

cout<<"professor name: "<<profList[i].getName()<<endl;
cout<<"professor ID is : "<<profList[i].getEmployeeID()<<endl;
cout<<"professor designation is : "<<profList[i].getDesignation()<<endl;

}

}
Professor Department::getlist(int i)
{
return profList[i];
}
	 Department::~Department()
{
delete []profList;
}

