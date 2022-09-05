#include<cstring>
#include<iostream>
using namespace std;
///////Task 1////////////////////////////////////////////////
class Sale
{
private:
double itemCost; // Cost of the item
double taxRate; // Sales tax rate
public:
Sale ()
{
itemCost=0;
taxRate=0;
}
 Sale(double cost, double rate = 0.05)
 { 
itemCost=cost;
taxRate=rate;
 }

 double getItemCost() 
 { 
return itemCost;
 }

 double getTaxRate()
 {
return taxRate;
 }

 double getTax() 
 {
return itemCost*taxRate;
 }

 double getTotal()
 {
 double sum=itemCost+getTax();
return sum;
 }
};
 ////Task 2///////////////////////////////////////////////////

class Box
{
private:
double length;
   double   width;
   double   height;
	string color;
	string matiral;
double vol;
 double area;
public:
  Box ()
    {
    length=1;
     width=1;
     height=1;
	 color ="red";
	 matiral="\0";
    }
 Box(double l, double h, double b, string c, string m="Card")
 {
length=l;
     width=b;
     height=h;
	 color =c;
	 matiral=m;
 }
 void setLength(double l)
 {
length=l;
 }

 void setBreadth(double b)
 {

width=b;
 }

 void setHeight(double h)
 { 
 height=h;
 }
void setColor(string c)
 { 
color =c;
 }
 double getLength()
 { return length;
 }

 double getHeight()
 { return height;
 }

 double getBreadth()
 { return width;
 }

 string getColor()
 { return color;
 }



string getMaterial()
 { return matiral;
 }

double getVolume()
 {
 vol= length*height*width;
return vol;
 }

double getSurfaceArea()
 {
area=2*(height*width)+2*(height*length)+2*(width*length);
return area;
 }

 void print()
 { cout<<"lenght is:"<<length<<endl;
 cout<<"width is:"<<width<<endl;
 cout<<"hieght is:"<<height<<endl;
 cout<<"color is:"<<color<<endl;
 cout<<"matiral is:"<<matiral<<endl;
cout<<"voleme is:"<<vol<<endl;
 cout<<"surface area is:"<<matiral<<endl;
     
 }

 bool update(Box b[], int size, int index, double he)
 {  if(index>=size)
return false;
else{
b[index].setHeight(he);

return true;}
}

 };



////Task 3/////////////////////////////////////////////////////////
class  coffeeShots
{
public:
       string  type;
       double  price;
       float  volume;
       char  size;



public:
coffeeShots(){};

 coffeeShots(double p,float v,string t="latte")
 {
type=t;  
 volume=v;
  price=p;
size='s';
 }
	
 void setPrice(double pric)
 { 
price=pric;
 }

 double getPrice()
 { return price;
 }

 float getVolume()
 { return volume;
 }

 string getType()
 {return type;
 }

 char getSize()
 { 
if(volume>=0&&volume<=50)
size='s';
if(volume>=51&&volume<=75)
size='m';
if(volume>75)
size='l';


return size;
 }

 void upSize()
 {volume=volume+5;
if(volume>=0&&volume<=50)
size='s';
if(volume>=51&&volume<=75)
size='m';
if(volume>75)
size='l';
price=price+5;
 }

 float spillOver(float vol)
 { volume=volume-vol;
return volume;
 }

 void print()
 {
cout<<"type is:"<<type<<endl;
 cout<<"volume is:"<<volume<<endl;
 cout<<"price is:"<<price<<endl;
 cout<<"size is:"<<size<<endl;
 
 } 
};
//A NON MEMBER FUNCTION
  coffeeShots& createMyCofee()
 {

float v;
string t;
double pr;
cout<<"enter type:"<<endl;
cin>>t;
cout<<"enter price:"<<endl;
cin>>pr;
cout<<"enter volume"<<endl;
cin>>v;
coffeeShots* p=new coffeeShots(pr,v,t);
return *p;
 }
 /*  

////Task 5////////////////////////////////////////////////////


 ParkingGarage()
 {//write your code here
 }

 ParkingGarage(int c)
 {//write your code here
 } 
 
 int getRemainingCapacity()
 {//write your code here
 }
 
 double getAmountCollected() 
 {//write your code here
 }
 
bool isFull(int size,int index)
 {//write your code here
 }

 bool ParkCar( string &regnNumber,int entryTime )
 {//write your code here
 }
*/

