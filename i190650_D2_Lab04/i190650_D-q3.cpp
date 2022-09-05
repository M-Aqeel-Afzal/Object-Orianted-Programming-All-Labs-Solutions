#include<iostream>
#include<cstring>
using namespace std;
struct time
{
int hours;
int minets;
int seconds;



};
struct time timediffrencebetweentimepried(struct time start, struct time stop)
 {
struct time t;
t.hours=start.hours-stop.hours;
t.minets=start.minets-stop.minets;

t.seconds=start.seconds-stop.seconds;



return t;

}
int main()
{

struct time p1;
struct time p2;


cout<<"enter number of start hours"<<endl;
cin>>p1.hours;

cout<<"enter number of start minets"<<endl;
cin>>p1.minets;
cout<<"enter number of start seconds"<<endl;
cin>>p1.seconds;

cout<<"enter number of stop hours"<<endl;
cin>>p2.hours;

cout<<"enter number of stop minets"<<endl;
cin>>p2.minets;
cout<<"enter number of stop seconds"<<endl;
cin>>p2.seconds;
struct time p3;




p3=timediffrencebetweentimepried(p1, p2);
cout<<endl<<endl<<endl;
cout<<"diffrence in hours : "<<p3.hours<<endl;
cout<<"diffrence in minets : "<<p3.minets<<endl;
cout<<"diffrence in seconds : "<<p3.seconds<<endl;




return 0;
}
