#ifndef BOUQUET_H_
#define BOUQUET_H_
#include<iostream>
#include<string>
#include<cstring>
#include "Flower.h"
using namespace std;
class Bouquet {
	Flower Fptr;
	int count;
	//int MaxCount;
public:
Bouquet();
	Bouquet(int );
	Bouquet(const Bouquet&);
	Bouquet& operator=( Bouquet&);
	void operator +=(const Flower &);
	Bouquet operator +( Flower &);
	Bouquet operator -( Flower &);
	void operator -=( Flower &);
	bool operator ==( Bouquet &);
	bool parfume();
	float Price();
	const Flower& operator [](int) ;
	virtual ~Bouquet();
	int getCount() const;
	void setCount(int count);
Flower getf()const;
};

#endif /* BOUQUET_H_ */
Flower Bouquet::getf()const
{
return Fptr;
}
Bouquet::Bouquet()
{

count=0;
//Fptr=new Flower;

Fptr.setName("");
Fptr.setColor("");
Fptr.setBasicPrice(0);
Fptr.setPerfumed(0);
Fptr.setonsale(0);


}
Bouquet::Bouquet(int i)
{
count=i;
Fptr.setName("");
Fptr.setColor("");
Fptr.setBasicPrice(0);
Fptr.setPerfumed(0);
Fptr.setonsale(0);
}

Bouquet::Bouquet(const Bouquet& B1)
{
string s1,s2;
s2=B1.Fptr.getColor();
s1=B1.Fptr.getName();
count=B1.count;
int i=count;

Fptr.setName(s1);
Fptr.setColor(s2);
Fptr.setBasicPrice(B1.Fptr.getBasicPrice());
Fptr.setPerfumed(B1.Fptr.getPerfumed());
Fptr.setonsale(B1.Fptr.getonsale());
	
}


Bouquet& Bouquet::operator=( Bouquet& B1)
{
count=B1.count;

for(int i=0;i<count;i++)
{

Fptr.setName(B1.Fptr.getName());
Fptr.setColor(B1.Fptr.getColor());
Fptr.setBasicPrice(B1.Fptr.getBasicPrice());
Fptr.setPerfumed(B1.Fptr.getPerfumed());
Fptr.setonsale(B1.Fptr.getonsale());
}
return *this;	
}
void Bouquet::operator +=(const Flower & F1)
{string st1,st2,st3=" ";
st1=F1.getName();
st2=Fptr.getName();
int i=0,j=0,n=0;
st2.append(st3);
st2.append(st1);



this->Fptr.setName(st2);
st1=F1.getColor();
st2=Fptr.getColor();
st2.append(st3);
st2.append(st1);
 i=0,j=0;
n=0;



this->Fptr.setColor(st2);	
float p1=0,p2=0,p3=0;
if(F1.getonsale())
p1=F1.getBasicPrice()/2;
else
p1=F1.getBasicPrice();
if(Fptr.getonsale())
p2=Fptr.getBasicPrice();
else
p2=Fptr.getBasicPrice();
p3=p1+p2;
this->Fptr.setBasicPrice(p3);
bool b1,b2,b3;
b1=F1.getPerfumed();
b2=Fptr.getPerfumed();
if(b1||b2)
b3=1;
else
b3=0;
this->Fptr.setPerfumed(b3);
b1,b2,b3;
b1=F1.getonsale();
b2=Fptr.getonsale();
if(b1||b2)
b3=1;
else
b3=0;
this->Fptr.setonsale(b3);
}

Bouquet Bouquet::operator +( Flower & F1)
{
string st1,st2,st3=" ";
st1=F1.getName();
st2=Fptr.getName();
int i=0,j=0,n=0;
st2.append(st3);
st2.append(st1);
char *s3,*s2,*s1;
s1=new char;
s2=new char;
s3=new char;
while(Fptr.getName()[n]!='\0')
{s3[n]=Fptr.getName()[n];
n++;
}


this->Fptr.setName(st2);
st1=F1.getColor();
st2=Fptr.getColor();
st2.append(st3);
st2.append(st1);
 i=0,j=0;
n=0;
while(Fptr.getColor()[n]!='\0')
{s3[n]=Fptr.getColor()[n];
n++;}
n=0;
while(F1.getColor()[n]!='\0')
{s2[n]=F1.getColor()[n];
n++;}

while(s3[i]='\0')
{
s1[i]=s3[i];
i++;
}

while(s2[i]!='\0')
{
s1[i]=s2[i];
++i;

}
this->Fptr.setColor(st2);	
float p1=0,p2=0,p3=0;
if(F1.getonsale())
p1=F1.getBasicPrice()/2;
else
p1=F1.getBasicPrice();
if(Fptr.getonsale())
p2=Fptr.getBasicPrice();
else
p2=Fptr.getBasicPrice();
p3=p1+p2;
this->Fptr.setBasicPrice(p3);
bool b1,b2,b3;
b1=F1.getPerfumed();
b2=Fptr.getPerfumed();
if(b1||b2)
b3=1;
else
b3=0;
this->Fptr.setPerfumed(b3);
b1,b2,b3;
b1=F1.getonsale();
b2=Fptr.getonsale();
if(b1||b2)
b3=1;
else
b3=0;
this->Fptr.setonsale(b3);
return *this;	
}

Bouquet Bouquet::operator -( Flower & F1)
{
string st1,st2,st3=" ";
st1=F1.getName();
st2=Fptr.getName();
int a,b,c;
a=st1.size();
b=st2.size();
c=b-a;
int i=0,j=0,n=0;
char *s2,*s1;
s1=new char;
s2=new char;

for(int k=0;k<c;k++)
{s1[k]=st2[k];

}


this->Fptr.setName(s1);
st1=F1.getColor();
st2=Fptr.getColor();
a=st1.size();
b=st2.size();
c=b-a;
 i=0,j=0;
n=0;

for(int k=0;k<c;k++)
{s1[k]=st2[k];

}



this->Fptr.setColor(s1);	
float p1=0,p2=0,p3=0;
if(F1.getonsale())
p1=F1.getBasicPrice();
else
p1=F1.getBasicPrice()/2;
if(F1.getonsale())
p2=Fptr.getBasicPrice();
else
p2=Fptr.getBasicPrice();
p3=p2-p1;
this->Fptr.setBasicPrice(p3);
bool b1,b2,b3;
b1=F1.getPerfumed();
b2=Fptr.getPerfumed();
if(b1&&b2)
b3=1;
else
b3=0;
this->Fptr.setPerfumed(b3);

b1,b2,b3;
b1=F1.getonsale();
b2=Fptr.getonsale();
if(b1||b2)
b3=1;
else
b3=0;
this->Fptr.setonsale(b3);
return *this;		
}

void Bouquet::operator -=( Flower & F1)
{string st1,st2,st3=" ";
st1=F1.getName();
st2=Fptr.getName();
int a,b,c;
a=st1.size();
b=st2.size();
c=b-a;
int i=0,j=0,n=0;
char *s2,*s1;
s1=new char;
s2=new char;

for(int k=0;k<c;k++)
{s1[k]=st2[k];

}


this->Fptr.setName(s1);
st1=F1.getColor();
st2=Fptr.getColor();
a=st1.size();
b=st2.size();
c=b-a;
 i=0,j=0;
n=0;

for(int k=0;k<c;k++)
{s1[k]=st2[k];

}



this->Fptr.setColor(s1);	
float p1=0,p2=0,p3=0;
if(F1.getonsale())
p1=F1.getBasicPrice();
else
p1=F1.getBasicPrice()/2;
if(F1.getonsale())
p2=Fptr.getBasicPrice();
else
p2=Fptr.getBasicPrice();
p3=p2-p1;
this->Fptr.setBasicPrice(p3);
bool b1,b2,b3;
b1=F1.getPerfumed();
b2=Fptr.getPerfumed();
if(b1&&b2)
b3=1;
else
b3=0;
this->Fptr.setPerfumed(b3);
b1,b2,b3;
b1=F1.getonsale();
b2=Fptr.getonsale();
if(b1||b2)
b3=1;
else
b3=0;
this->Fptr.setonsale(b3);
}

bool Bouquet::operator ==( Bouquet & B1) {
if(this->Fptr.getName()==B1.Fptr.getName())
{if(this->Fptr.getColor()==B1.Fptr.getColor())
{
return 1;
}}
return 0;

}
bool Bouquet::parfume()
{
if(this->Fptr.getPerfumed())
return 1;
else
return 0;	
}
float Bouquet::Price()
{
return this->Fptr.getBasicPrice();
}

const Flower& Bouquet::operator [](int i) 
{
return this->Fptr;	
}

int Bouquet::getCount() const {
return count;	
}

void Bouquet::setCount(int coun) {
count=coun;
}

Bouquet::~Bouquet() {
	// TODO Auto-generated destructor stub
}
ostream& operator<<(ostream& out, const Flower &F1)
{
	if (F1.getBasicPrice() != 0)
		cout << F1.getName() << " " << F1.getColor() << " " << F1.isPerfumed() << " Price :" << F1.getBasicPrice() << "Rs\n";
	return out;
}
ostream& operator<<(ostream& out, const Bouquet &B1)
{
	cout << '\n';
	for (int x = 0; x < B1.getCount(); x += 1)
	{
		cout << B1.getf();
	}
	return out;
}
