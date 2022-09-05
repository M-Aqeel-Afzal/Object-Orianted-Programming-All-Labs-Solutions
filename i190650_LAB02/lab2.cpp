
#include <iostream>
using namespace std;
int sum(int *a,int s)
{int t=0;
for(int i=0;i<s;i++)
	t=t+ *(a+i);
return t;
	}


/*int main() {

	int arr[5]={9,5,-3,2,4};
	int s=sum(arr,5);
	cout<<s;
	return 0;
}*/
int reverse(int *arr,int size,int index)
{int s, arr2[size];
s=size;
arr+=s-1;	
   //your code here
for(int i=0;i<s;i++)
{arr2[i]=*(arr);
arr--;
}
int value=arr2[index];
return value;	
}
int myStrLen(char* s) 
{int a=0,n;
  //your code here
while(n=1)
{if(s=="/0")
{n=-1;
break;
}
a++;
}
return a;
}
bool find(int* begin, int* end, int value, int size)
{int n=1,i=0,b=0;	
while(n==1)
{if(value== *(begin+i))
{
n=0;
b=1;
return b;
break;}
if(value==*(end+i))
{n=0;
b=0;
return b;
}
}}	//your code here
int split(int a[],int size,int index)
{	int hieght1=0,hieght2=0,p,k,m=0;
int arr2[size+1];
for(int i=0;i<size;i++)
{if(*(a+i)>hieght1)
{hieght2=hieght1;
hieght1=*(a+i);}
if((*(a+i)<hieght1) && (*(a+i)>hieght2))
hieght2=*(a+i);
/*if(*(a+i)==hieght1)
*(a+i)=hieght2;*/
}

for(int j=0;j<size+1;j++)
{
if(hieght1==(hieght2+*(a+j)))
{p=hieght2;
k=*(a+j);}
}
for(int j=0;j<size+1;j++,m++)
{if(*(a+j)==hieght1)
{arr2[j]=p;
arr2[++j]=k;}
else
arr2[j]=*(a+m);
}





	//your code here	
int value=arr2[index];
return value;
}











