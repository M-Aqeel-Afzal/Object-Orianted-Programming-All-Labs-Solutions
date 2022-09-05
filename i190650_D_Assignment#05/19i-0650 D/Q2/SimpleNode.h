#ifndef POIN_H
#define POIN_H
#include <iostream>
using namespace std;
class SimpleNode
{protected:
int nodeId;
int NeighborCount=0;

public:
SimpleNode *arrNeighbors;
SimpleNode();

SimpleNode(int n);

void setid(int id);

int getid()const;

int getneighborcount();

 SimpleNode* getneighbor();

void addEdge(const SimpleNode& n);

~SimpleNode();

 
};
#endif

