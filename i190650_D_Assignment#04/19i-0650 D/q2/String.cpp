/*
 * String.cpp
 *
 *  Created on: Apr 2, 2020
 *      Author: aqeel
 */

#include "String.h"

int String::getSize()const
{
return size;
}
 char* String::getMystr()const
{
return this->Mystr;
}
String::String() {
Mystr=new char;
Mystr[0]=NULL;
size=1;
	// TODO Auto-generated constructor stub
}
String::String(string str)// initializes the string with constant cstring
{
int a=0,j=0;
while(str[j]!='\0')
{a++;
j++;
}
size=a;
int i=0;

Mystr=new char;
while(str[i]!='\0')
{

this->Mystr[i]=str[i];
i++;
}

/*int a=0,i=0;
int b=0,j=0;
while(str[i]!='\0')
{a++;
++i;
}
while(this->Mystr[j]!='\0')
{b++;
++j;
}

//if(a>b)
//{

//s1=new char;




//return *this;}


 i=0;
while(this->Mystr[i]!='\0')
{
this->Mystr[i]=str[i];
i++;
cout<<"yes"<<this->Mystr<<endl;
}*/
//return s1;
}
String::String(const String & s1)// copy constructor to initialize the string fromexisting string
{Mystr=new char;
size=s1.size;
for(int i=0;i<size;i++)
{
Mystr[i]=s1.Mystr[i];
}}
String::String(int x)// initializes a string of pre-defined size
{Mystr=new char;
size=x;
for(int i=0;i<size;i++)
{
//////Mystr[i]="\0";
}
}
char& String::operator[](int j)// returns the character at index [x]
{
return this->Mystr[j];
}



String String::operator+(const String &str)// append a String at the end of string
{
int i=0,j=0;
char * s3= new char;

while(this->Mystr[i]!='\0')
{
s3[i]=this->Mystr[i];
i++;
}
i=0;
Mystr= new char;
while(s3[i]!='\0')
{
Mystr[i]=s3[i];
++i;
++j;}
i=0;
while(str.Mystr[i]!='\0')
{
Mystr[j]=str.Mystr[i];
++i;
++j;

}
//cout<<this->Mystr;
return *this;
}

String String::operator+(char* str)// append a String at the end of string
{
int i=0,j=0;
char * s3= new char;
while(this->Mystr[i]!='\0')
{
s3[i]=this->Mystr[i];
i++;
}
i=0;
while(s3[i]!='\0')
{
Mystr[i]=s3[i];
++i;
++j;}
i=0;
while(str[i]!='\0')
{
Mystr[j]=str[i];
++i;
++j;

}

return *this;
}

bool String::operator!()// returns true if string is empty..
{
if(this->Mystr[0]=='\0')
return 1;
else
return 0;
}

String& String::operator=(const String& S1)// Copy one string to another ...
{
int i=0;

//Mystr=new char;
while(S1.Mystr[i]!='\0')
{

this->Mystr[i]=S1.Mystr[i];
i++;
}
return *this;

}
String& String::operator=(const char* str)// Copy one string to another ...
{
int i=0;

Mystr=new char;
while(str[i]!='\0')
{

this->Mystr[i]=str[i];
i++;
}
return *this;
}




bool String::operator==(const String& S1)//returns true if two strings are equal
{int i=0,j=0;
int a=0,k=0,b=0;
while(S1.Mystr[k]!='\0')
{a++;
k++;
}
while(Mystr[j]!='\0')
{b++;
j++;
}
if(a==b)
return 1;
else
return 0;
}

bool String::operator==( char* S1)//returns true if two strings are equal
{int i=0;
while(S1[i]!='\0')
{

if(this->Mystr[i]==S1[i])
{i++;
if(this->size==i)
return 1;
}

}
return 0;
}




int String::operator()(char searched)// returns the index of character being searched.
{
int i=0;
while(this->Mystr[i]!='\0')
{

if(this->Mystr[i]==searched)
return i;
i++;
}

}
int String::operator()(String searched)// returns the index of character being searched.
{
int i=0;
while(this->Mystr[i]!='\0')
{

if(this->Mystr[i]==searched.Mystr[0])
return i;
i++;
}

}
int String::operator()(string searched)// returns the index of character being searched.
{
int i=0;
while(this->Mystr[i]!='\0')
{

if(this->Mystr[i]==searched[0])
return i;
i++;
}

}



String String::operator *(int a)//multiples the string by i times and return thestring. Remember the Python functionality for*
{
int i=0,j=0;
String s=*this;
char * s3= new char;
for(int k=0;k<a;k++)
{while(this->Mystr[i]!='\0')
{
s.Mystr[j]=this->Mystr[i];
i++;
j++;
}
i=0;
}
return s;
}

int String::length()const// returns the length of string
{//cout<<"0";
int a=0,j=0;
while(this->Mystr[j]!='\0')
{a++;
j++;

}
return a;
}
String& String::operator=(const string& str)
{
	int i=0;

	Mystr=new char;
	while(str[i]!='\0')
	{

	this->Mystr[i]=str[i];
	i++;
	}
	return *this;
}
String& String::operator-(String &str)
{
	int i=0,j=0,k=0;
	char * s3= new char;

	while(this->Mystr[i]!='\0')
	{
	s3[i]=this->Mystr[i];
	i++;
	}
	i=0;
	Mystr= new char;
	while(s3[i]!='\0')
	{
		if(s3[i]==str.Mystr[k])
		{
			k++;
		}
		else
	{Mystr[j]=s3[i];
	++j;}
		++i;
	}
	/*i=0;
	while(str.Mystr[i]!='\0')
	{
	Mystr[j]=str.Mystr[i];
	++i;
	++j;

	}*/
	//cout<<this->Mystr;
	return *this;
}
String& String::operator-(string &str)
{int i=0,j=0,k=0;
char * s3= new char;

while(this->Mystr[i]!='\0')
{
s3[i]=this->Mystr[i];
i++;
}
i=0;
Mystr= new char;
while(s3[i]!='\0')
{
	if(s3[i]==str[k])
	{
		k++;
	}
	else
{Mystr[j]=s3[i];
++j;}
	++i;
}
/*i=0;
while(str.Mystr[i]!='\0')
{
Mystr[j]=str.Mystr[i];
++i;
++j;

}*/
//cout<<this->Mystr;
return *this;

}
bool String::operator==(const string& str)
		{
	int i=0,j=0;
	int a=0,k=0,b=0;
	while(str[k]!='\0')
	{a++;
	k++;
	}
	while(Mystr[j]!='\0')
	{b++;
	j++;
	}
	if(a==b)
	return 1;
	else
	return 0;
		}
String String::operator+(const char* &str)
{
	int i=0,j=0;
	char * s3= new char;

	while(this->Mystr[i]!='\0')
	{
	s3[i]=this->Mystr[i];
	i++;
	}
	i=0;
	Mystr= new char;
	while(s3[i]!='\0')
	{
	Mystr[i]=s3[i];
	++i;
	++j;}
	i=0;
	while(str[i]!='\0')
	{
	Mystr[j]=str[i];
	++i;
	++j;

	}
	//cout<<this->Mystr;
	return *this;
}
char& String::operator[](int i)const
{
	return this->Mystr[i];
}
int String::operator()(char* searched )
{
	int i=0;
	while(this->Mystr[i]!='\0')
	{

	if(this->Mystr[i]==searched[0])
	return i;
	i++;
	}
}
String::~String() {
//cout<<"i m distractor"<<endl;
}

