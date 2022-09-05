#include "Array.cpp"
#include<iostream>
#include<cstdlib>
using namespace std;
int main(int argc, char **argv) {
Array a1;//by default
int v1,v;
cout<<"enter size for array four,two ant three"<<endl;

cin>>v1;
Array a4(v1);
int ar[v1];
for(int i=0;i<v1;i++)
	ar[i]=rand()%9;

Array a2(v1);//by one parameter
Array a3(ar,v1);//by two parameters

cout<<"functionality of operator >> is "<<endl;
cin>>a2;
cout<<"functionality of operator << is "<<endl;
cout<<"Array one is: "<<a1<<endl;
cout<<"Array two is: "<<a2<<endl;
cout<<"Array three is: "<<a3<<endl;
cout<<"Array four is: "<<a3<<endl;
cout<<"functionality of operator [] is "<<endl;
v=a2[2];
cout<<v<<endl;
Array a5=a2;
cout<<"functionality of operator = is "<<endl;
a3=a2;
cout<<" now Array three is: "<<a3<<endl;
cout<<"functionality of operator + is "<<endl;
a4=a2+a3;
cout<<" now Array four is: "<<a4<<endl;
cout<<"functionality of operator - is "<<endl;
a4=a2-a3;
cout<<" now Array four is: "<<a4<<endl;
cout<<"functionality of operator pre ++ is "<<endl;
cout<<++a2;
cout<<"functionality of operator post ++ is "<<endl;
cout<<a2++;
cout<<"functionality of operator pre -- is "<<endl;
cout<<--a2;
cout<<"functionality of operator post -- is "<<endl;
cout<<a2--;
cout<<"functionality of operator  += is "<<endl;
a2+=a3;
cout<<a2;
cout<<"functionality of operator  -= is "<<endl;
a2-=a3;
cout<<a2;
cout<<"functionality of operator  == is "<<endl;
cout<<a2<<a3;
bool b=a2==a3;
if(b)
	cout<<"true"<<endl;
else
	cout<<"false"<<endl;
cout<<"functionality of operator  index is "<<endl;
cout<<"enter required index"<<endl;
cin>>v;
int v2=a2(v,v1);
if(v2==1)
	cout<<"value is earesed"<<endl;
else
	cout<<"value is not earesed"<<endl;
cout<<" now Array two is: "<<a2<<endl;
	return 0;
}

