#include "q1.cpp"
#include <gtest/gtest.h>

//-------------------Q1_6-----------------
TEST(Question1_6, First) {
	char t1[]="Hello";
	char t2[]="World2";

	ASSERT_GT(0,StrCmp(t1,t2)); // answer should be less than 0
}

TEST(Question1_6, Second) {
	char t1[]="Hello";
	char t2[]="Hello";

	ASSERT_EQ(0,StrCmp(t1,t2)); // answer should be equal to 0
}


TEST(Question1_6, Third) {
	char t1[]="Hello";
	char t2[]="World2";

	ASSERT_LT(0,StrCmp(t2,t1)); // answer should be greater than 0
}

TEST(Question1_6, Fourth) {
	char t1[]="Hello";
	char t2[]="Hella";

	ASSERT_LT(0,StrCmp(t1,t2)); // answer should be greater than 0
}

int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
