#include<string.h>
#include<iostream>
using namespace std;
//*************q2(1)******************
void countLetters( char *string, int *&array , int &size )

{
size=strlen(string);
int j=0,count=0,k=0,l=0;
array=new int[12];
dis:
while(string[l]!='\0')
{

int f=0;
while(string[f]!='\0')
{if(string[f]==string[l])
{count++;}
f++;}

if(count==0)
{
l++;
goto dis;
}
if(l==0)
{array[k]=count;
k++;}
for(int h=l-1;h>=0;)
{
if(string[l]==string[h])
{
l++;
count=0;
goto dis;
}
if(h==0)
{array[k]=count;
k++;}
h--;
}

l++;
count=0;
}
size=k;

}
//*****************q2(2)*******************
void countWordsBasedOnLength(  char *string, int *&array,int &size)
 {
int j=0,count=0,k=1,l=0,sp=0;
array=new int;
while(string[l]!='\0')
{
if(string[l]==' ')
count++;

l++;
}
array[0]=count;
sp=count;
count=0;
l=0;
for(int s=0;s<=sp;s++)
{while(string[l]!='\0')
{
j++;
if(j>sp)
sp=j;
if(string[l]==' '&&j==k)
{count=count+1;

l++;
j=0;
}
l++;
if(string[l]=='\0'&&j==k)
{count=count+1;
j=0;}
}
array[k]=count;
count=0;
l=0;
k++;
}}
//**************q2(3)****************
void countingUniqueWords( char *string, char **&uwards,int *&array,int &size)
{char *s1=new char;
int i=0,count=0,k=1;
s1[0]=string[0];
while(string[i]!='\0')
{
if(string[i]==' ')
{
s1[k]=string[i+1];
for(int h=0;s1[h]!='\0';h++)
{if(string[i+1]==s1[h])
	goto dis;
else
count++;
}dis:
k++;
}
i++;
}
size=count;

}






























