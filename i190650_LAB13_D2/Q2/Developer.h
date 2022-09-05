/*
 * Developer.h
 *
 *  Created on: Apr 15, 2020
 *      Author: Tayyaba
 */

#ifndef DEVELOPER_H_
#define DEVELOPER_H_
#include"Employee.h"
class Developer:public Employee
{
private:
	int salary;

public:
	Developer():Employee()
{
salary=0;
}
	Developer( int Emp_no, int salar):Employee(Emp_no)
{
salary=salar;

}
	int getSalary()
{
return salary;
}
        void setSalary(int s)

{
salary=s;

}
	

};

#endif /* DEVELOPER_H_ */
