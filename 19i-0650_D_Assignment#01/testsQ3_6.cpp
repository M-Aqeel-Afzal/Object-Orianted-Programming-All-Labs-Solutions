/*

int MatrixDet ( int ** Matrix , int rows , int cols ) {

}


*/

#include "q3.cpp"
#include <gtest/gtest.h>

//-------------------Question3_6-----------------
TEST(Question3_6, First) {
   
	int ** m1 = new int*[1];
	m1[0] = new int; // 1x1 matrix
	m1[0][0] = 10;	


	int res = MatrixDet(m1, 1, 1);
	
	ASSERT_EQ(res, 10);

}

TEST(Question3_6, Second) {
   
	int ** m1 = new int*[2];// 2x2 matrix
	m1[0] = new int[2];
	m1[1] = new int[2];

	m1[0][0] = 10;	
	m1[0][1] = 10;	
	m1[1][0] = 11;	
	m1[1][1] = 11;	

	
	int res = MatrixDet(m1, 2, 2);
	
	ASSERT_EQ(res, 0);
}

TEST(Question3_6, third) {
   
	int ** m1 = new int*[2];// 3x3 matrix
	m1[0] = new int[3];
	m1[1] = new int[3];
	m1[2] = new int[3];

	m1[0][0] = 6;	
	m1[0][1] = 1;	
	m1[0][2] = 1;	
	m1[1][0] = 4;	
	m1[1][1] = -2;	
	m1[1][2] = 5;	
	m1[2][0] = 2;	
	m1[2][1] = 8;
	m1[2][2] = 7;

	
	int res = MatrixDet(m1, 3, 3);

	ASSERT_EQ(res, -306);	
}


int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
