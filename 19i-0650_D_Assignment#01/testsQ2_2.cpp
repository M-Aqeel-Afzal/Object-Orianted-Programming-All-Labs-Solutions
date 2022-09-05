
#include "q2.cpp"
#include <gtest/gtest.h>

//-------------------Question2_2-----------------
TEST(Question2_2, First) {
   
	char s1[]="This is a test String \n New Line";
	int* arr1;
	int size1;
	countWordsBasedOnLength(s1,arr1,size1);
	/* arr should contain the frequency of words as given. 
	i-e 
	Index 0 contains frequency of spaces
	Index 1 contains frequency of length 1 words/characters except space
	Index 2 contains frequency of length 2 words
	Index 3 contains frequency of length 3 words
	and so on
	*/
	ASSERT_EQ(7,size1);
	ASSERT_EQ(7,arr1[0]);
	ASSERT_EQ(2,arr1[1]);
	ASSERT_EQ(1,arr1[2]);
	ASSERT_EQ(1,arr1[3]);
	ASSERT_EQ(3,arr1[4]);
	ASSERT_EQ(1,arr1[6]);

}


TEST(Question2_2, second) {

	char s[]="Hello World";
	int* arr;
	int size;
	countWordsBasedOnLength(s,arr,size);
	/* arr should contain the frequency of words as given. 
	i-e 
	Index 0 contains frequency of spaces
	Index 1 contains frequency of length 1 words/characters except space
	Index 2 contains frequency of length 2 words
	Index 3 contains frequency of length 3 words
	and so on
	*/
	ASSERT_EQ(6,size);
	ASSERT_EQ(1,arr[0]);
	ASSERT_EQ(0,arr[1]);
	ASSERT_EQ(0,arr[2]);
	ASSERT_EQ(0,arr[3]);
	ASSERT_EQ(0,arr[4]);
	ASSERT_EQ(2,arr[5]);

}

int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
