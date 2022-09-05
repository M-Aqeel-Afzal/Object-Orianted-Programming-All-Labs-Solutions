#ifndef TELEDIRECTORY_H_
#define TELEDIRECTORY_H_
#include<iostream>
#include<fstream>
#include<cstring>
#include<iomanip>
using namespace std;
class TeleDirectory {
string name;
string address;
string phone_number;
public:
TeleDirectory();
TeleDirectory(string, string, string);
void writeDirectory(string, string, string);
string searchByName(string);
string searchByNumber(string);
void printDirectory();
virtual ~TeleDirectory();
};
#endif /* TELEDIRECTORY_H_ */
TeleDirectory::TeleDirectory()
{
 name="";
address="";
 phone_number="";
ofstream obj;
obj.open("teledir.txt");
obj<<"Name "<<name<<setw(15);
obj<<" Adress "<<address<<setw(15);
obj<<" Phone_Number "<<phone_number<<endl;
obj.close();
}
TeleDirectory::TeleDirectory(string n, string a, string p)
{

 name=n;
address=a;
 phone_number=p;
ofstream obj;
obj.open("teledir.txt");
obj<<"Name "<<name<<setw(15);
obj<<" Adress "<<address<<setw(15);
obj<<" Phone_Number "<<phone_number<<endl;

obj.close();
}
void TeleDirectory::writeDirectory(string n, string a, string p)
{
 name=n;
address=a;
 phone_number=p;
ofstream obj;
obj.open("teledir.txt",ios::out|ios::app);
obj<<name<<setw(15);
obj<<address<<setw(15);
obj<<phone_number<<endl;
obj.close();
}
string TeleDirectory::searchByName(const string n)
{
ifstream obj;
string w,w1,w2;char line,c1;
obj.open("teledir.txt");
while(!obj.eof())
  { 
 obj>>w;
    if(n.compare(w)==0)  
{

getline(obj,w2);
w1=w+w2;

return w1;
break;
}
  }
obj.close();

}
string TeleDirectory::searchByNumber(string n)
{
ifstream obj;
string w,w1,w2,w3,w4="     ";char line,c1;
obj.open("teledir.txt");
while(!obj.eof())
  { 
 obj>>w;
obj>>w1;
obj>>w2;

    if(n.compare(w2)==0)  
{w3=w+w4;
w=w3+w1;
w3=w+w4;
w=w3+w2;

return w;
break;
}
  }
obj.close();

}
void TeleDirectory::printDirectory()
{
ifstream obj;
char line;
obj.open("teledir.txt");
while(!obj.eof())
  {
     obj.get(line);
      cout <<line ;

  }
obj.close();
}
 TeleDirectory::~TeleDirectory()
{

}














