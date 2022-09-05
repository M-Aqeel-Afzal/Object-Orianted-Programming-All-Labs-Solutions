#include<iostream>
#include<cstring>
using namespace std;

struct SoccerPlayer
{ char PlayerName[20];
int Player_Number;
int Points_Scored;
};


int main()//main
{SoccerPlayer *arr=new SoccerPlayer;
SoccerPlayer *high=new SoccerPlayer;
int h=0;
int j=0,l=0;
char flag,flag1;
SoccerPlayer *array=new SoccerPlayer;
in:
cout<<"Choose any one option from these choices: "<<endl<<endl<<endl;
cout<<"(A):Add new player's infomation.\n(B):insert a new player.\n(C):Delete player's information.\n(D):Display players inforamtion in tabular form.\n(E):player Having most points.\n(F):exit the manu."<<endl<<endl;
cin>>flag;
switch(flag)//for cases
{
case 'a':
case 'A':
for(int i=0;i>=0;)
{cout<<"enter name of new player:"<<endl;
cin>>array[i].PlayerName;
cout<<"enter number of new player:"<<endl;
cin>>array[i].Player_Number;
	while(array[i].Player_Number<0)//loop for input validation
	{cout<<"you have enter wrong input"<<endl;
	cin>>array[i].Player_Number;

	}
cout<<"enter points scored by the new player:"<<endl<<endl;
cin>>array[i].Points_Scored;
		while(array[i].Points_Scored<0)//loop for input validation
		{cout<<"you have enter wrong input"<<endl;
		cin>>array[i].Points_Scored;

		}
if(high[l].Points_Scored<array[i].Points_Scored)//condition for finding high points
{high[l]=array[i];
++l;
}
arr[j]=array[i];
++j;
cout<<"Do you like to enter information of Another new player?\"Y\"or\"N\""<<endl;
cin>>flag1;
if(flag1=='Y'||flag1=='y')
++i;
else
goto in;}
break;
case 'b':
case 'B':
for(int i=0;i>=0;)
{cout<<"enter location where you want to save new player's infomation like(index):"<<endl;
cin>>i;
cout<<"enter name of new player:"<<endl;
cin>>array[i].PlayerName;
cout<<"enter number of new player:"<<endl;
cin>>array[i].Player_Number;
if(array[i].Player_Number<0)
{cout<<"you have enter wrong input"<<endl;
cin>>array[i].Player_Number;

}
cout<<"enter points scored by the new player:"<<endl<<endl;
cin>>array[i].Points_Scored;
if(array[i].Points_Scored<0)
{cout<<"you have enter wrong input"<<endl;
cin>>array[i].Points_Scored;

}
if(high[l].Points_Scored<array[i].Points_Scored)
{high[l]=array[i];
++l;
}
arr[j]=array[i];
++j;
cout<<"Do you like to enter information of Another new player?\"Y\"or\"N\""<<endl;
cin>>flag1;
if(flag1=='Y'||flag1=='y')
++i;
else
goto in;}
break;

case 'c':
case 'C':
for(int i=0;i>=0;)
{cout<<"enter location where you want to delete a player's infomation like(index):"<<endl;
cin>>i;
for(int s=l-1;s>=0;s--)
{
if(array[i].Points_Scored==high[s].Points_Scored)
high[s].Points_Scored=0;
}
for(int s=j-1;s>=0;s--)
{
if(array[i].Points_Scored==arr[s].Points_Scored)
arr[s].Points_Scored=0;
strcpy(arr[s].PlayerName,"'\0'");

arr[s].Player_Number=0;

}
strcpy(array[i].PlayerName,"'\0'");

array[i].Player_Number=0;

array[i].Points_Scored=0;
cout<<"Do you like to delete information of Another  player?\"Y\"or\"N\""<<endl;
cin>>flag1;
if(flag1=='Y'||flag1=='y')
++i;
else
goto in;}
break;
case 'd':
case 'D':
cout<<"Information of All players"<<endl;
for(int k=j-1;k>=0;k--)
{
cout<<"name: "<<arr[k].PlayerName<<"          palyer number:"<<arr[k].Player_Number<<"             "<<"points  "<<arr[k].Points_Scored<<endl<<endl<<endl;
}
goto in;
case 'e':
case 'E':
cout<<"player having highest points is:"<<endl;
///high[l-1].Points_Scored;
for(int s=l;s>=0;s--)
{
if(high[s-1].Points_Scored>high[s].Points_Scored)
{h=high[s-1].Points_Scored;
high[s-1].Points_Scored=high[s].Points_Scored;
high[s].Points_Scored=h;
}}
cout<<endl<<endl<<endl<<endl;
if(high[l].Points_Scored==0)
cout<<"no player"<<endl;
else
cout<<high[l].PlayerName<<"    points"<<high[l].Points_Scored<<endl<<endl<<endl<<endl<<endl;
goto in;
break;
case 'f':
case 'F':
break;
default:
{cout<<"you have enter wrong chioce try again!"<<endl<<endl<<endl;
goto in;}
}
return 0;
}
