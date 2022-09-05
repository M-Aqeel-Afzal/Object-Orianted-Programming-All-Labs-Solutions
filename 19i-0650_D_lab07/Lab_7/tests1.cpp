
#include "Date.cpp"
#include "Point.cpp"
#include "Rectangle.cpp"
#include <gtest/gtest.h>





//task1
TEST(Point, TestForPointClass) { 
        Point p;
        ASSERT_EQ(0,p.getX());
        ASSERT_EQ(0,p.getY());
        Point p1(5,6);
        ASSERT_EQ(5,p1.getX());
        ASSERT_EQ(6,p1.getY());
        Point p2(p1);
        
        
        ASSERT_EQ(5,p2.getX());
        p2.setY(8);
        ASSERT_EQ(8,p2.getY());
}
//task 2
TEST(Rectangle, Constructors) { 
        Rectangle x (1,2,3,4);
        ASSERT_EQ(0,x.toString().compare("Rectangle[x=1, y=2, width=3, height=4]"));
        
        
}
TEST(Rectangle, contains) { 
        Rectangle x (2,3,4,4);
	Point y1(3,3);
	Point y2(2,2);
	Point y3(1,1);
	bool e=x.contains(y1);
	bool b=true;
      ASSERT_EQ(b,e);
	e=x.contains(y2);
	ASSERT_EQ(b,e);
	e=x.contains(y3);
	b=false;
	ASSERT_EQ(b,e);
        
        
}

TEST(Rectangle, Union1) { 
        Rectangle x (2,3,4,4);
	Rectangle y (3,3,5,4);
	Rectangle z=x.Union(y);
        ASSERT_EQ(0,z.toString().compare("Rectangle[x=2, y=3, width=6, height=4]"));
        
        
}

TEST(Rectangle, Union2) { 
        Rectangle x (2,3,4,4);
	Rectangle y (5,2,5,4);
	Rectangle z=x.Union(y);
        ASSERT_EQ(0,z.toString().compare("Rectangle[x=0, y=0, width=0, height=0]"));
        


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
//task4
TEST(Date, Constructors) { 
        Date x(2000,11,6);
        ASSERT_EQ(6, x.getDay());
        ASSERT_EQ(11, x.getMonth());
        ASSERT_EQ(2000, x.getYear());
}

TEST(Date, toString) { 
        Date x(2000,11,6);
        
        ASSERT_EQ(0, x.toString().compare("2000/11/6"));
}

TEST(Date, isLeapYear) { 
        Date x(2000,11,6);
	Date x1(1999,12,6);
        
        ASSERT_EQ(1, x.isLeapYear());
        ASSERT_EQ(0, x1.isLeapYear());
}

TEST(Date, add1) { 
        Date x(2000,11,6);
	int days=20;
	x.add(days);
	ASSERT_EQ(0,x.toString().compare("2000/11/26"));
}

TEST(Date, add2) { 
        Date y1(2003,12,31);
        
        y1.add(1,29);
        //cout<<y1.toString()<<endl;
	ASSERT_EQ(0,y1.toString().compare("2004/02/29"));
}
TEST(Date, add3) { 
        Date z1(2003,12,25);
        Date z2(1,1,1);
        z1.add(z2);
	ASSERT_EQ(0,z1.toString().compare("2005/01/26"));
}

TEST(Date, Sub1) { 
        Date z(2005,1,21);
        z.subtract(41);
        
	ASSERT_EQ(0,z.toString().compare("2004/12/11"));
}

TEST(Date, Sub2) { 
        Date p1(2004,2,29);
        p1.subtract(1,0);
	ASSERT_EQ(0,p1.toString().compare("2004/01/31"));
}
TEST(Date, Sub3) { 
        
        Date z1(2005,1,26);
        Date z2(1,1,1);
        z1.subtract(z2);
	ASSERT_EQ(0,z1.toString().compare("2003/12/25"));
}
TEST(Date, addWeeks) { 
        Date x(2000,11,6);
	int days=20;
	x.add(days);
	int weeks=3;
	x.addWeeks(weeks);
	ASSERT_EQ(0,x.toString().compare("2000/12/17"));
}

TEST(Date, daysTo) { 
        Date x(2000,11,6);
	int days=20;
	x.add(days);
	int weeks=3;
	x.addWeeks(weeks);
	Date y(2000,11,6);
	y.daysTo(x);
	ASSERT_EQ(41,y.daysTo(x));
	
}
