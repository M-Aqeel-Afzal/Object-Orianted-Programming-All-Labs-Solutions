
#include<string>
#include<iostream>
using namespace std;
class Zebra:public virtual animal
{
public:
Zebra();
Zebra(string n,int a);
void set_value(string,int );
void print()const;
~Zebra(){};



};
Zebra::Zebra():animal()
{
}
Zebra::Zebra(string n,int a):animal(n,a)
{


}
void Zebra::set_value(string n,int a)
{

animal::set_value(n,a);



}
void Zebra::print()const
{

animal::print();
cout<<"       "<<name<<"  is from India "<<endl;

}
