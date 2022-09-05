#include<iostream>
#include<string>
using namespace std;
#ifndef att_H
#define att_H
class attributedNode2
{
protected:
string location;
string profession;

public:
attributedNode2()
{location="";
profession="";
cout<<"constractor of AttributeNode2"<<endl;
}
void setlocation(string s);
void setprofession(string s);
string getlocation()const;
string getprofession()const;


//add setter and getter functions
~attributedNode2();
};
#endif
