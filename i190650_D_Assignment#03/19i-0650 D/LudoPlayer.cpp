#include<iostream>
#include<cstring>
#include"LudoPlayer.h"
#include<cstdlib>
#include<ctime>
using namespace std;
LudoPlayer::LudoPlayer()
{
x1=0;
y1=0;
color1=0;
//color2=0;
tokan1=1;
tokan2=2;

}

void LudoPlayer::setcolor(int c)
{
this->color1=c;
}
void LudoPlayer::update1(LudoPlayer &m)
{
if(m.y1<4&&m.x1<4)
m.y1++;
else if(m.y1==4&&m.x1<4)
{
m.y1=0;
m.x1++;
}
else if(m.x1==4&&m.y1<4)
m.y1++;
}

int LudoPlayer::getcolor()
{
return color1;
}
int LudoPlayer::getx1()
{
return this->x1;
}

int LudoPlayer::gety1()
{
return this->y1;
}

LudoPlayer::~LudoPlayer(){}
int v1=0;

int LudoPlayer::rollDice(LudoPlayer &m,int k){}
/*{
srand(time(0));
//for(int i=0;i<5;i++)
//{
	
	v1=1+(rand()%6);
cout<<"v "<<v1<<endl;//}
	return v1;
	

}*/
void LudoPlayer::checkPosition(LudoPlayer &m1,LudoPlayer &m2)
{
cout<<"position of player having color: "<<m1.color1<<" is at position ("<<m1.x1<<","<<m1.y1<<")\n\n"<<endl;
cout<<"position of player having color: "<<m2.color1<<" is at position ("<<m2.x1<<","<<m2.y1<<")\n\n"<<endl;


}
void LudoPlayer::displayActiveToken(LudoPlayer &m1)
{cout<<"***********active tokans***********"<<endl;
cout<<"active position of player having color: "<<m1.color1<<" is ("<<m1.x1<<","<<m1.y1<<")\n\n"<<endl;
}
void LudoPlayer::displayAllTokens(LudoPlayer &m1,LudoPlayer &m2)
{cout<<"\n\n***********active all tokans***********"<<endl;
cout<<"active position of player having color: "<<m1.color1<<" is ("<<m1.x1<<","<<m1.y1<<")\n\n"<<endl;
cout<<"active position of player having color: "<<m2.color1<<" is ("<<m2.x1<<","<<m2.y1<<")\n\n"<<endl;
}

















