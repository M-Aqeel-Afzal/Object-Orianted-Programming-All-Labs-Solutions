#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{//for writting files
string s1,s2,s3,c1,c2,c3="<",c4=">";
ofstream obj1,obj2;
obj1.open("f1.txt");
obj2.open("f2.txt");
cout<<"Enter a String for f1"<<endl;
cin>>s1;
obj1<<s1<<endl;
cout<<"Enter a String for f2"<<endl;
cin>>s2;
obj2<<s2<<endl;
obj1.close();
obj2.close();

//for reading files
ifstream obj3,obj4;
obj3.open("f1.txt");
obj4.open("f2.txt");
cout<<"Now Enter the String which you want to Compare"<<endl;
cin>>s3;
while(!obj3.eof()||!obj4.eof())
{getline(obj3,c1);
if(s3.compare(c1)==0)
{
s1=c3+c1;
cout<<"Output is: "<<s1<<endl;
break;
}
getline(obj4,c2);
if(s3.compare(c2)==0)
{
s1=c4+c2;
cout<<"Output is: "<<s1<<endl;
break;
}
else
{cout<<"wrong string"<<endl;
break;}

}

obj3.close();
obj4.close();
return 0;
}
