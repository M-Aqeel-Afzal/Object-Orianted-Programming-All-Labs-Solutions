#include"SimpleGraph.h"
void SimpleGraph::setnumNodes(int n)
{

numNodes=n;

}
SimpleNode SimpleGraph::getNode(int n)
{
return allNode[n];
}
int SimpleGraph::getnumNodes()
{
return numNodes;

}
void SimpleGraph::setnumEdges(int n)
{

numEdges=n;

}
int SimpleGraph::getnumEdges()
{

return numEdges;
}



SimpleGraph::SimpleGraph(int n) // overloaded constructor to create the
//array of Node
{
if(n<0)
n=-n;
cout<<n<<"constractor of SimpleGraph"<<endl;
numNodes=n;
 numEdges=n-1;
allNode = new SimpleNode[n];
}



void SimpleGraph::addnode(int nodeid)
{
for(int i=0;i<numNodes;i++)
{
if(allNode[i].getid()==0)
{
allNode[i].setid(nodeid);
//cout<<"*************************"<<i<<"   "<<allNode[i].getid()<<endl;
allNode[i].arrNeighbors = new SimpleNode[numEdges];
for(int j=0;j<allNode[i].getneighborcount();j++)
{
if(allNode[j].getid()!=nodeid)
allNode[i].arrNeighbors[j].setid(allNode[j].getid());
}
break;
}

}
//Nodeid is added to the allNode array
}




void SimpleGraph::addEdge(int n1, int n2)
{
for(int i=0;i<numNodes;i++)
	{
	if(allNode[i].getid()==n1)
			{
			for(int j=0;j<numNodes;j++)
			{
			if(allNode[j].getid()==n2)
			{
			allNode[i].addEdge(allNode[j]);
			allNode[j].addEdge(allNode[i]);
			break;
			}
			if(j==numNodes-1)
			cout<<"invalid node ID"<<endl;
			}


			}
	}
cout<<"Edge is added"<<endl;
}


void SimpleGraph::printdata()
{ 
for(int i=0;i<numNodes;i++)
{
if(allNode[i].getid()==0)
break;
cout<<"Neighbors of node having ID: "<<allNode[i].getid()<<" are:\n"<<endl;

for(int j=0;j<allNode[i].getneighborcount();j++)
{
cout<<"the ID of Neighbor"<<j+1<<"is: "<<allNode[i].arrNeighbors[j].getid()<<endl;

}



}

}
void SimpleGraph::printneighbor(int id)
{
for(int i=0;i<numNodes;i++)
{
if(allNode[i].getid()==id)
{
cout<<"Neighbors of node having ID: "<<allNode[i].getid()<<" are:\n"<<endl;

for(int j=0;j<allNode[i].getneighborcount();j++)
{
cout<<"the ID of Neighbor"<<j+1<<"is: "<<allNode[i].arrNeighbors[j].getid()<<endl;

}
}


}
}
SimpleGraph::~SimpleGraph() {
cout<<"Destractor of SimpleGraph"<<endl;
for(int i=0;i<numNodes;i++)
{
allNode[i].~SimpleNode();
}
}






