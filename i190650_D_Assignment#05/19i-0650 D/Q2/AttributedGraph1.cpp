#include"AttributedGraph1.h"
#include"SimpleGraph.cpp"
#include"SimpleNode.cpp"
#include<iostream>
using namespace std;
attributeGraph1::attributeGraph1(int n):SimpleGraph(n)
{if(n<0)
n=-n;
cout<<"constractor of AttributedGraph1"<<endl;
arr_ag1=new attributedNode1[n];

}
void attributeGraph1::appendAttribute()
{char g;
int a;
for(int i=0;i<numNodes;i++)
{
	if(allNode[i].getid()!=0)
	{
	cout<<"Enter Gender information for Node having ID "<<allNode[i].getid()<<endl;
	cin>>g;
while(g!='m'&&g!='M'&&g!='f'&&g!='F')
	{
	cout<<"you entered invalid gender"<<endl;
	cin>>g;
	}
	cout<<"Enter age information for Node having ID "<<allNode[i].getid()<<endl;
	cin>>a;
while(a<0||a>150)
	{
	cout<<"you entered invalid age value"<<endl;
	cin>>a;
	}
	arr_ag1[i].setgender(g);
	arr_ag1[i].setage(a);

	


	}

}

}
void attributeGraph1::printGraphData()
{
for(int i=0;i<numNodes;i++)
{
if(allNode[i].getid()!=0)
{
cout<<"ID of Node: "<<allNode[i].getid()<<endl;
cout<<"Gender of Node: "<<arr_ag1[i].getgender()<<endl;
cout<<"Age of Node: "<<arr_ag1[i].getage()<<endl;
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
void attributeGraph1::attributeGraph1::printneighbor(int id)
//Runtime polymorphism to override the SimpleGraph function of
//printNeighbor()
{
for(int i=0;i<numNodes;i++)
{if(allNode[i].getid()==id)
{
cout<<"ID of Node: "<<allNode[i].getid()<<endl;
cout<<"Gender of Node: "<<arr_ag1[i].getgender()<<endl;
cout<<"Age of Node: "<<arr_ag1[i].getage()<<endl;

cout<<"Neighbors "<<endl;

for(int j=0;j<allNode[i].getneighborcount();j++)
{
cout<<"the ID of Neighbor "<<j+1<<" is: "<<allNode[i].arrNeighbors[j].getid()<<endl;

}break;}
}cout<<"invalid ID"<<endl;}
attributeGraph1::~attributeGraph1()
{
cout<<"constractor of AttributedGraph1"<<endl;
delete []arr_ag1;

}
 // handle the memory leakage by using virtual
//destructor both for based & derived class.
