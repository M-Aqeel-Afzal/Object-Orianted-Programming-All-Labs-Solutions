#include"AttributedNode2.h"
#include<cstring>
using namespace std;
void attributedNode2::setlocation(string s)
{
location=s;

}
void attributedNode2::setprofession(string s)
{

profession=s;
}
string attributedNode2::getlocation()const
{

return location;

}
string attributedNode2::getprofession()const
{

return profession;

}
attributedNode2::~attributedNode2(){

cout<<"destractor of AttributeNode2"<<endl;}
