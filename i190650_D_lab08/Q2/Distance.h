/*
 * Distance.h
 *
 *  Created on: Mar 10, 2020
 *      Author: aqeel
 */

#ifndef DISTANCE_H_
#define DISTANCE_H_

class Distance {
	int feet;
	int inches;

public:

	Distance();
	Distance(int,int);
	virtual ~Distance();
	//Distance(const Distance &other);
	bool setFeet(int f);
	int getFeet()const;
			bool setInches(int i);
	int getInches()const;
	Distance& operator+(const Distance obj);
	Distance& operator-(const Distance obj);
	 Distance& operator=(const Distance &obj);
};

#endif /* DISTANCE_H_ */
