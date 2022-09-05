/*
int ** MatrixMul ( int ** MatrixA , int rowsA , int colsA , int ** MatrixB , int rowsB , int colsB ) {

}
*/
#include "q3.cpp"
#include <gtest/gtest.h>

//-------------------Question3_1-----------------
TEST(Question3_1, First) {
   
	int ** m1 = new int*[1];
	m1[0] = new int; // 1x1 matrix
	m1[0][0] = 10;	

	int ** m2 = new int*[1];
	m2[0] = new int; // 1x1 matrix
	m2[0][0] = 10;

	int **res = MatrixMul(m1, 1,1,m2,1,1);
	
	ASSERT_EQ(res[0][0], 100);

}

TEST(Question3_1, Second) {
   
	int ** m1 = new int*[2];// 2x2 matrix
	m1[0] = new int[2];
	m1[1] = new int[2];

	m1[0][0] = 10;	
	m1[0][1] = 10;	
	m1[1][0] = 10;	
	m1[1][1] = 10;	

	int ** m2 = new int*[2];// 2x2 matrix
	m2[0] = new int[2];
	m2[1] = new int[2];

	m2[0][0] = 1;	
	m2[0][1] = 1;	
	m2[1][0] = 1;	
	m2[1][1] = 1;	

	int **res = MatrixMul(m1, 2, 2, m2, 2, 2);
	
	ASSERT_EQ(res[0][0], 20);
	ASSERT_EQ(res[0][1], 20);
	ASSERT_EQ(res[1][0], 20);
	ASSERT_EQ(res[1][1], 20);

}

int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
