#include"SimpleNode.h"
#include<iostream>
using namespace std;
SimpleNode::SimpleNode()
{
nodeId=0;

cout<<"default constractor simplenode"<<endl;

}
SimpleNode::SimpleNode(int n)
{
cout<<"peramitrized constractor simplenode"<<endl;
nodeId=0;
}
void SimpleNode::setid(int id)
{

nodeId=id;
}
int SimpleNode::getid()const
{
return nodeId;
}
int SimpleNode::getneighborcount()
{
return NeighborCount;
}
 SimpleNode* SimpleNode::getneighbor()
{
return arrNeighbors;
}
void SimpleNode::addEdge(const SimpleNode& n)
{

arrNeighbors[NeighborCount].setid(n.getid());
NeighborCount++;

}
SimpleNode::~SimpleNode()
{
cout<<"destractor of simpleNode "<<endl;

//delete []allNode;
delete []arrNeighbors;

} 
