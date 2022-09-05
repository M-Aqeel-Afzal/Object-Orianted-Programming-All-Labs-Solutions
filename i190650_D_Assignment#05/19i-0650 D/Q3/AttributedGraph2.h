#include<iostream>
#include"SimpleGraph.h"
#include"SimpleNode.h"
#include"AttributedNode2.cpp"
#ifndef at_H
#define at_H
class attributeGraph2:public virtual SimpleGraph
{ protected:
attributedNode2 *arr_ag1;
public:
attributeGraph2(int n);

void appendAttribute();


void printGraphData();

void printneighbor(int id);
//Runtime polymorphism to override the SimpleGraph function of
//printNeighbor();

~attributeGraph2(); // handle the memory leakage by using virtual
//destructor both for based & derived class.
};
#endif




