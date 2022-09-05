
#include "q1.cpp"
#include <gtest/gtest.h>

//-------------------Q1_4-----------------
TEST(Question1_4, First) {
	char t1[]="Hello";
	char t2[]="World";
	char act_res[]="HelloWorld";
	char *r=StrCat(t1,t2);

	ASSERT_EQ( 0, strcmp(act_res, r) );
}

TEST(Question1_4, Second) {
	char t1[]="Object Oriented ";
	char t2[]="Programming";
	char act_res[]="Object Oriented Programming";
	char *r=StrCat(t1,t2);

	ASSERT_EQ( 0, strcmp(act_res, r) );
}


int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
