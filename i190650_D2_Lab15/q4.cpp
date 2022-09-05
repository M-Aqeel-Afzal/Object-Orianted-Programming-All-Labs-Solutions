/*
 * q4.cpp
 *
 *  Created on: May 8, 2020
 *      Author: aqeel
 */
#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int> s1;
	int flag1;
	in:
	cout<<"\n choose any one option from the menu:\n"
			<<"1: insert an element in the stack.\n"
			<<"2: delete an element in the stack.\n"
			<<"3: Display size of the stack.\n"
			<<"4: Display top element of the stack.\n"
			<<"5: exit the program\n"<<endl;
	int flag=0;
	cin>>flag;
	switch(flag)
	{
	case 1:
		cout<<"Enter value"<<endl;
		cin>>flag1;
		s1.push(flag1);
	goto in;
	case 2:
		s1.pop();
		goto in;
	case 3:
		cout<<"size is: "<<s1.size()<<endl;
	goto in;
	case 4:
		//int i=0;

		////while(!s1.empty())
		//{
		cout<<"Top element of stack is:";
			cout<<s1.top();


		//}
	cout<<endl;
	goto in;
	break;
	case 5:
		break;
	default:
		cout<<"Wrong Entry"<<endl;
		goto in;
		break;
	}




	return 0;
}


