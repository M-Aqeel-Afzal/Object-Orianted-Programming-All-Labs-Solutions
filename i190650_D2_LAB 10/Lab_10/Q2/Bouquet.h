#ifndef BOUQUET_H_
#define BOUQUET_H_
#include<iostream>
#include<string>
#include "Flower.h"
using namespace std;
class Bouquet {
	Flower *Fptr;
	int count;
	int MaxCount;
public:
	Bouquet(int = 10);
	Bouquet(const Bouquet&);
	Bouquet& operator=(const Bouquet&);
	void operator +=(const Flower &);
	Bouquet operator +(const Flower &);
	Bouquet operator -(const Flower &);
	void operator -=(const Flower &);
	bool operator ==(const Bouquet &);
	bool parfume();
	float Price();
	const Flower& operator [](int) const;
	virtual ~Bouquet();
	int getCount() const;
	void setCount(int count);
};

#endif /* BOUQUET_H_ */



Bouquet::Bouquet(int i)
{
}

Bouquet::Bouquet(const Bouquet& B1)
{
	
}


Bouquet& Bouquet::operator=(const Bouquet& B1)
{
	
}
void Bouquet::operator +=(const Flower & F1)
{
	
}

Bouquet Bouquet::operator +(const Flower & F1)
{
	
}

Bouquet Bouquet::operator -(const Flower & F1)
{
	
}

void Bouquet::operator -=(const Flower & F1)
{
	
}


bool Bouquet::operator ==(const Bouquet & B1) {



}


bool Bouquet::parfume()
{
	
}
float Bouquet::Price()
{
	
}

const Flower& Bouquet::operator [](int i) const
{
	
}

int Bouquet::getCount() const {
	
}

void Bouquet::setCount(int count) {

}

Bouquet::~Bouquet() {
	// TODO Auto-generated destructor stub
}
