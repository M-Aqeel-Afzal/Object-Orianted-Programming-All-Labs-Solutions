#include"LudoPlayer.h"
#include"LudoPlayer.cpp"
#include<iostream>
#include<cstring>
#include<cstdlib>
#include<ctime>

using namespace std;
int main()
{int c1,c2,v1=1,v2=1;
bool v3=0,v4=0;
cout<<"this LoDo game is for only two players "<<endl;
cout<<"color for player one:"<<endl;
cin>>c1;
cout<<"color for player two:"<<endl;
cin>>c2;
LudoPlayer m1;
LudoPlayer m2;

m1.setcolor(c1);
m2.setcolor(c2);
srand(time(0));
while(m1.getx1()<=4&&m2.getx1()<=4)
{
cout<<"\n\n\n						?????????????new attempt????????????\n\n"<<endl;

v1=m1.rollDice(m1,v1);

for(int i=0;i<5;i++)
{
	
	v1=1+(rand()%6);}
if(v1==6)
v3=1;
if(v3)
{for(int i=0;i<5;i++)
	{
	m1.update1(m1);
	}

cout<<endl<<endl;
m1.displayActiveToken(m1);
cout<<" value is:"<<v1<<endl;
if(m1.getx1()==4&&m1.gety1()==4)
{cout<<"player one has won"<<endl;
break;}
}
v2=m2.rollDice(m2,v1);


for(int i=0;i<5;i++)
{

	v2=1+(rand()%6);}
if(v2==6)
v4=1;
if(v4)
{for(int i=0;i<v2;i++)
	{
	m2.update1(m2);
	}

cout<<endl<<endl;
m2.displayActiveToken(m2);
cout<<" value is:"<<v2<<endl;
if(m2.getx1()==4&&m2.gety1()==4)
{cout<<"player two has won"<<endl;
break;}
}
m1.displayAllTokens(m1,m2);


}
return 0;
}









