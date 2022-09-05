/*
 * Driver.h
 *
 *  Created on: Apr 15, 2020
 *      Author: Tayyaba
 */

#ifndef DRIVER_H_
#define DRIVER_H_
#include"Employee.h"
class Driver:public Employee
{
private:
	int Salary;

public:
	Driver():Employee()
{
Salary=0;
}
	Driver( int Emp_no, int salary):Employee(Emp_no)
{
Salary=salary;
}
	int getSalary()
{
return Salary;
}
        void setSalary(int s)
{
Salary=s;
}
	

};

#endif /* DRIVER_H_ */
