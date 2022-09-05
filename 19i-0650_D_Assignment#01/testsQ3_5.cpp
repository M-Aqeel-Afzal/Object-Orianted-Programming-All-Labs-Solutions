/*
int ** MatrixRotate ( int ** Matrix , int rows , int cols ) {

}

*/

#include "q3.cpp"
#include <gtest/gtest.h>

//-------------------Question3_5-----------------
TEST(Question3_5, First) {
   
	int ** m1 = new int*[1];
	m1[0] = new int; // 1x1 matrix
	m1[0][0] = 10;	


	int **res = MatrixRotate(m1, 1, 1);
	
	ASSERT_EQ(res[0][0], 10);

}

TEST(Question3_5, Second) {
   
	int ** m1 = new int*[2];// 2x2 matrix
	m1[0] = new int[2];
	m1[1] = new int[2];

	m1[0][0] = 10;	
	m1[0][1] = 10;	
	m1[1][0] = 11;	
	m1[1][1] = 11;	

	
	int **res = MatrixRotate(m1, 2, 2);
	
	ASSERT_EQ(res[0][0], 11);
	ASSERT_EQ(res[0][1], 10);
	ASSERT_EQ(res[1][0], 11);
	ASSERT_EQ(res[1][1], 10);

}

TEST(Question3_5, third) {
   
	int ** m1 = new int*[3];// 3x3 matrix
	m1[0] = new int[3];
	m1[1] = new int[3];
	m1[2] = new int[3];

	m1[0][0] = 1;	
	m1[0][1] = 2;	
	m1[0][2] = 3;	
	m1[1][0] = 4;	
	m1[1][1] = 5;	
	m1[1][2] = 6;	
	m1[2][0] = 7;	
	m1[2][1] = 8;
	m1[2][2] = 9;

	
	int **res = MatrixRotate(m1, 3, 3);

	ASSERT_EQ(res[0][0] , 7);	
	ASSERT_EQ(res[0][1] , 4);	
	ASSERT_EQ(res[0][2] , 1);	
	ASSERT_EQ(res[1][0] , 8);	
	ASSERT_EQ(res[1][1] , 5);	
	ASSERT_EQ(res[1][2] , 2);	
	ASSERT_EQ(res[2][0] , 9);	
	ASSERT_EQ(res[2][1] , 6);
	ASSERT_EQ(res[2][2] , 3);

}

int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
