#include<string.h>
#include<iostream>
//****************q1(1)**********************
int Strlen( char * s1 )
// Returns t h e l e n g t h o f t h e s t r i n g i n number o f c h a r a c t e r s . 
{int a=0,i=0;
while(*(s1+i)!='\0')
{a++;
i++;
}
return a;
}
//*****************q1(2)********************
char* Strcpy(char *s1 , const char* s2 )
// C o p i e s s t r i n g s 2 i n t o a r r a y s 1 . The v a l u e o f s 1 i s r e t u r n e d . 
{
int a=0,i=0;
int b=0,j=0;
while(*(s2+i)!='\0')
{a++;
++i;
}
while(*(s1+j)!='\0')
{b++;
++j;
}

if(a>b)
{

s1=new char;




return s1;}


 i=0;
while(s1[i]!='\0')
{
s1[i]=s2[i];
i++;
}
return s1;}
//}
//for(int i=0;
//*****************q1(3)********************
char *Strncpy( char *s1 , const char *s2 , int n )
///∗ C o p i e s a t most n c h a r a c t e r s o f s t r i n g s 2 i n t o a r r a y s 1 .
//The v a l u e o f s 1 i s r e t u r n e d . ∗/
{int h=0;
char *s5;
int g=strlen(s2);
while(n>g)
n--;
s5=new char;
//s4=s5;
int i=0;
for( i=0;s1[i]!='\0';i++)
{s5[i]=s1[i];
}
//char *p=s5;
s1=new char;
for(int i=0;i<n;i++)
{
s1[i]=s2[i];
h++;
}
for(;s5[h]!='\0';h++)
{
s1[h]=s5[h];
}
//delete []s5;
return s1;
}
//*****************q1(4)*********************

char *StrCat (  char *s1 , const char * s2 )

{int i=0,j=0;
char * s3= new char;
while(s1[i]!='\0')
{
s3[i]=s1[i];
i++;
}
i=0;
 s1= new char;
while(s3[i]!='\0')
{
s1[i]=s3[i];
++i;
++j;}
i=0;
while(s2[i]!='\0')
{
s1[j]=s2[i];
++i;
++j;

}
return s1;
}
//*************q1(5)*********************
char * StrnCat( char *s1 , const char *s2 , int n )
{
int i=0,j=0;
char * s3= new char;
while(s1[i]!='\0')
{
s3[i]=s1[i];
i++;
}
i=0;
 s1= new char;
while(s3[i]!='\0')
{
s1[i]=s3[i];
++i;
++j;}
i=0;
while(i<n)
{
s1[j]=s2[i];
++i;
++j;

}
return s1;

}

//*************q1(6)*********************

int StrCmp( const char *s1 , const char * s2 )
{int sum1=0;
int sum2=0;
int i=0;
while(s1[i]!='\0')
{
sum1=sum1+s1[i];
i++;
}
i=0;
while(s2[i]!='\0')
{
sum2=sum2+s2[i];
i++;
}
if(sum1==sum2)
return sum1-sum2;
if(sum1>sum2)
return sum1-sum2;
if(sum1<sum2)
return sum1-sum2;
}

//*************q1(7)*******************

int StrnCmp( const char *s1 , const char * s2,int n )
{int sum1=0;
int sum2=0;
int i=0;
while(i<n)
{
sum1=sum1+s1[i];
i++;
}
i=0;
while(i<n)
{
sum2=sum2+s2[i];
i++;
}
if(sum1==sum2)
return sum1-sum2;
if(sum1>sum2)
return sum1-sum2;
if(sum1<sum2)
return sum1-sum2;
}

//**************q1(8)******************
char **StrTok(  char *s1 , const char s2 )
{
char *s4=new char;
char **s3=new char*;
for(int i=0;i<4;i++)
s3[i]=new char;
int i=0,j=0,k=0;
while(s1[i]!='\0')
{
if(s1[i]==s2)
{
for(int h=0;h<=k;h++)
s3[j][h]=s4[h];

char *s4=new char[k];
k=0;
j++;
}
else
{s4[k]=s1[i];
k++;}
i++;
 
}
if(k==3)
{
for(int h=0;h<3;h++)
s3[j][h]=s4[h];
}
else
{for(int h=0;h<=k;h++)
s3[j][h]=s4[h];}
return s3;
}
//***********q1(9)*********************
int StrFind( char *s1 , char *s2 )
{int s=0,d=0,j=0,k=0,l=1;
int a=strlen(s1);
int b=strlen(s2);
for(int i=0;s1[i]!='\0';i++,k++)
{
if(s1[i]==s2[j])
{
while(s2[j]!='\0')
{s=s+s1[k];
d=d+s2[j];
k++;
j++;}
if(d==s)
return i;
else
return -1;
}

}
}
//***********q1(10)*****************
char *SubStr( char *s1 , int pos, int len )
{int j=0;
char *s2=new char[len];
for(int i=pos;len>0;i++,j++,len--)
{
s2[j]=s1[i];

}
return s2;
}
























