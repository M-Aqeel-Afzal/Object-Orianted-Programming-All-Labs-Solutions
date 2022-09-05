#include"SimpleNode.h"
SimpleNode::SimpleNode()
{
nodeId=0;

cout<<"default constractor of SimpleNODE"<<endl;

}
SimpleNode::SimpleNode(int n)
{
cout<<"perimitrized constractor of SimpleNODE"<<endl;
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
SimpleNode::~SimpleNode() {
cout<<"destractor of SimpleNODE"<<endl;

delete []arrNeighbors;

}
