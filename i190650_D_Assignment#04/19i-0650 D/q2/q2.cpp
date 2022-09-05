#include "String.cpp"
#include<string>
#include<cstring>
using namespace std;
int main(int argc, char **argv) {


String S1("Hello World!");//functionality for constactors.
String S2(S1);
String S3(10);
cout<<"functionality for constactors.\n\n"<<endl;
cout<<"S1 is: "<<S1.getMystr()<<endl;
cout<<"S1 is: "<<S1.getMystr()<<endl;
cout<<"size of S3 is: "<<S3.getSize()<<endl;



cout<<"\n\nfunctionality for + operator\n\n"<<endl;//functionality for + operator.
String S41("Hello");
	String strr("ll");

	S41 = S41 + strr;
cout<<"S4 is: "<<S41.getMystr()<<endl;
String S5("Hello");
	char * s = "123";
	S5 = S5 + s;
cout<<"S5 is: "<<S5.getMystr()<<endl;
const char * s24 = "1266";
	S5 = S5 + s24;
cout<<"S5 is: "<<S5.getMystr()<<endl;





cout<<"\n\nfunctionality for - operator\n\n"<<endl;//functionality for - operator.
String S4("Hello");
	String str("ll");
	S4 = S4 - str;
cout<<"S4 is: "<<S4.getMystr()<<endl;
String S51("Hello");
string s11 = "He";
	S51 = S51 - s11;
cout<<"S51 is: "<<S51.getMystr()<<endl;






cout<<"\n\nfunctionality for = operator\n\n"<<endl;//functionality for = operator.
String S6("Hello");
	String str1("World");
	S6 = str1;
cout<<"S6 is: "<<S6.getMystr()<<endl;
String S7("Hello");
	char * s1 = "123";
	S7 =  s1;
cout<<"S7 is: "<<S7.getMystr()<<endl;
String S71("Hello");
	string s121 = "123";
	S71 =  s121;
cout<<"S71 is: "<<S7.getMystr()<<endl;




cout<<"\n\nfunctionality for == operator\n\n"<<endl;//functionality for == operator.
String S8("Hello");
	String str2("Hello");
char * s2 = "Hello";
bool b=S8 ==  str2;
cout<<"b is: "<<b<<endl;
b=S8 ==  s2;
cout<<"b is: "<<b<<endl;
string s22 = "Hello";
 b=S8 == s22 ;
cout<<"b is: "<<b<<endl;





cout<<"\n\nfunctionality for index operator\n\n"<<endl;//functionality for index operator.
string s9 = "H";
char * s10 = "H";
char c='o';
cout<<"index of S8 is "<<S8(s9)<<endl;
cout<<"index of S8 is "<<S8(s10)<<endl;
cout<<"index of S8 is "<<S8(c)<<endl;



cout<<"\n\nfunctionality for * operator\n\n"<<endl;//functionality for * operator.
String S11("Hello");

	S11 = S11*4;
cout<<"S11 is: "<<S11.getMystr()<<endl;




cout<<"\n\nfunctionality for [] operator\n\n"<<endl;//functionality for [] operator.
String S111("Hello");
const String S113("Hello");
int a=2;
cout<<"a is: "<<S111.getMystr()[a]<<endl;
cout<<"a is: "<<S113.getMystr()[a]<<endl;





cout<<"\n\nfunctionality for ! operator\n\n"<<endl;//functionality for ! operator.
String S12;
b=0;
b=!S12;

cout<<"b is: "<<b<<endl;




cout<<"\n\nfunctionality for lenght operator\n\n"<<endl;//functionality for lenght operator.
String S13("Hello");
int d;
d=S13.length();
cout<<"length is: "<<d<<endl;



cout<<"\n\nfunctionality for distractor\n\n"<<endl;//functionality for distractor.
	return 0;
}
