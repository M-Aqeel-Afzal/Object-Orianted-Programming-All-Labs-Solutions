#include "q1.cpp"
#include <gtest/gtest.h>

//-------------------Q1_1-----------------
TEST(Question1_1, First) {
	char t1[]="THIS IS A TEST STRING!";
	ASSERT_EQ(22,Strlen(t1));
}

TEST(Question1_1, Second) {
	char t2[]="Hello World";
	ASSERT_EQ(11,Strlen(t2));
}



int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
