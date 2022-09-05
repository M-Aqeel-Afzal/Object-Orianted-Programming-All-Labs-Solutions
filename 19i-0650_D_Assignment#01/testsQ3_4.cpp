/*

int ** MatrixTranspose ( float ** Matrix , int rows , int cols ) {

}
*/

#include "q3.cpp"
#include <gtest/gtest.h>

//-------------------Question3_4-----------------
TEST(Question3_4, First) {
   
	int ** m1 = new int*[1];
	m1[0] = new int; // 1x1 matrix
	m1[0][0] = 10;	


	int **res = MatrixTranspose(m1, 1, 1);
	
	ASSERT_EQ(res[0][0], 10);

}

TEST(Question3_4, Second) {
   
	int ** m1 = new int*[2];// 2x2 matrix
	m1[0] = new int[2];
	m1[1] = new int[2];

	m1[0][0] = 10;	
	m1[0][1] = 10;	
	m1[1][0] = 11;	
	m1[1][1] = 11;	

	
	int **res = MatrixTranspose(m1, 2, 2);
	
	ASSERT_EQ(res[0][0], 10);
	ASSERT_EQ(res[0][1], 11);
	ASSERT_EQ(res[1][0], 10);
	ASSERT_EQ(res[1][1], 11);

}

int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
