#include<iostream>
using namespace std;
//**********q3***************
int sum_of_Perfect(int num,int mid)
{
int s=mid;
if(mid==1)
{//s=s+1;
return 1;}
else 
{
if(num%mid==0)
return s=s+sum_of_Perfect(num,mid-1);
else
return sum_of_Perfect(num,mid-1);
}

}



