#include "q1.cpp"
#include <gtest/gtest.h>

//-------------------Q1_7-----------------
TEST(Question1_7, First) {
	char t1[]="Hello11";
	char t2[]="World2";

	ASSERT_GT(0,StrnCmp(t1,t2,3));
}

TEST(Question1_7, Second) {
	char t1[]="Hello";
	char t2[]="Helto";

	ASSERT_EQ(0,StrnCmp(t1,t2,3));
}


int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
