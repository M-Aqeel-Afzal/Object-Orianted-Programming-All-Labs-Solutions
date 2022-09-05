#include<iostream>
#include<cstring>
#include"Scheduler.h"
using namespace std;
Scheduler::Scheduler()
{
t.id=1;
shortest_dur=2;
longest_dur=2;
expected_dur=2;
t.dur=(shortest_dur+longest_dur+expected_dur)/3;
t.s_Time=8;
t.e_Time=17;
list_dep=2;
t.dep=new int;
}
Scheduler::Scheduler(task* ts, int n)
{
for(int i=0;i<n;i++)
{
ts[i].id=1;
ts[i].dur=2;
ts[i].s_Time=8;
ts[i].e_Time=17;
list_dep=2;
ts[i].dep=new int;

}
}
/*void Scheduler::setttask(int i,Scheduler a)
{task *a.t[i]=new task;
a.t;
}*/
void Scheduler::setid(int i,Scheduler a[],int d)
{
a[d].t.id=i;

}
void Scheduler::setst(int s)
{
shortest_dur=s;
}
void Scheduler::setlt(int l)
{
longest_dur=l;
}
void Scheduler::setet(int e)
{
expected_dur=e;
}
void Scheduler::settd(int s,int l,int e,int in )
{
t.dur=(s+l+e)/3;
}
void Scheduler::sets_t(int e)
{
t.s_Time=e;
}
void Scheduler::sete_t(int e)
{
t.e_Time=e;
}

/*void Scheduler::sete_t(int e,int in)
{
t[in].list_dep=e;
}*/
int Scheduler::getid()
{
return t.id;
}
int Scheduler::getst()
{
return shortest_dur;
}
int Scheduler::getlt()
{
return longest_dur;
}
int Scheduler::getet()
{
return expected_dur;
}
int Scheduler::gettd( )
{
return t.dur;
}
int Scheduler::gets_t()
{
return t.s_Time;
}
int Scheduler::gete_t()
{
return t.e_Time;
}
/*int Scheduler::gete(int i)
{
return list_dep;
}*/

bool Scheduler::setTaskDuration(int s,int l,int e,Scheduler a[],int index)
{
//for(int i=0;i<index;i++)
a[index].t.dur=(s+l+e)/3;
return 1;
}
bool Scheduler::set_nth_TaskDuration(int t_id,int s,Scheduler a[],int l,int e,int index)
{
a[index].t.dur=(s+l+e)/3;
return 1;
}
void Scheduler::printTaskDependencyList(int t_id,Scheduler a[],int index)
{int t=0;
for(int i=0;i<index;i++)
{if(a[i].t.id==t_id)
{t=a[i].t.dur;
i=index;
}
}
for(int i=0;i<index;i++)
{if(a[i].t.dur<t)
cout<<"Task haing ID: ("<<t_id<<") depends on task having ID: ("<<a[i].t.id<<") and having time duration: "<<a[i].t.dur<<endl;
}
}
int Scheduler::completionTime(Scheduler s[],int index)
{int sum=0;
for(int i=0;i<index;i++)
sum=sum+s[i].t.dur;
return sum;
}
bool Scheduler::printCriticalTasks(Scheduler s[],int size,int arr[])
{
for(int i=0;i<size;i++)
{
arr[i]=s[i].t.dur;
}
return 1;
}


Scheduler::~Scheduler(){}












