#include<iostream>
#include<string>


using namespace std;
#ifndef ANIMAL_H
#define ANIMAL_H
class animal {
protected:
string name;
int age;
public:
animal();
animal(string , int);
void set_value(string, int);
void print()const;
~animal();
};
#endif
animal::animal(){
name="\0";
age=0;
}
animal::animal(string n , int a)
{
//name=new char;
name=n;
age=a;

}
void animal::set_value(string n, int a)
{

name=n;
age=a;


}
void animal::print()const{
cout<<"name is: "<<name<<"      age Is: "<<age;

}
animal::~animal(){};
