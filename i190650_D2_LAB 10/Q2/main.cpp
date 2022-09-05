#include "Bouquet.h"

#include <gtest/gtest.h>
#include<string>
#include<cstring>
using namespace std;
int main()
{
cout<<"\n\n\nfunctionality of FlowerConstructor is\n\n\n "<<endl;//functionality of FlowerConstructor
Flower r3("Rose", "Red", 2.1, true, true);
cout<<"name is: "<<r3.getName()<<endl;
cout<<"color is: "<<r3.getColor()<<endl;
cout<<"basic price is: "<<r3.getBasicPrice()<<endl;
cout<<"perfume  is or not(1 for true and 0 for false ): "<<r3.isPerfumed()<<endl;
cout<<"on sale is or not(1 for true and 0 for false ): "<<r3.isOnSale()<<endl;
cout<<"\n\n\nfunctionality of init Constructor is\n\n\n "<<endl;//functionality of init Constructor
Flower r1;
	r1.init("Rose", "Red", 2.1, true, true);
cout<<"name is: "<<r1.getName()<<endl;
cout<<"color is: "<<r1.getColor()<<endl;
cout<<"basic price is: "<<r1.getBasicPrice()<<endl;
cout<<"perfume  is or not(1 for true and 0 for false ): "<<r1.isPerfumed()<<endl;
cout<<"on sale is or not(1 for true and 0 for false ): "<<r1.isOnSale()<<endl;


cout<<"\n\n\nfunctionality of == operator is\n\n\n "<<endl;//functionality of == operator
//Flower r3("Rose", "Red", 2.1, true, true);

	//Flower r2("Rose", "Yellow", 3.6, true);
	Flower r2("rose", "Yellow", 3.6, true);
bool b;
b=r1==r3;
if(b)
cout<<"yes both objects are same"<<endl;
else
cout<<"not both objects are not same"<<endl;
b=r1==r2;
if(b)
cout<<"yes both objects are same"<<endl;
else
cout<<"no both objects are not same"<<endl;
cout<<"\n\n\nfunctionality of += operator is\n\n\n "<<endl;//functionality of += operator
Flower r4("Rose", "Yellow", 1.5);

	Bouquet b1;
//Bouquet b2(b1);
	b1 += r4;
b1+=r1;
Flower r5 = b1[0];

	//Flower r5 = b1.getf();
cout<<"name is: "<<r5.getName()<<endl;
cout<<"color is: "<<r5.getColor()<<endl;
cout<<"basic price is: "<<r5.getBasicPrice()<<endl;
cout<<"perfume  is or not(1 for true and 0 for false ): "<<r5.isPerfumed()<<endl;
cout<<"on sale is or not(1 for true and 0 for false ): "<<r5.isOnSale()<<endl;

cout<<"\n\n\nfunctionality of -= operator is\n\n\n "<<endl;//functionality of -= operator
	Flower r6("Rose", "Yellow", 1.5);
	Flower r7("Rose", "Red", 1.5,true,true);
	Bouquet b2;
	b2 += r6; b2 += r6, b2+=r7;
	
Flower r13 = b2[0];

cout<<"Before -= operation b2 is: \n"<<endl;	
cout<<"name is: "<<r13.getName()<<endl;
cout<<"color is: "<<r13.getColor()<<endl;
cout<<"basic price is: "<<r13.getBasicPrice()<<endl;
cout<<"perfume  is or not(1 for true and 0 for false ): "<<r13.isPerfumed()<<endl;
cout<<"on sale is or not(1 for true and 0 for false ): "<<r13.isOnSale()<<endl;
b2 -= r7;
Flower r14 = b2[0];

	cout<<"After -= operation b2 is: \n"<<endl;	
cout<<"name is: "<<r14.getName()<<endl;
cout<<"color is: "<<r14.getColor()<<endl;
cout<<"basic price is: "<<r14.getBasicPrice()<<endl;
cout<<"perfume  is or not(1 for true and 0 for false ): "<<r14.isPerfumed()<<endl;
cout<<"on sale is or not(1 for true and 0 for false ): "<<r14.isOnSale()<<endl;


//cout<<b3.getf()<<endl;


cout<<"\n\n\nfunctionality of + operator is\n\n\n "<<endl;//functionality of + operator
Flower r8("Rose", "Yellow", 1.5);

	Bouquet b4;
	b4 + r8;

Flower r9=b4[0];
cout<<"name is: "<<r9.getName()<<endl;
cout<<"color is: "<<r9.getColor()<<endl;
cout<<"basic price is: "<<r9.getBasicPrice()<<endl;
cout<<"perfume  is or not(1 for true and 0 for false ): "<<r9.isPerfumed()<<endl;
cout<<"on sale is or not(1 for true and 0 for false ): "<<r9.isOnSale()<<endl;



cout<<"\n\n\nfunctionality of - operator is\n\n\n "<<endl;//functionality of - operator
Flower r15("Rose", "Yellow", 1.5);
	Flower r16("Rose", "Red", 1.5,true,true);
	Bouquet b8;
	b8 + r15;  b8+r16;
	
Flower r17 = b8[0];

cout<<"Before - operation b2 is: \n"<<endl;	
cout<<"name is: "<<r17.getName()<<endl;
cout<<"color is: "<<r17.getColor()<<endl;
cout<<"basic price is: "<<r17.getBasicPrice()<<endl;
cout<<"perfume  is or not(1 for true and 0 for false ): "<<r17.isPerfumed()<<endl;
cout<<"on sale is or not(1 for true and 0 for false ): "<<r17.isOnSale()<<endl;
b8 - r16;
Flower r18 = b8[0];

	cout<<"After - operation b2 is: \n"<<endl;	
cout<<"name is: "<<r18.getName()<<endl;
cout<<"color is: "<<r18.getColor()<<endl;
cout<<"basic price is: "<<r18.getBasicPrice()<<endl;
cout<<"perfume  is or not(1 for true and 0 for false ): "<<r18.isPerfumed()<<endl;
cout<<"on sale is or not(1 for true and 0 for false ): "<<r18.isOnSale()<<endl;



cout<<"\n\n\nfunctionality of == operator for bouguet  is\n\n\n "<<endl;//functionality of == operator buquet
Flower r12("Rose", "Red", 2.1, true, true);

	Flower r10("Rose", "Yellow", 3.6, true);

	Flower r11("Rose", "Yellow", 1.5);

	Bouquet b6;
	b6 += r12; 
	b6 += r12; 
	b6 += r10;
	b6 += r11;

	Bouquet b7;
	b6 = b7;
	bool v3 = b7 == b7;
	if(v3)
cout<<"yes both objects are same"<<endl;
else
cout<<"not both objects are not same"<<endl;

return 0;
}


























