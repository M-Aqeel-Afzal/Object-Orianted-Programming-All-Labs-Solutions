#include<iostream>
using namespace std;
//***************q1***********
int fac(int k)
{
int flag=k;
if(k==1)
return 1;
else
{
return flag=flag*fac(k-1);
}
}
int rec_ncr(int n,int r)
{int f=0,g=0,t=0;

f=fac(n);
g=fac(r);
g=g*fac(n-r);
t=f/g;
return t;

}
