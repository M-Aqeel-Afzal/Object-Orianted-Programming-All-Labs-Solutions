
#include<string>
#include<iostream>
using namespace std;
class Dolphin:public virtual animal
{
public:
Dolphin();
Dolphin(string ,int );
void print();
~Dolphin(){};


};
Dolphin::Dolphin():animal()
{
}
Dolphin::Dolphin(string n,int a):animal(n,a)
{

}
void Dolphin::print()
{

animal::print();
cout<<"      "<<name<<"  is from Pakistan "<<endl;

}
