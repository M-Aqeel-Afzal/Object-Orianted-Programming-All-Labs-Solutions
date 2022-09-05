
#ifndef FLOWER_H_
#define FLOWER_H_
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
class Flower {
	string name;
	string color;
	float BasicPrice;
	bool perfumed;
	bool OnSale;
public:
	Flower();
	Flower(const string& num, const string& colo, const float&, bool = false, bool = false);
	void init(const string& num, const string& colo, const float&, bool perfumed, bool OnSale);
	bool operator ==(const Flower&);
	virtual ~Flower();
	float getBasicPrice()const;
	void setBasicPrice(float basicPrice);
const string& getColor() const;
	void setColor( char* &colo);
void setColor(const string& colo);
	const string& getName() const;
	void setName( char* &nam);
void setName(const string& nam);
	bool isOnSale() const;
	void setOnSale(bool onSale);
	bool isPerfumed() const;
	void setPerfumed(bool perfumed);
void setonsale(bool ons);
bool getonsale()const;
bool getPerfumed()const;
};

#endif /* FLOWER_H_ */


Flower::Flower() {
name="";
color="";
BasicPrice=0;
perfumed=0;
OnSale=0;
}
void Flower::setonsale(bool ons)
{
OnSale=ons;
}
bool Flower::getonsale()const
{
return OnSale;

}
bool Flower::getPerfumed()const
{
return perfumed;
}

Flower::Flower(const string& num, const string& colo, const float& price, bool perf, bool onsal) 
{
int i=0;
/*while(colo[i]!='\0')
{color[i]=colo[i];
i++;}
i=0;
while(num[i]!='\0')
{name[i]=num[i];
i++;}
*/
name=num;
color=colo;
BasicPrice=price;
perfumed=perf;
OnSale=onsal;
}
void Flower::init(const string& num, const string& colo, const float& price, bool perf, bool onsal)
{name=num;
color=colo;
/*
int i=0;
while(colo[i]!='\0')
{color[i]=colo[i];
i++;}
i=0;
while(num[i]!='\0')
{name[i]=num[i];
i++;}
*/
BasicPrice=price;
perfumed=perf;
OnSale=onsal;
}

float Flower::getBasicPrice()const {
return BasicPrice;
}

bool Flower::operator ==(const Flower& F1)
{
int a,b,c,d;
a=name.size();
b=F1.name.size();
c=color.size();
d=F1.color.size();

if(a==b&&c==d&&perfumed==F1.perfumed)
return 1;
else
return 0;

}

void Flower::setBasicPrice(float basicPric) {

if(OnSale)
BasicPrice=basicPric/2;
else
BasicPrice=basicPric;
}

const string& Flower::getColor() const {
return color;
}
void Flower::setColor(const string& colo) {
int i=0;
this->color=colo;
/*while(colo[i]!=NULL)
{
this->color[i]=colo[i];
i++;
if(colo[i]==NULL)
this->color[i]=' ';
}
cout<<colo[0];*/
}
void Flower::setColor( char* &colo) {
int i=0;
this->color=colo;
/*while(colo[i]!='\0')
{
color[i]=colo[i];
i++;
if(colo[i]!='\0')
color[i]=' ';
}*/
}

const string& Flower::getName() const {
//cout<<"**"<<name<<endl;
return name;
}
void Flower::setName(const string&  num) {
int i=0;
this->name=num;
}
void Flower::setName( char*  &num) {
int i=0;
this->name=num;

}

bool Flower::isOnSale() const {
if(OnSale)
return 1;
else
return 0;
}

void Flower::setOnSale(bool onSale) {
OnSale=onSale;
}

bool Flower::isPerfumed() const {
if(perfumed)
return 1;
else
return 0;
}

void Flower::setPerfumed(bool perfume) {
perfumed=perfume;
}

Flower::~Flower() {
	// TODO Auto-generated destructor stub
}

