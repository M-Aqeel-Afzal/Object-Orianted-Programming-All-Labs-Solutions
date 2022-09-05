#include<iostream>
#include"file.h"
//#include"Date.h"

using namespace std;
int main()
{
/* 
Functionality by using paramitrized constractor

*/
cout<<"\n\n Functionality using peramitrized constractor\n\n"<<endl;
Date d1(2,6,2020);
string s1="Ali";
string s2="Sector I9/4,Islamabad,Pakistan";
TeamLeader l1(s1,s2,7,d1,2,10,8,9,10);
l1.print();


/* 
Functionality by using Default constractor

*/
cout<<"\n\n Functionality using Default constractor\n\n"<<endl;
Date d2;
TeamLeader t2;
t2.print();


return 0;
}
