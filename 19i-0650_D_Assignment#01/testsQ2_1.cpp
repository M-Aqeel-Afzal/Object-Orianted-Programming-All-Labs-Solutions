
#include "q2.cpp"
#include <gtest/gtest.h>

//-------------------Question2_1-----------------
TEST(Question2_1, First) {
   
	char s[]="This is a test String";
	int* arr;
	int size;
	countLetters(s,arr,size);
	/* arr should contain the frequency of characters given in sequence of original character array. 
	i-e 
	Index 0 contains frequency of 'T' //case sesitive 
	Index 1 contains frequency of 'h'
	Index 2 contains frequency of 'i'
	Index 3 contains frequency of 's'
	Index 4 contains frequency of ' '(space)
	Index 5 contains frequency of 'a'
	and so on
	*/
	ASSERT_EQ(1,arr[0]);
	ASSERT_EQ(1,arr[1]);
	ASSERT_EQ(3,arr[2]);
	ASSERT_EQ(3,arr[3]);
	ASSERT_EQ(4,arr[4]);
	ASSERT_EQ(1,arr[5]);

}


TEST(Question2_1, second) {
   
	char s[]="Hello World";
	int* arr;
	int size;
	countLetters(s,arr,size);
	/* arr should contain the frequency of characters given in sequence of original character array. 
	i-e 
	Index 0 contains frequency of 'H' //case sesitive 
	Index 1 contains frequency of 'e'
	Index 2 contains frequency of 'l'
	Index 3 contains frequency of 'o'
	Index 4 contains frequency of ' '(space)
	Index 5 contains frequency of 'W'
	and so on
	*/
	ASSERT_EQ(1,arr[0]);
	ASSERT_EQ(1,arr[1]);
	ASSERT_EQ(3,arr[2]);
	ASSERT_EQ(2,arr[3]);
	ASSERT_EQ(1,arr[4]);
	ASSERT_EQ(1,arr[5]);

}

int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
