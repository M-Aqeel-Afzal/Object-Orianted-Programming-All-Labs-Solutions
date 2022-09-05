#include<iostream>
#include"SimpleGraph.h"
#include"SimpleNode.h"
#include"AttributedNode1.cpp"
#ifndef at_H
#define at_H
class attributeGraph1:public virtual SimpleGraph
{ protected:
attributedNode1 *arr_ag1;
public:
attributeGraph1(int n);

void appendAttribute();


void printGraphData();

void printneighbor(int id);
//Runtime polymorphism to override the SimpleGraph function of
//printNeighbor();

~attributeGraph1(); // handle the memory leakage by using virtual
//destructor both for based & derived class.
};
#endif




