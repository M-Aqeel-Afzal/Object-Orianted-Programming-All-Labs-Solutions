#include "pch.h"
#include "Bouquet.h"
#include "string.h"


ostream& operator<<(ostream& out, const Flower &F1)
{
	if (F1.getBasicPrice() != 0)
		cout << F1.getName() << " " << F1.getColor() << " " << F1.isPerfumed() << " Price :" << F1.getBasicPrice() << "Rs\n";
	return out;
}
ostream& operator<<(ostream& out, const Bouquet &B1)
{
	cout << '\n';
	for (int x = 0; x < B1.getCount(); x += 1)
	{
		cout << B1[x];
	}
	return out;
}



TEST(testFlower, FlowerConstructor) {

	Flower r3("Rose", "Red", 2.1, true, true);

	EXPECT_TRUE(r3.getName().compare("Rose") == 0);
	EXPECT_TRUE(r3.getColor().compare("Red") == 0);
	EXPECT_FLOAT_EQ(r3.getBasicPrice() , 2.1);
	EXPECT_EQ(r3.isPerfumed(), 1);
	EXPECT_EQ(r3.isOnSale(), 1);

}


TEST(testFlower, Flower_init) {

	Flower r3;
	r3.init("Rose", "Red", 2.1, true, true);

	EXPECT_TRUE(r3.getName().compare("Rose") == 0);
	EXPECT_TRUE(r3.getColor().compare("Red") == 0);
	EXPECT_FLOAT_EQ(r3.getBasicPrice() , 2.1);
	EXPECT_EQ(r3.isPerfumed(), 1);
	EXPECT_EQ(r3.isOnSale(), 1);

}


TEST(testFlower, Flower_equal_equal) {

	Flower r3("Rose", "Red", 2.1, true, true);

	Flower r2("Rose", "Yellow", 3.6, true);
	Flower r1("Rose", "Yellow", 3.6, true);
	bool b = r3 == r2;
	EXPECT_EQ(b, false);

	b = r1 == r2;
	EXPECT_EQ(b, true);

}




TEST(testBouquet, Bouquet_plus_equal_and_subscript) {

	Flower r1("Rose", "Yellow", 1.5);

	Bouquet b1;
	b1 += r1;

	Flower r3 = b1[0];


	EXPECT_TRUE(r3.getName().compare("Rose") == 0);
	EXPECT_TRUE(r3.getColor().compare("Yellow") == 0);
	EXPECT_FLOAT_EQ(r3.getBasicPrice(), 0.75);  // as OnScale is false so price will be half
	EXPECT_EQ(r3.isPerfumed(), 0);
	EXPECT_EQ(r3.isOnSale(), 0);

}

TEST(testBouquet, Bouquet_minus_equal) {

	Flower r1("Rose", "Yellow", 1.5);
	Flower r2("Rose", "Red", 1.5,true,true);
	Bouquet b1;
	b1 += r1; b1 += r1, b1+=r2;

	Bouquet b2;
	b2 += r2;
	bool b = b2 == b1;
	EXPECT_EQ(b, false);
	b1 -= r1;
	b = b2 == b1;
	EXPECT_EQ(b, true);

}


TEST(testBouquet, Bouquet_plus) {

	Flower r1("Rose", "Yellow", 1.5);

	Bouquet b1;
	b1 = b1 + r1;

	Flower r3 = b1[0];


	EXPECT_TRUE(r3.getName().compare("Rose") == 0);
	EXPECT_TRUE(r3.getColor().compare("Yellow") == 0);
	EXPECT_FLOAT_EQ(r3.getBasicPrice(), 0.75);  // as OnScale is false so price will be half
	EXPECT_EQ(r3.isPerfumed(), 0);
	EXPECT_EQ(r3.isOnSale(), 0);

}

TEST(testBouquet, Bouquet_minus) {

	Flower r1("Rose", "Yellow", 1.5);
	Flower r2("Rose", "Red", 1.5, true, true);
	Bouquet b1;
	b1 += r1; b1 += r1, b1 += r2;

	Bouquet b2;
	b2 += r2;
	bool b = b2 == b1;
	EXPECT_EQ(b, false);
	b1 = b1 - r1;
	b = b2 == b1;
	EXPECT_EQ(b, true);

}



TEST(testBouquet, Bouquet_euqal_equal) {

	Flower r1("Rose", "Yellow", 1.5);
	Flower r2("Rose", "Yellow", 3.6, true);
	Bouquet b1;
	b1 += r1; 

	Bouquet b2;
	b2 += r1;

	bool b = b2 == b1;
	EXPECT_EQ(b, true);

	Flower r3("Rose", "Red", 2.1, true, true);

	b2 += r3;
	b = b2 == b1;
	EXPECT_EQ(b, false);

	b1 += r1; b1+= r2;
	Bouquet b3;
	b3 += r1; b3 += r2; b3 += r2;

	b = b3 == b1;
	EXPECT_EQ(b, false);
	Bouquet b4;
	b4 += r1; b4 += r1; b4 += r2;

	b = b4 == b1;
	EXPECT_EQ(b, true);



}

TEST(testBouquet, Bouquet_CopyConstructor) {

	Flower r3("Rose", "Red", 2.1, true, true);

	Flower r2("Rose", "Yellow", 3.6, true);

	Flower r1("Rose", "Yellow", 1.5);

	Bouquet b1;
	b1 += r1; // add one Flower of r1 type
	b1 += r1; // add another Flower of r1
	b1 += r2;
	b1 += r3;

	Bouquet b2(b1);
	bool b = b2 == b1;
	EXPECT_EQ(b, true);

}

TEST(testBouquet, Bouquet_equal) {

	Flower r3("Rose", "Red", 2.1, true, true);

	Flower r2("Rose", "Yellow", 3.6, true);

	Flower r1("Rose", "Yellow", 1.5);

	Bouquet b1;
	b1 += r1; 
	b1 += r1; 
	b1 += r2;
	b1 += r3;

	Bouquet b2;
	b2 = b1;
	bool b = b2 == b1;
	EXPECT_EQ(b, true);

}






TEST(testBouquet, Bouquet_Perfumed) {

	Flower r2("Rose", "Yellow", 1.5);
	Flower r1("Rose", "Yellow", 1.5,true);

	Bouquet b1;
	b1 += r1; b1 += r2;

	EXPECT_EQ(b1.parfume(), true);

}


