#include<iostream>
#ifndef att_H
#define att_H
class attributedNode1
{
protected:
char gender;
int age;

public:
attributedNode1()
{gender='\0';
age=0;
cout<<"constractor of AttributeNode1"<<endl;
}
void setgender(char c);
void setage(int a);
char getgender()const;
int getage()const;


//add setter and getter functions
~attributedNode1();
};
#endif
