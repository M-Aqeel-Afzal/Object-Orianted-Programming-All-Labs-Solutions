/*
 * q3.cpp
 *
 *  Created on: May 5, 2020
 *      Author: aqeel
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
int main()
{
	vector<int> v1, v2;
	vector<int>::iterator it;
	for(int i=1; i<11;i++)							//storing values in v1
	{
		v1.push_back(i*i);
	}

	for( it=v1.end()-1; it>v1.begin()-1;it--)				//storing values in v2
		{

			v2.push_back(*it);
		}
cout<<"\n values of vector v1\n"<<endl;
	for(int i:v1)    									//printing v1
	{

		cout<<i<<" ";

	}
	cout<<"\n";
	cout<<"\n\n values of vector v2\n"<<endl;
	for(int j:v2)									//printing v2
		{


			cout<<j<<" ";

		}
		cout<<"\n";
		cout<<"\n finding of element in a vector"<<endl;   //finding
it=find(v1.begin(),v1.end(),49);
if(it!=v1.end())
	{cout<<"Yes element is present in the vector"<<endl;}
else
	{cout<<"element is not present in the vector"<<endl;}

cout<<"\n checking equal\n"<<endl;
bool b1=equal(v1.begin(),v1.end(),v2.begin(),v2.end());    //checking equal
if(b1)
{cout<<"Yes both vector are equal"<<endl;

}
else
{
	cout<<"No these vector are equal"<<endl;
}
cout<<"functionality of replacing\n"<<endl;    				//replacing
replace(v1.begin(),v1.end(),16,100);
replace(v2.begin(),v2.end(),16,100);
cout<<"\n vector v1"<<endl;
for( it=v1.begin(); it<v1.end();it++)				//printing values of v1
		{

			cout<<*it<<" ";
		}
cout<<endl;
cout<<"\n vector v2"<<endl;
for( it=v2.begin(); it<v2.end();it++)				//printing values of v2
		{

			cout<<*it<<" ";
		}
cout<<endl;
	return 0;
}














