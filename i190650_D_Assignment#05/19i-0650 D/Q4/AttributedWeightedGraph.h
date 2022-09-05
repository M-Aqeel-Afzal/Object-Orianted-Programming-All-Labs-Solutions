#include<iostream>
using namespace std;
#include"h_file_for_all.h"
class attributeWeightedGraph: public  attributeGraph2,public  attributeGraph1
{ private:
int **arr;
public:
attributeWeightedGraph():attributeGraph2(),attributeGraph1()
{int n=5;
arr= new int*[n];
for(int i=0;i<n;i++)
arr[i]= new int;

cout<<"constractor weight"<<endl;


}

void appendWeight(int n1,int n2, int weight);

void printData();

void printneighbor(int id); 
~attributeWeightedGraph(); 
};
