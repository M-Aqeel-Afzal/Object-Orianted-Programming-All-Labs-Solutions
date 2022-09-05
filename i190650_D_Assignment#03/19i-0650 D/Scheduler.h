#ifndef SCHEDULER_H
#define SCHEDULER_H
#include<cstring>
#include<iostream>
using namespace std;
struct task{
int id;
int dur;
int s_Time; //start time of each task
int e_Time; //end time of each task
int* dep; /*list of predecessors of this task - To simplify we assume that a higher
number task will depend on a lower number task e.g. T2 can depend on T1 OR T4 can
depend on T2 but the opposite is not true.*/
};
class Scheduler{
private:
task t;
int shortest_dur;
int longest_dur;
int expected_dur;
int list_dep;
public:

// provide definitions of following functions...
Scheduler();
Scheduler(task* ts, int n );
void setid(int i,Scheduler a[],int d );

void setst(int s);
void setlt(int l);
void setet(int e);
void settd(int ,int ,int ,int );
void sets_t(int );
void sete_t(int );
void setttask(int,Scheduler);
int getid();
int getst();
int getlt();
int getet();
int gettd( );
int gets_t();
int gete_t();
int getttask();
~Scheduler();
bool setTaskDuration(int s,int l,int e,Scheduler a[],int index);
bool set_nth_TaskDuration(int t_id,int s,Scheduler a[],int l,int e,int index);
void printTaskDependencyList(int t_id,Scheduler a[],int index);
int completionTime(Scheduler s[],int index);
bool printCriticalTasks(Scheduler s[],int size,int arr[]);
//void settotaltask(int i);
};
#endif
