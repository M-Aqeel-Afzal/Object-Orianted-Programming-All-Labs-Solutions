#include"Scheduler.h"
#include"Scheduler.cpp"
#include<iostream>
#include<cstring>
using namespace std;
int main()
{char a;
int v1,v2,v3,v4,v5,t1,t2,t;
bool v6,v7;
cout<<"enter totall number of tasks in the project."<<endl;
cin>>v1;
Scheduler pjt[v1];
//pjt=new Scheduler[v1]; 
//pjt.setttask( v1,pjt);
for(int i=0;i<v1;i++)
{
	cout<<"enter task#"<<i+1<<" ID "<<endl;
	cin>>v2;
	pjt[i].setid(v2,pjt,i);
	cout<<"enter shortest duration of task#"<<i+1<<endl;
	cin>>v2;
	pjt[i].setst(v2);
	cout<<"enter longest duration of task#"<<i+1<<endl;
	cin>>v3;
	pjt[i].setlt(v3);
	cout<<"enter expected duration of task#"<<i+1<<endl;
	cin>>v4;
	pjt[i].setet(v4);
	v7=pjt[i].setTaskDuration(v2,v3,v4,pjt,i);
}



cout<<"\n\n\nenter starting time in hours (24 format)in a day"<<endl;
cin>>t1;
cout<<"\n\n\nenter ending time in hours (24 format) in a day"<<endl;
cin>>t2;
pjt[0].sets_t( t1);
pjt[0].sete_t( t2);
t=t2-t1;
in:
cout<<endl<<endl<<"                     ***********choose any of the option.********\n\n\n\n"<<endl;
cout<<"1: Change tasks duration of all tasks.\n2: Change tasks duration of a specific task.\n3: print dependinces list of a specific task.\n4: print compelition time of the project.\n5: print array of all critical tasks.\n6: exit manu.\n\n\n";
cin>>a;
switch(a)
{
case '1':
	for(int i=0;i<v1;i++)
	{
		v5=pjt[i].getid();
		//pjt[i].setid(i+1,i);
		cout<<"enter shortest duration of task having ID "<<v5<<endl;;
		cin>>v2;
		pjt[i].setst(v2);
		cout<<"enter longest duration of task having ID "<<v5<<endl;
		cin>>v3;
		pjt[i].setlt(v3);
		cout<<"enter expected duration of task having ID "<<v5<<endl;
		cin>>v4;
		pjt[i].setet(v4);
		v7=pjt[i].setTaskDuration(v2,v3,v4,pjt,i);
	}
goto in;

case '2':

cout<<"enter task ID."<<endl;
cin>>v5;
	for(int i=0;i<v1;i++)
		{
		if(pjt[i].getid()==v5)
			{
				cout<<"enter shortest duration of task having ID "<<v5<<endl;
				cin>>v2;
				pjt[i].setst(v2);
				cout<<"enter longest duration of task having ID "<<v5<<endl;
				cin>>v3;
				pjt[i].setlt(v3);
				cout<<"enter expected duration of task having ID "<<v5<<endl;
				cin>>v4;
				pjt[i].setet(v4);
				v6=pjt[i].set_nth_TaskDuration(v5,v2, pjt, v3, v4,i);
					if(v6)
					{
						cout<<"////////////////////time duration is updated///////////////"<<endl;
						goto in;
					}
			}
					if(i==v1-1)
					cout<<"////////////////////time duration is not  updated///////////////"<<endl;
		}

goto in;

case '3':
cout<<"enter ID of task."<<endl;
cin>>v2;
pjt[0].printTaskDependencyList(v2,pjt,v1);
goto in;
cout<<"\n\n\n\n"<<endl;

case '4':

v3=pjt[0].completionTime(pjt,v1);
//t=t/9;
//v3=v3/t;
cout<<"total compelition time of the whole project in number of Days is: "<<v3<<endl;
goto in;

case '5':

int *arr;
arr=new int;
pjt[0].printCriticalTasks(pjt,v1,arr);
	for(int i=0;i<v1;i++)
		{
			v5=pjt[i].getid();
			cout<<"ID: "<<v5<<" time duration."<<arr[i]<<endl;
		}
goto in;
case '6':
break;
default:
cout<<"invalid entry."<<endl;
goto in;
}
return 0;


}
























