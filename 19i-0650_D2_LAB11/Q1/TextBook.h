/*
 * TextBook.h
 *
 *  Created on: 03 Apr 2020
 *      Author: user
 */

#ifndef TEXTBOOK_H_
#define TEXTBOOK_H_
#include <iostream>
#include <string>
using namespace std;

class TextBook {
private:
string title;// Book title
string author;// Author name
string publisher; // Publisher name
public:
	TextBook()
{

title="\0";
author="\0";
publisher="\0";


}
	// Constructor
	TextBook(string textTitle, string auth, string pub)
{

title=textTitle;
author=auth;
publisher=pub;


}
	
	void set(string textTitle, string auth, string pub)
{

title=textTitle;
author=auth;
publisher=pub;



}
	
	void print() const
{

cout<<"Name of TextBook is : "<<title<<endl;
cout<<"author of TextBook is : "<<author<<endl;
cout<<"publisher of TextBook is : "<<publisher<<endl;


}
	virtual ~TextBook(){}
	TextBook(const TextBook &o)
{

title=o.title;
author=o.author;
publisher=o.publisher;

}
string gettitle()const
{
return title;
}
string getauthor()const
{
return author;
}
string getpublisher()const
{
return publisher;
}
};

#endif /* TEXTBOOK_H_ */
