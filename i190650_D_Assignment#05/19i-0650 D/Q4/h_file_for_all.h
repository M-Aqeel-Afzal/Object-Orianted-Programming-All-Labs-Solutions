#include<iostream>
#include"AttributedNode2.h"
#ifndef ata_H
#define ata_H


class SimpleNode
{protected:
int nodeId;
int NeighborCount=0;

public:
SimpleNode *arrNeighbors;
SimpleNode()
{
nodeId=0;

cout<<"default constractor simplenode"<<endl;

}
SimpleNode(int n)
{
cout<<"peramitrized constractor simplenode"<<endl;
nodeId=0;
}
void setid(int id)
{

nodeId=id;
}
int getid()const
{
return nodeId;
}
int getneighborcount()
{
return NeighborCount;
}
 SimpleNode* getneighbor()
{
return arrNeighbors;
}
void addEdge(const SimpleNode& n)
{

arrNeighbors[NeighborCount].setid(n.getid());
NeighborCount++;

}
~SimpleNode()
{
cout<<"destractor of simpleNode "<<endl;

delete []arrNeighbors;

} 

 
};


//******************Graph class***************************

class SimpleGraph
{protected:
int numNodes;
int numEdges;
SimpleNode *allNode;
public:

void setnumNodes(int n)
{

numNodes=n;

}
SimpleNode getNode(int n)
{

return allNode[5];
}
int getnumNodes()
{
return numNodes;

}
void setnumEdges(int n)
{

numEdges=n;

}
int getnumEdges()
{

return numEdges;
}



 SimpleGraph() 
{int n=5;
numNodes=n;
 numEdges=n-1;
allNode = new SimpleNode[n];
}



void addnode(int nodeid)
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




void addEdge(int n1, int n2)
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
cout<<"neighbors are added"<<endl;
}


void printdata()
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
void printneighbor(int id)
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
~SimpleGraph() {
for(int i=0;i<numNodes;i++)
{allNode[i].~SimpleNode();

}
cout<<"destractor of Simplegraph "<<endl;
}

};



class attributedNode1
{
protected:
char gender;
int age;

public:
attributedNode1()
{gender='\0';
age=0;
cout<<"constractor of AttributeNode1"<<endl;
}
void setgender(char c);
void setage(int a);
char getgender()const;
int getage()const;

~attributedNode1();
};

class attributeGraph1:virtual public  SimpleGraph
{ protected:
attributedNode1 *arr_ag1;
public:
attributeGraph1():SimpleGraph()
{int n=5;
cout<<"constractor of AttributedGraph1"<<endl;
arr_ag1=new attributedNode1[n];

}
void appendAttribute();


void printGraphData();

void printneighbor(int id);

~attributeGraph1(); 
};
class attributeGraph2:virtual public  SimpleGraph
{ protected:
attributedNode2 *arr_ag2;
public:
attributeGraph2():SimpleGraph()
{int n=5;
cout<<"constractor of AttributedGraph1"<<endl;
arr_ag2=new attributedNode2[n];

}

void appendAttribute();


void printGraphData();

void printneighbor(int id);
~attributeGraph2(); 
};



#endif



//****************class attributeGraph1**********************

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
void attributeGraph1::printneighbor(int id)

{bool b=0;
for(int k=0;k<numNodes;k++)
{
if(allNode[k].getid()==id)
b=1;
}
if(b)
{for(int i=0;i<numNodes;i++)
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

}}

else if(b==0)
{cout<<"invalid ID"<<endl;}
}
attributeGraph1::~attributeGraph1()
{
cout<<"constractor of AttributedGraph1"<<endl;
delete []arr_ag1;

}
 

//****************class attributeGraph2 ***************

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
	arr_ag2[i].setlocation(g);
	arr_ag2[i].setprofession(a);

	


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
cout<<"location of Node: "<<arr_ag2[i].getlocation()<<endl;
cout<<"pprofession of Node: "<<arr_ag2[i].getprofession()<<endl;
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

{
for(int i=0;i<numNodes;i++)
{if(allNode[i].getid()==id)
{
cout<<"ID of Node: "<<allNode[i].getid()<<endl;
cout<<"location of Node: "<<arr_ag2[i].getlocation()<<endl;
cout<<"profession of Node: "<<arr_ag2[i].getprofession()<<endl;

cout<<"Neighbors "<<endl;

for(int j=0;j<allNode[i].getneighborcount();j++)
{
cout<<"the ID of Neighbor "<<j+1<<" is: "<<allNode[i].arrNeighbors[j].getid()<<endl;

}break;}
}cout<<"invalid ID"<<endl;}
attributeGraph2::~attributeGraph2()
{
cout<<"constractor of AttributedGraph2"<<endl;
delete []arr_ag2;

}
 
//***************AttributeedNode1 class *************
void attributedNode1::setgender(char c)
{
gender=c;

}
void attributedNode1::setage(int a)
{

age=a;
}
char attributedNode1::getgender()const
{

return gender;

}
int attributedNode1::getage()const
{

return age;
}
attributedNode1::~attributedNode1(){

cout<<"destractor of AttributeNode1"<<endl;}


