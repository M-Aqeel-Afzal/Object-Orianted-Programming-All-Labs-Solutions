/*
 * q2.cpp
 *
 *  Created on: May 8, 2020
 *      Author: aqeel
 */
#include <iostream>
using namespace std;
template<typename B>
void testContainer(B *thisContainer, B valueToBeInserted, B increment, B valueToSearch, B valueToRemove,int n1)
{

	for(int i=0;i<n1;i++)                                // to insert values
	{
		thisContainer[i]=valueToBeInserted;
		valueToBeInserted=valueToBeInserted+increment;
	}

B arr[n1];
cout<<"values of container before remove\n"<<endl;
	for(int i=0;i<n1;i++)
	{
		arr[i]=thisContainer[i];
		cout<<thisContainer[i]<<" ";

	}
	cout<<"\n";

		for(int i=0;i<n1;i++)                                // to search values
		{
			if(thisContainer[i]==valueToSearch)
			{
				cout<<"Yes this is present in this container"<<endl;
			}

		}


	int j=0;
	for(int i=0;i<n1;i++)        						//to remove value
		{
			if(arr[i]!=valueToRemove)
				{thisContainer[j]=arr[i];
				j++;
				}
		}
	for(int i=0;i<n1-1;i++)                                // to print values
			{
		cout<<thisContainer[i]<<" ";




			}
	cout<<"\n";
}
int main()
{cout<<"for int \n\n";
	int arr[5]={1,1,1,1,1};
	testContainer(arr,1,1,3,4,5);

	cout<<"for float \n\n";
		float arr1[5]={1.1f,1.1f,1.1f,1.1f,1.1f};
		testContainer(arr1,1.1f,2.0f,5.1f,7.1f,5);

		cout<<"for double \n\n";
				double arr2[5]={1.1,1.1,1.1,1.1,1.1};
				testContainer(arr2,1.1,2.0,5.1,7.1,5);


	return 0;
}




