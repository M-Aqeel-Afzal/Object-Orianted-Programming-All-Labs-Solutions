
#include "q1.cpp"
#include <gtest/gtest.h>

//-------------------Q1_9-----------------
TEST(Question1_9, First) {
	char t1[]="Hello World";
	char t2[]="World";

	ASSERT_EQ(6,StrFind(t1,t2));
}

TEST(Question1_9, Second) {
	char t1[]="Hello World";
	char t2[]="World2";

	ASSERT_EQ(-1,StrFind(t1,t2));
}

TEST(Question1_9, Third) {
	char t1[]="Hello World Hello";
	char t2[]="Hello";

	ASSERT_EQ(0,StrFind(t1,t2));
}



int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
