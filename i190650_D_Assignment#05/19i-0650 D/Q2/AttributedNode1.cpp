#include"AttributedNode1.h"
void attributedNode1::setgender(char c)
{
gender=c;

}
void attributedNode1::setage(int a)
{

age=a;
}
char attributedNode1::getgender()const
{

return gender;

}
int attributedNode1::getage()const
{

return age;
}
attributedNode1::~attributedNode1(){

cout<<"destractor of AttributeNode1"<<endl;}
