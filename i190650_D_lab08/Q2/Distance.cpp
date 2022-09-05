/*
 * Distance.cpp
 *
 *  Created on: Mar 10, 2020
 *      Author: aqeel
 */

#include "Distance.h"

Distance::Distance() {

feet=0;
inches=0;
}
Distance::Distance(int f,int i) {

if(i>=12)
{feet=i/12;
inches=i%12;
//feet=f;
}

}


Distance::~Distance() {

}

bool Distance::setFeet(int f)
{
	feet=f;
	return 1;

}
	int Distance::getFeet()const
	{
	return feet;

	}
			 bool Distance::setInches(int i)
			{

				inches=i;
				return 1;
			}
	int Distance::getInches()const
	{
		return inches;
	}
	Distance& Distance::operator+( Distance obj)
	{Distance *d6;
		d6->feet=this->feet+obj.feet;
		d6->inches=this->inches+obj.inches;
		return *d6;

	}
		Distance& Distance::operator-( Distance obj)
		{Distance *d6;
d6->feet=this->feet-obj.feet;
d6->inches=this->inches-obj.inches;
return *d6;


		}
		 Distance& Distance::operator=(const Distance &obj)
		{
this->feet=obj.feet;
this->inches=obj.inches;
return *this;
		}











