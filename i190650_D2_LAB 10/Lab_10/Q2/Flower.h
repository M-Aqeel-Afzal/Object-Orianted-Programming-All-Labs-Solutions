
#ifndef FLOWER_H_
#define FLOWER_H_
#include<iostream>
#include<string>
using namespace std;
class Flower {
	string name;
	string color;
	float BasicPrice;
	bool perfumed;
	bool OnSale;
public:
	Flower();
	Flower(const string&, const string&, const float&, bool = false, bool = false);
	void init(const string&, const string&, const float&, bool perfumed, bool OnSale);
	bool operator ==(const Flower&);
	virtual ~Flower();
	float getBasicPrice()const;
	void setBasicPrice(float basicPrice);
	const string& getColor() const;
	void setColor(const string& color);
	const string& getName() const;
	void setName(const string& name);
	bool isOnSale() const;
	void setOnSale(bool onSale);
	bool isPerfumed() const;
	void setPerfumed(bool perfumed);
};

#endif /* FLOWER_H_ */


Flower::Flower() {
}


Flower::Flower(const string& n, const string& c, const float& price, bool perfumed, bool OnSale) {
	// TODO Auto-generated constructor stub

}
void Flower::init(const string& n, const string& c, const float& price, bool perfumed, bool OnSale)
{

}

float Flower::getBasicPrice()const {

}

bool Flower::operator ==(const Flower& F1)
{

}

void Flower::setBasicPrice(float basicPrice) {


}

const string& Flower::getColor() const {

}

void Flower::setColor(const string& color) {

}

const string& Flower::getName() const {

}

void Flower::setName(const string& name) {

}

bool Flower::isOnSale() const {
}

void Flower::setOnSale(bool onSale) {

}

bool Flower::isPerfumed() const {
}

void Flower::setPerfumed(bool perfumed) {
}

Flower::~Flower() {
	// TODO Auto-generated destructor stub
}

