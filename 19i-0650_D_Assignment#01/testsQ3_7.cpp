/*
float ** MatrixInverse ( int ** Matrix , int rows , int cols ) {

}
*/

#include "q3.cpp"
#include <gtest/gtest.h>

//-------------------Question3_7-----------------
TEST(Question3_7, First) {
   
	int ** m1 = new int*[1];
	m1[0] = new int; // 1x1 matrix
	m1[0][0] = 10;	


	float **res = MatrixInverse(m1, 1, 1);
	
	ASSERT_LT(res[0][0], 10+0.1);
	ASSERT_GT(res[0][0], 10-0.1);

}

TEST(Question3_7, Second) {
   
	int ** m1 = new int*[2];// 2x2 matrix
	m1[0] = new int[2];
	m1[1] = new int[2];

	m1[0][0] = 4;	
	m1[0][1] = 7;	
	m1[1][0] = 2;	
	m1[1][1] = 6;	

	
	float **res = MatrixInverse(m1, 2, 2);
	
	ASSERT_LT(res[0][0], 0.6+0.1);
	ASSERT_GT(res[0][0], 0.6-0.1);

	ASSERT_LT(res[0][1], -0.7+0.1);
	ASSERT_GT(res[0][1], -0.7-0.1);

	ASSERT_LT(res[1][0], -0.2+0.1);
	ASSERT_GT(res[1][0], -0.2-0.1);

	ASSERT_LT(res[1][1], 0.4+0.1);
	ASSERT_GT(res[1][1], 0.4-0.1);

	
}

int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
