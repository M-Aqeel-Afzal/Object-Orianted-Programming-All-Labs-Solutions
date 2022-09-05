#include<iostream>
#include"AttributedWeightedGraph.cpp"
using namespace std;
int main()
{int v1,v2,v3;
//cin>>v1;
v1=5;//number of Nodes
cout<<"\n\n************functionality for constractors**********"<<endl;
attributeWeightedGraph a1;
cout<<"\n\n************functionality adding nodes**********"<<endl;
//for adding nodes.
a1.addnode(10);
a1.addnode(20);
a1.addnode(30);
a1.addnode(40);
a1.addnode(50);
cout<<"\n\n************functionality for adding neighbors**********"<<endl;
//for creating neighbors.
a1.addEdge(10,20);
a1.addEdge(10,30);
a1.addEdge(10,40);
a1.addEdge(40,20);
a1.addEdge(30,20);
a1.addEdge(50,20);
a1.addEdge(50,40);

cout<<"\n\n****functionality for appendAttribudeGragh One (like adding Gender and Age)******"<<endl;
a1.attributeGraph1::appendAttribute();
cout<<"\n\n****functionality for appendAttribudeGragh Two (like adding Location and Professtion)******"<<endl;
a1.attributeGraph2::appendAttribute();
cout<<"\n\n************functionality for appendweight**********"<<endl;
//for appendattribudes
a1.appendWeight(10,20,5);
a1.appendWeight(10,30,5);
a1.appendWeight(10,40,4);
a1.appendWeight(10,50,4);
a1.appendWeight(20,30,3);
a1.appendWeight(50,20,4);
a1.appendWeight(50,30,4);
a1.appendWeight(50,40,10);
cout<<"\n\n************functionality for printing all data**********"<<endl;
//for printing data
a1.printData();
cout<<"\n\n************functionality for printinprintneighbor**********"<<endl;
//for printing data
a1.printneighbor(10);
cout<<"\n\n************functionality for desstractors**********"<<endl;



return 0;
}

