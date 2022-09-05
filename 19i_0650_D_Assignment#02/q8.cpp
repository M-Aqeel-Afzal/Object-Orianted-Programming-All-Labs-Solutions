#include<iostream>
using namespace std;
struct Tempe{

double max_temp;
double min_temp;
};
struct Rainfall{
int max_rainfall;
int min_rainfall;
};
struct weather{
Rainfall totalrain;
Tempe temp;
};
void inputfun(weather &s, int size )//  input funtion for all data input.
{//int size=1;
cout<<"enter maximum temperature of month: "<<size+1<<endl;
 cin>>s.temp.max_temp;
	while(s.temp.max_temp<-100||s.temp.max_temp>140)//loop for limitation of max temp.
	{cout<<endl<<"*******oops you enter wrong entry please! enter again (in range -100C to 140C)*********"<<endl;
	cin>>s.temp.max_temp;
	}
cout<<"enter minimum temperature of month: "<<size+1<<endl;
    cin>>s.temp.min_temp;
		while(s.temp.min_temp<-100||s.temp.min_temp>140)//loop for limitation of min temp.
		{cout<<endl<<"*******oops you enter wrong entry please! enter again (in range -100C to 140C)*********"<<endl;
		cin>>s.temp.min_temp;
		}
cout<<"enter maximum rainfall of month: "<<size+1<<endl;
    cin>>s.totalrain.max_rainfall;
			while(s.totalrain.max_rainfall<1||s.totalrain.max_rainfall>25)//loop for limitation of max rainfall.
			{cout<<endl<<"*******oops you enter wrong entry please! enter again (in range 1mm to 				25mm)*********"<<endl;
			cin>>s.totalrain.max_rainfall;
			}
cout<<"enter minimum rainfall of month: "<<size+1<<endl;
    cin>>s.totalrain.min_rainfall;
				while(s.totalrain.min_rainfall<1||s.totalrain.min_rainfall>25)//loop for limitation of min 					rainfall.
				{cout<<endl<<"*******oops you enter wrong entry please! enter again (in range 1 to 					25)*********"<<endl;
				cin>>s.totalrain.min_rainfall;
				}
}
double avgtempermonth(weather &s,int size)     //function for calculating avarage temp of each month.
{double avg;
avg=s.temp.max_temp+s.temp.min_temp;
avg=avg/2;
return avg;
}
double avgrainfallpermonth(weather &s,int size)      //function for calculating avarage rainfall of each month.
{double avg;
avg=s.totalrain.max_rainfall+s.totalrain.min_rainfall;
avg=avg/2;
return avg;
}
void printdata( double &avg_t,double &avg_r,int i)    //function for printing table of data
{
cout<<"  avarage temperature of month:"<<i+1<<"    ";
cout<<avg_t;
cout<<"        avarage rainfall of month:"<<i+1<<"    ";
cout<<avg_r<<endl;
}
int main()
{
weather *w=new weather[12];
double *avgtemp=new double[12];
double *avgrainfall=new double[12];
double year_avg_temp=0,year_avg_rain=0;
for(int i=0;i<12;i++) //loop for calling input funtion
{
inputfun(w[i],i);
}
	for(int i=0;i<12;i++)//loop for calling avg of temp of each month funtion
	{
	avgtemp[i]=avgtempermonth(w[i],i);
	}
 		for(int i=0;i<12;i++)//loop for calling avg of rainfall of each month funtion
		{
		avgrainfall[i]=avgrainfallpermonth(w[i],i);
		}
			for(int i=0;i<12;i++)//loop for calculating avg per year funtion
			{
			year_avg_temp= year_avg_temp+avgtemp[i];
			year_avg_rain= year_avg_rain+avgrainfall[i];
			}
for(int i=0;i<12;i++)//loop for calling printing data funtion
{
printdata(avgtemp[i],avgrainfall[i],i);
}
cout<<endl<<"avarage temperature of entire year:"<<year_avg_temp/12<<endl<<endl;	
cout<<endl<<"avarage rainfall of entire year:"<<year_avg_rain/12<<endl<<endl;	
return 0;
}










