//******************Graph class***************************
#include <iostream>
#ifndef POI_H
#define POI_H
#include"SimpleNode.h"

using namespace std;

class SimpleGraph
{protected:
int numNodes;
int numEdges;
SimpleNode *allNode;
public:
void setnumNodes(int n);

SimpleNode getNode(int n);

int getnumNodes();

void setnumEdges(int n);

int getnumEdges();




SimpleGraph(int n); // overloaded constructor to create the
//array of Node



void addnode(int nodeid);


void addEdge(int n1, int n2);

void printdata();

virtual void printneighbor(int id);

~SimpleGraph(); 
};
#endif
