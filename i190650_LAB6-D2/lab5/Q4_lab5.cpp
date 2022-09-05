#include<iostream>
#include<cstring>
using namespace std;
class car
{public:
string regno;
int entrytime;
int exittime;
public:
void setregno(string r)
{
regno=r;
}
void setentime(int e)
{
entrytime=e;
}
void setextime(int t)
{
exittime=t;
}
string getregno()
{
return regno;
}
int getentime()
{
return entrytime;
}
int getextime()
{
return exittime;
}


};
class ParkingGarage
{public:
int const capacity;
int noOfOccupied;
 car *carPointer;
double amountCollected ;
public:
 ParkingGarage():capacity(5)
 {

 noOfOccupied=0;
carPointer=new car[capacity];
 amountCollected =0;
 }
ParkingGarage(int s):capacity(s)
 {

 noOfOccupied=0;
carPointer=new car[capacity];
 amountCollected =0;
 }
void setRemainingCapacity(int d)
{
noOfOccupied=d;
}
int getRemainingCapacity()
 {int remaining;
remaining=capacity-noOfOccupied;
return remaining;
 }
  
 double getAmountCollected() 
 {
return amountCollected;
 }
bool isFull(int size,int index)
 {
if(size==(index-1))
return true;
else
return false;

 }
bool ParkCar( string &regnNumber,int entryTime )
 {
if(isFull(capacity,noOfOccupied)==true)
return false;
else
	{
	carPointer[noOfOccupied].regno=regnNumber;
	carPointer[noOfOccupied].entrytime=entryTime;
	}
noOfOccupied--;
}

bool charge( string &regnNumber,int exittime )
 {int k;
	for(int i=0;i<capacity;i++)
	{	if(regnNumber==carPointer[i].regno)
		{	fat:
			if(carPointer[i].entrytime<exittime)
				{k=exittime-carPointer[i].entrytime;
				amountCollected =amountCollected+(20*k);
				return 1;
				}
		else
		{cout<<"exlt time is less then entry time please enter right value"<<endl;
		cin>>exittime;
		goto fat;
		}
		}
	}
if(noOfOccupied==0)
return 0;
}


};

int main()
{bool v1,v2;
int j=0,c,oco=0,a=0;
char b;
string s;
int t1,t2;
//cout<<"do you want to specify capacity? y/n"<<endl;
//cin>>b;
//if(b=='y'||b=='Y')
//{cin>>c;
//ParkingGarage c1(c);}
//else
ParkingGarage c1(5);
in:
cout<<"choose one option:"<<endl;
cout<<"\n1:remove a car.\n2:add a car.\n3:exit the program\n\n"<<endl;
cin>>a;

switch(a)							//for manu showing
{

case 2:
v1=c1.isFull(c,oco);
if(v1==false)
{int i=1;
	while(i==1)
	{cout<<"enter regetration number:"<<endl;
	cin>>s;
	cout<<"enter entry time(in hours):"<<endl;
	cin>>t1;
	c1.ParkCar( s,t1);
	i=0;
	oco++;
	c1.setRemainingCapacity(oco);
	c1.getRemainingCapacity();
	oco++;
	goto in;
	}
}
else
cout<<"capacity is full"<<endl;
goto in;
break;

case 1:
cout<<"enter regetration number:"<<endl;
cin>>s;
cout<<"enter exit time(in hours):"<<endl;
cin>>t2;
oco--;
v2=c1.charge(s,t2);
c1.setRemainingCapacity(oco);
c1.getRemainingCapacity();


if(v2)
cout<<endl<<endl<<"                              amount calculated is: "<<c1.amountCollected<<endl;
else
cout<<"there is no any car in the grage"<<endl;
goto in;
case 3:
break;
default:
cout<<"wrong entry:"<<endl;
goto in;}
return 0;

}



