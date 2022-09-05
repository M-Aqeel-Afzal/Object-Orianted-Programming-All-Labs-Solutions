#include "Shape.cpp"
#include "Rectangle.cpp"
#include "Triangle.cpp"
#include "Circle.cpp"

#include "Employee.cpp"
#include "Driver.cpp"
#include "Developer.cpp"
#include <gtest/gtest.h>

//----------------------------------------------------------------------------
//------------------------Question 1--------------------------------------
//----------------------------------------------------------------------------
//
////-------------------TEST 1---------------- (Marks=1)
TEST(Class_Circle, area) 
{   			
	Shape* shape=new Circle("Circle", 9);
	EXPECT_FLOAT_EQ(254.34,shape->area()); 
}

//-------------------TEST 2---------------- (Marks=1)
TEST(Class_Triangle, area) 
{   			
	Shape* shape=new Triangle("Triangle", 5, 9);
	EXPECT_FLOAT_EQ(22.5,shape->area());
}

//-------------------TEST 3---------------- (Marks=1)
TEST(Class_Rectangle, area) 
{   			
	Shape* shape=new Rectangle("Rectangle",4, 8);
	EXPECT_FLOAT_EQ(32,shape->area());
}



//----------------------------------------------------------------------------
//------------------------Question 2--------------------------------------
//----------------------------------------------------------------------------

//------------------- TEST 1---------------- (Marks=1)
TEST(Class_Driver, getSal) 
{   		
  
	Employee* e=new Driver( 657, 8000);
	EXPECT_EQ(8000,e->getSalary());

}
//------------------- TEST 2---------------- (Marks=1)
TEST(Class_Developer, getSal) 
{   		
  
	Employee* e=new Developer(101, 80000);
	EXPECT_EQ(80000,e->getSalary());

}




int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
