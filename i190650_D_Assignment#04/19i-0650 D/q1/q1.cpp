
#include "Fraction.cpp"
#include<iostream>
using namespace std;
int main(int argc, char **argv) {
	bool b;
	Fraction f1(1,2);
	Fraction f2(2,3);
	Fraction f3(1,2);
cout<<"\n\n operation of +  operator"<<endl;
f3=f1+f2;
f2.display();
cout<<"\n\n operation of - operator"<<endl;
f3=f1-f2;
f2.display();
cout<<"\n\n operation of * operator"<<endl;
f3=f1*f2;
f2.display();
cout<<"\n\n operation of / operator"<<endl;
f3=f1/f2;
f2.display();
cout<<"\n\n operation of += operator"<<endl;
f1+=f2;
f1.display();
cout<<"\n\n operation of -= operator"<<endl;
f1-=f2;
f1.display();
cout<<"\n\n operation of *= operator"<<endl;
f1*=f2;
f1.display();
cout<<"\n\n operation of /= operator"<<endl;
f1/=f2;
f1.display();
cout<<"\n\n operation of == operator"<<endl;
b=f1==f2;
if(b)
cout<<"true"<<endl;
else
cout<<"false"<<endl;
cout<<"\n\n operation of != operator"<<endl;
b=f1!=f2;
if(b)
cout<<"true"<<endl;
else
cout<<"false"<<endl;
cout<<"\n\n operation of > operator"<<endl;
b=f1>f2;
if(b)
cout<<"true"<<endl;
else
cout<<"false"<<endl;

cout<<"\n\n operation of < operator"<<endl;
b=f1<f2;
if(b)
cout<<"true"<<endl;
else
cout<<"false"<<endl;

cout<<"\n\n operation of >= operator"<<endl;
b=f1>=f2;
if(b)
cout<<"true"<<endl;
else
cout<<"false"<<endl;

cout<<"\n\n operation of <= operator"<<endl;
b=f1<=f2;
if(b)
cout<<"true"<<endl;
else
cout<<"false"<<endl;
cout<<"\n\n operation of << operator"<<endl;
cout<<f1<<endl;
cout<<"\n\n operation of >> operator"<<endl;
cin>>f2;
cout<<"\n\n operation of pre ++ operator"<<endl;
cout<<++f2<<endl;
cout<<"\n\n operation of post ++ operator"<<endl;
cout<<f2++<<endl;
cout<<"\n\n operation of pre -- operator"<<endl;
cout<<--f2<<endl;
cout<<"\n\n operation of post -- operator"<<endl;
cout<<f2--<<endl;
cout<<"\n\n operation of post [] operator"<<endl;
cout<<"nomerator: "<<f2['n']<<endl;
cout<<"denomerator: "<<f2['d']<<endl;


	return 0;


}
