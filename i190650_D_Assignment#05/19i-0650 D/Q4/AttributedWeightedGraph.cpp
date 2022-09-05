#include<iostream>
#include"AttributedWeightedGraph.h"

void attributeWeightedGraph::appendWeight(int n1,int n2, int weight)
{
for(int i=0;i<numNodes;i++)
	{
	if(allNode[i].getid()==n1)
			{
			for(int j=0;j<numNodes;j++)
			{
			if(allNode[j].getid()==n2)
			{
			for(int k=0;k<allNode[i].getneighborcount();k++)
				{
				if(allNode[i].arrNeighbors[k].getid()==n2)
				arr[i][j]=weight;
				arr[j][i]=weight;

				}
			
			}
			
			}


			}
	}


cout<<"Appendweight Node operation is done"<<endl;
}
void attributeWeightedGraph::printData()
{
for(int i=0;i<numNodes;i++)
{
if(allNode[i].getid()!=0)
{
cout<<"ID of Node: "<<allNode[i].getid()<<endl;
cout<<"Gender of Node: "<<arr_ag1[i].getgender()<<endl;
cout<<"age of Node: "<<arr_ag1[i].getage()<<endl;
cout<<"location of Node: "<<arr_ag2[i].getlocation()<<endl;
cout<<"profession of Node: "<<arr_ag2[i].getprofession()<<endl;
cout<<"*****************"<<endl;
cout<<"Neighbors "<<endl;

for(int j=0;j<allNode[i].getneighborcount();j++)
{
cout<<"the ID of Neighbor "<<j+1<<" is: "<<allNode[i].arrNeighbors[j].getid()<<endl;

}
cout<<"*****************\n\n"<<endl;
cout<<"*****************"<<endl;
cout<<"Weights "<<endl<<"       ";
for(int l=0;l<numNodes;l++)
{

cout<<"Node"<<l+1<<"  ";

}
cout<<endl<<"Node"<<i+1;
for(int k=0;k<numNodes;k++)
{ 
cout<<"   "<<arr[i][k]<<"   ";

}
cout<<endl;
cout<<"*****************\n\n"<<endl;
}
}




}
void attributeWeightedGraph::printneighbor(int id) 

{
for(int i=0;i<numNodes;i++)
{if(allNode[i].getid()==id)
{
cout<<"ID of Node: "<<allNode[i].getid()<<endl;
cout<<"Gender of Node: "<<arr_ag1[i].getgender()<<endl;
cout<<"age of Node: "<<arr_ag1[i].getage()<<endl;
cout<<"location of Node: "<<arr_ag2[i].getlocation()<<endl;
cout<<"profession of Node: "<<arr_ag2[i].getprofession()<<endl;

cout<<"Neighbors "<<endl;

for(int j=0;j<allNode[i].getneighborcount();j++)
{
cout<<"the ID of Neighbor "<<j+1<<" is: "<<allNode[i].arrNeighbors[j].getid()<<endl;

}
cout<<"\n\n*****************"<<endl;
cout<<"Weights "<<endl;
for(int l=0;l<numNodes;l++)
{

cout<<"Node"<<l+1<<"  ";

}
cout<<endl<<"Node"<<i+1;
for(int k=0;k<numNodes;k++)
{ 
cout<<"  "<<arr[i][k]<<"    ";

}
cout<<endl;
cout<<"*****************\n\n"<<endl;
break;}
}cout<<"invalid ID"<<endl;


}
attributeWeightedGraph::~attributeWeightedGraph()
{
for(int i=0;i<numNodes;i++)
{
delete arr[i];

}
delete []arr;
}













