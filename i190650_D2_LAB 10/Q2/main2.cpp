#include "String.h"
#include<string>
#include<cstring>
using namespace std;
int main()
{String S1("Hello World!");//functionality for constactors.
String S2(S1);
String S3(10);
cout<<"functionality for constactors.\n\n"<<endl;
cout<<"S1 is: "<<S1.getMystr()<<endl;
cout<<"S1 is: "<<S1.getMystr()<<endl;
cout<<"size of S3 is: "<<S3.getSize()<<endl;
cout<<"\n\nfunctionality for + operator\n\n"<<endl;//functionality for + operator.
String S4("Hello");
	String str("World");
	S4 = S4 + str;
cout<<"S4 is: "<<S4.getMystr()<<endl;
String S5("Hello");
	char * s = "123";
	S5 = S5 + s;
cout<<"S5 is: "<<S5.getMystr()<<endl;
