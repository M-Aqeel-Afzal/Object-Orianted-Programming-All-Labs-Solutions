#include<iostream>
#include"AttributedGraph2.cpp"
using namespace std;
int main()
{int v1,v2,v3;
cout<<" you can enter any number of nodes(i m using 5 nodes) "<<endl;
//cin>>v1;
v1=-5;
cout<<"\n\n************functionality for constractors**********"<<endl;
attributeGraph2 a1(v1);
cout<<"\n\n************functionality adding nodes**********"<<endl;
//for adding nodes.
a1.addnode(10);
a1.addnode(20);
a1.addnode(30);
a1.addnode(40);
cout<<"\n\n************functionality for adding neighbors**********"<<endl;
//for creating neighbors.
a1.addEdge(10,20);
a1.addEdge(10,30);
a1.addEdge(10,40);
a1.addEdge(30,20);
cout<<"\n\n************functionality for appendatttributes**********"<<endl;
//for appendattribudes
a1.appendAttribute();
cout<<"\n\n************functionality for printing graph data**********"<<endl;
//for printing data
a1.printGraphData();
cout<<"\n\n************functionality for desstractors**********"<<endl;



return 0;
}

