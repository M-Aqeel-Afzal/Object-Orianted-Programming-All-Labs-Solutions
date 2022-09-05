#include "Lab3A.cpp"
#include <gtest/gtest.h>
#include<string>
TEST(Question1,Number) { 
int A1[6]={1,1,1,1,1,1}, A2[6]={1,1,1,1,1,1}, A3[6]={1,1,1,1,1,1}, A4[6]={1,1,1,1,1,1}, A5[6]={1,1,1,1,1,1}, *P[5];

	 P[0] = A1;

	P[1] = A2;

	 P[2]= A3;

	P[3] = A4;

	P[4]= A5;

     

 ASSERT_EQ(6,sum1(P,5,6));

 ASSERT_EQ(6,sum1(P+1,5,6));

 ASSERT_EQ(6,sum1(P+2,5,6));

 ASSERT_EQ(6,sum1(P+3,5,6));

 ASSERT_EQ(6,sum1(P+4,5,6));

}
//*****************************SUM(ncols)***************************
TEST(Question1b,Number) { 
//int A1[5]={1,1,1,1,1}, A2[5]={1,1,1,1,1}, A3[5]={1,1,1,1,1}, A4[5]={1,1,1,1,1}, A5[5]={1,1,1,1,1}; 
int* A1,*A2,*A3,*A4,*A5;
         int* P[5];
       int ncols=5;
	A1 = new int [5];
	A2 = new int [5];
	A3 = new int [5];
	A4 = new int [5];
	A5 = new int [5];
             A1[0]=1;A1[1]=1;A1[2]=1;A1[3]=1;A1[4]=1;
		A2[0]=1;A2[1]=1;A2[2]=1;A2[3]=1;A2[4]=1;
		A3[0]=1;A3[1]=1;A3[2]=1;A3[3]=1;A3[4]=1;
		A4[0]=1;A4[1]=1;A4[2]=1;A4[3]=1;A4[4]=1;
		A5[0]=1;A5[1]=1;A5[2]=1;A5[3]=1;A5[4]=1;
		/**A1[5]={1,1,1,1,1};
		*A2[5]={1,1,1,1,1};
		*A3[5]={1,1,1,1,1};
		*A4[5]={1,1,1,1,1};
		*A5[5]={1,1,1,1,1};*/

        P[0] = A1;

	P[1] = A2;

	P[2]= A3;

	P[3] = A4;

	P[4]= A5;

 ASSERT_EQ(5,sum(P,5,5));

 ASSERT_EQ(5,sum(P+1,5,5));

 ASSERT_EQ(5,sum(P+2,5,5));

 ASSERT_EQ(5,sum(P+3,5,5));
 ASSERT_EQ(5,sum(P+4,5,5));
}
//******************FACTORIAL*******************************
TEST(Q2A, Factorial) { 
    ASSERT_EQ(6, fact(3));
    ASSERT_EQ(120, fact(5));
    ASSERT_EQ(24, fact(4));
    }
TEST(Q2B, Factorial) { 
    ASSERT_EQ(6, refact(3));
    ASSERT_EQ(120, refact(5));
    ASSERT_EQ(24, refact(4));
    }

//************PRIME OR NOT****************************************
TEST(Q3,Number) { 
    ASSERT_EQ(true,isPrime(7,6));
    ASSERT_EQ(false,isPrime(8,7));    
    ASSERT_EQ(false,isPrime(4,3));
    ASSERT_EQ(true,isPrime(2,1));    
}
//************GREATEST COMMON DIVISOR************************
TEST(Q4,Number) { 
    ASSERT_EQ(12,gcd(24,84));
   ASSERT_EQ(10,gcd(10,50));
}
//***********************string length************************************
TEST(Q5, stringLength) { 
  
ASSERT_EQ(3, recLen("Lab"));
ASSERT_EQ(10,recLen ("OOP IS FUN"));
    }
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
