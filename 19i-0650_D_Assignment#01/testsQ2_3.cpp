
#include "q2.cpp"
#include <gtest/gtest.h>

//-------------------Question2_3-----------------
TEST(Question2_3, First) {
   
	char s1[]="This is a test String \nThis is a New Line";
	char** uwords1;
	int* arr1;
	int size1;
	countingUniqueWords(s1,uwords1,arr1,size1);
	/* arr and uword should contain the following. 
	i-e Split the words on the basis of space and '\n'
	Index 0 of uwords should contain "This" and Index 0 of arr should contain the frequency of "This";
	Index 1 of uwords should contain "is" and Index 1 of arr should contain the frequency of "is";
	Index 2 of uwords should contain "a" and Index 2 of arr should contain the frequency of "a";
	Index 3 of uwords should contain "test" and Index 3 of arr should contain the frequency of "test";
	Index 4 of uwords should contain "String" and Index 4 of arr should contain the frequency of "String";
	Index 5 of uwords should contain "New" and Index 5 of arr should contain the frequency of "New";
	and so on
	*/
	ASSERT_EQ(7,size1);
	ASSERT_EQ(2,arr1[0]);
	ASSERT_EQ(2,arr1[1]);
	ASSERT_EQ(2,arr1[2]);
	ASSERT_EQ(1,arr1[3]);
	ASSERT_EQ(1,arr1[4]);
	ASSERT_EQ(1,arr1[6]);
	ASSERT_EQ('T',uwords1[0][0]);
	ASSERT_EQ('s',uwords1[0][3]);
	ASSERT_EQ('i',uwords1[1][0]);
	ASSERT_EQ('a',uwords1[2][0]);
	ASSERT_EQ('s',uwords1[3][2]);
	ASSERT_EQ('N',uwords1[5][0]);
}


TEST(Question2_3, second) {
   
	char s[]="Hello World";
	int* arr;
	int size;
	char** uwords;
	countingUniqueWords(s,uwords,arr,size);
	/* arr and uword should contain the following. 
	i-e Split the words on the basis of space and '\n'
	Index 0 of uwords should contain "Hello" and Index 0 of arr should contain the frequency of "Hello";
	Index 1 of uwords should contain "World" and Index 1 of arr should contain the frequency of "World";
	and so on
	*/

	ASSERT_EQ(2,size);
	ASSERT_EQ(1,arr[0]);
	ASSERT_EQ(1,arr[1]);
	ASSERT_EQ('H',uwords[0][0]);
	ASSERT_EQ('l',uwords[0][3]);
	ASSERT_EQ('W',uwords[1][0]);
	ASSERT_EQ('o',uwords[1][1]);

}

int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
