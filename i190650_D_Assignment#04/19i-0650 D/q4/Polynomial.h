/*
 * Polynomial.h
 *
 *  Created on: Mar 30, 2020
 *      Author: aqeel
 */

#ifndef POLYNOMIAL_H_
#define POLYNOMIAL_H_

class Polynomial {
	int *c_arr;
	int dgri;
public:
	Polynomial();
	Polynomial(int);
	~Polynomial();
	int getdgri()const;
	void setdgri(int);
	int getarr(int)const;
	void setarr(int,int);
	Polynomial(const Polynomial &other);
	Polynomial operator=(const Polynomial &p1);
	bool operator==(const Polynomial &p1);
	Polynomial operator+(const Polynomial &p1);
	Polynomial operator-(const Polynomial &p1);
	void operator+=(const Polynomial &p1);
	void operator-=(const Polynomial &p1);
};

#endif /* POLYNOMIAL_H_ */
