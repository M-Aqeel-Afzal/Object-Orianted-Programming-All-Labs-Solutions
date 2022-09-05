
#include "q1.cpp"
#include <gtest/gtest.h>

//-------------------Q1_10-----------------
TEST(Question1_10, First) {
	char t1[]="Hello World";
	char* r=SubStr(t1,3,3);
	
	char res[]="lo ";
	ASSERT_EQ( 0, strcmp(r,res) );
}

TEST(Question1_10, second) {
	char t1[]="Hello World";
	char* r=SubStr(t1,8,5);

	char res[]="rld";
	ASSERT_EQ( 0, strcmp(r,res) );
}

TEST(Question1_11, Third) {
	char t1[]="Hello World";
	char *r=SubStr(t1,4,2);
	
	char res[]="o ";
	ASSERT_EQ( 0, strcmp(r,res) );
}


int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
