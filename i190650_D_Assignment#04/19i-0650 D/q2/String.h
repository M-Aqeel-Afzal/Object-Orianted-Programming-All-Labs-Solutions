/*
 * String.h
 *
 *  Created on: Apr 2, 2020
 *      Author: aqeel
 */

#ifndef STRING_H_
#define STRING_H_

#include<iostream>
#include<string>
#include<cstring>
using namespace std;

class String
{
	char *Mystr;
	int size;	// think about the private data members...
public:// provide definitions of following functions...
String();// default constructor
String(string str);// initializes the string with constant cstring
String(const String &);// copy constructor to initialize the string fromexisting string
String(int x);// initializes a string of pre-defined size
int getSize()const;
char* getMystr()const;
char&operator[](int i);// returns the character at index [x]
char&operator[](int i)const;
String operator+(const String &str);// append a String at the end of string
String operator+(char* str);// append a char at the end of string
String operator+(const char* &str);
bool operator!();// returns true if string is empty..
String& operator=(const String&);// Copy one string to another ...
String& operator=(const char* str);// Copy one string to another ...
String& operator-(String &str);
String& operator-(string &str);
String& operator=(const string&);
bool operator==(const String&);//returns true if two strings are equal
bool operator==( char* S1);//returns true if two strings are equal
bool operator==(const string&);

int operator()(char);// returns the index of character being searched.
int operator()(String searched);
int operator()(string searched);
int operator()(char*);
String operator *(int a);//multiples the string by i times and return thestring. Remember the Python functionality for*

int length()const;// returns the length of string
~String();// destructor...};

};

#endif /* STRING_H_ */
