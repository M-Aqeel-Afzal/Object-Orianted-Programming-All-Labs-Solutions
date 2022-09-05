#include "Complex.cpp"
//#include "Holiday.cpp"
//#include "Date.cpp"
#include <gtest/gtest.h>

TEST(ComplexNumers, Constructors) { 
    Complex c1;
    ASSERT_EQ(0.0, c1.getReal());
    ASSERT_EQ(0.0, c1.getImaginary());
    
}

TEST(ComplexNumers, addComplex1) { 
    Complex c1(5.0,6.0);
    
    Complex c3 = c1.addComplex(3);
    
    ASSERT_EQ(8.0, c3.getReal());
    ASSERT_EQ(6.0, c3.getImaginary());
}

TEST(ComplexNumers, addComplex2) { 
    Complex c1(5.0,6.0);
    Complex c2(7.0,8.0);
    Complex c3 = c1.addComplex(c2);
    
    ASSERT_EQ(12.0, c3.getReal());
    ASSERT_EQ(14.0, c3.getImaginary());
}

TEST(ComplexNumers, subComplex1) { 
    Complex c1(5.0,6.0);
    
    Complex c3 = c1.subComplex(3);
    
    ASSERT_EQ(2.0, c3.getReal());
    ASSERT_EQ(6.0, c3.getImaginary());
}
TEST(ComplexNumers, subComplex2) { 
    Complex c1(5.0,6.0);
    Complex c2(7.0,8.0);
    Complex c3 = c1.subComplex(c2);
    
    ASSERT_EQ(-2.0, c3.getReal());
    ASSERT_EQ(-2.0, c3.getImaginary());
}
TEST(ComplexNumers, mulComplex1) { 
    Complex c1(5.0,6.0);
    
    Complex c3 = c1.mulComplex(3);
    
    ASSERT_EQ(15.0, c3.getReal());
    ASSERT_EQ(18.0, c3.getImaginary());
}
TEST(ComplexNumers, mulComplex2) { 
    Complex c1(5.0,6.0);
    Complex c2(7.0,8.0);
    Complex c3 = c1.mulComplex(c2);
    
    ASSERT_EQ(-13.0, c3.getReal());
    ASSERT_EQ(82.0, c3.getImaginary());
}
/*
TEST(Holiday, Constructors) { 
    Holiday a ("Day 1",1,"September");
     
    ASSERT_EQ(0, a.getName().compare("Day 1"));
    ASSERT_EQ(0, a.getMonth().compare("September"));
    ASSERT_EQ(1, a.getDay());
}
TEST(Holiday, inSameMonth) { 
    Holiday a ("Day 1",1,"Sep");
    Holiday b ("Day 2",2,"Feb");
    Holiday c ("Day 1",1,"Sep");
    
    
    ASSERT_EQ(0, inSameMonth(a,b));
    ASSERT_EQ(1, inSameMonth(a,c));
    
   
}
TEST(Holiday, avgDate) { 
    Holiday a ("Day 1",1,"September");
    Holiday b ("Day 2",2,"September");
    //cout<<inSameMonth(a,b)<<endl;
    Holiday * ptr=new Holiday [2];
    *ptr=a;
    *(ptr+1)=b;
    
    
    ASSERT_EQ(1.5, avgDate(ptr, 2));
    
   
}

*/
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
