
#include "submission.cpp"
#include <gtest/gtest.h>
#include<cstring>
#include<iostream>

//*****************Task 1

 TEST(SaleClass, Default_Parameter) {
	  Sale s(3);
	 EXPECT_DOUBLE_EQ(3, s.getItemCost());
	 EXPECT_DOUBLE_EQ(0.05, s.getTaxRate());
	 EXPECT_DOUBLE_EQ(0.15, s.getTax());
	 EXPECT_DOUBLE_EQ(3.15, s.getTotal());

}

 TEST(SaleClass, Parameterized_Constructor) {
	double cost=5;
	double tax=0.07;
	double totalTax=0.35;
	double totalcost=5.35;

	 Sale s1(cost,tax);
	 EXPECT_DOUBLE_EQ(cost, s1.getItemCost());
	 EXPECT_DOUBLE_EQ(tax, s1.getTaxRate());
	 EXPECT_DOUBLE_EQ(totalTax, s1.getTax());
	 EXPECT_DOUBLE_EQ(totalcost, s1.getTotal());
}


  //*****************Task 2
 TEST(BoxClass, Func_getVolume) {
	double l=2;
	double b=3;
	double h=4;
	Box box;
	box.setLength(l);
	box.setBreadth(b);
	box.setHeight(h);
	EXPECT_DOUBLE_EQ(24, box.getVolume());
 }

 TEST(BoxClass, Func_getSurfaceArea) {
	double l=2;
	double b=3;
	double h=4;
	Box box;
	box.setLength(l);
	box.setBreadth(b);
	box.setHeight(h);
	EXPECT_DOUBLE_EQ(52, box.getSurfaceArea());
 }

 TEST(BoxClass,UpdateFunc){
	Box box;
    	Box arr[3];

  ASSERT_TRUE(box.update(arr,5,2,5)); 
  EXPECT_DOUBLE_EQ(5, arr[2].getHeight());
 }






  //*****************Task 3


  TEST(CoffeeShotsClass,Func_getSize)
  {
	  //getSize()
	  coffeeShots c(20,55,"latte");
	  EXPECT_EQ('m',c.getSize());
  }

  TEST(CoffeeShotsClass,Func_SpillOver)
  {
	  //spillOver()
	  coffeeShots c(20,55,"latte");
	  EXPECT_EQ(50,c.spillOver(5));
	 

 }

  TEST(CoffeeShotsClass,Func_upSize)
  {
	  coffeeShots c(20,50,"latte");
 	  c.upSize();
	  EXPECT_EQ('m',c.getSize());
	  

  }
 


int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
