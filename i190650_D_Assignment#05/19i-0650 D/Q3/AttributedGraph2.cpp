#include"AttributedGraph2.h"
#include"SimpleGraph.cpp"
#include"SimpleNode.cpp"
#include<iostream>
using namespace std;
attributeGraph2::attributeGraph2(int n):SimpleGraph(n)
{if(n<0)
n=-n;
cout<<"constractor of AttributedGraph1"<<endl;
arr_ag1=new attributedNode2[n];

}
void attributeGraph2::appendAttribute()
{string g;
string a;
for(int i=0;i<numNodes;i++)
{
	if(allNode[i].getid()!=0)
	{
	cout<<"Enter location information for Node having ID "<<allNode[i].getid()<<endl;
	cin>>g;

	cout<<"Enter profession information for Node having ID "<<allNode[i].getid()<<endl;
	cin>>a;

	arr_ag1[i].setlocation(g);
	arr_ag1[i].setprofession(a);

	


	}

}

}
void attributeGraph2::printGraphData()
{
for(int i=0;i<numNodes;i++)
{
if(allNode[i].getid()!=0)
{
cout<<"ID of Node: "<<allNode[i].getid()<<endl;
cout<<"location of Node: "<<arr_ag1[i].getlocation()<<endl;
cout<<"pprofession of Node: "<<arr_ag1[i].getprofession()<<endl;
cout<<"*****************"<<endl;
cout<<"Neighbors "<<endl;

for(int j=0;j<allNode[i].getneighborcount();j++)
{
cout<<"the ID of Neighbor "<<j+1<<" is: "<<allNode[i].arrNeighbors[j].getid()<<endl;

}
cout<<"*****************\n\n"<<endl;

}
}

}
void attributeGraph2::printneighbor(int id)
//Runtime polymorphism to override the SimpleGraph function of
//printNeighbor()
{
for(int i=0;i<numNodes;i++)
{if(allNode[i].getid()==id)
{
cout<<"ID of Node: "<<allNode[i].getid()<<endl;
cout<<"location of Node: "<<arr_ag1[i].getlocation()<<endl;
cout<<"profession of Node: "<<arr_ag1[i].getprofession()<<endl;

cout<<"Neighbors "<<endl;

for(int j=0;j<allNode[i].getneighborcount();j++)
{
cout<<"the ID of Neighbor "<<j+1<<" is: "<<allNode[i].arrNeighbors[j].getid()<<endl;

}break;}
}cout<<"invalid ID"<<endl;}
attributeGraph2::~attributeGraph2()
{
cout<<"constractor of AttributedGraph2"<<endl;
delete []arr_ag1;

}
 // handle the memory leakage by using virtual
//destructor both for based & derived class.
