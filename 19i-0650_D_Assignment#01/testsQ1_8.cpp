
#include "q1.cpp"
#include <gtest/gtest.h>

//-------------------Q1_8-----------------
TEST(Question1_8, First) {
	char t1[]="Hello World";
	char res1[] = "Hello";
	char res2[] = "World";

	char** r= StrTok(t1,' ');
	ASSERT_EQ(0, strcmp(r[0],res1) );
	ASSERT_EQ(0, strcmp(r[1],res2) );
}

TEST(Question1_8, Second) {
	char t1[]="Hello?World?OOP";
	
	char res1[] = "Hello";
	char res2[] = "World";
	char res3[] = "OOP";

	char** r= StrTok(t1,'?');
	ASSERT_EQ(0, strcmp(r[0],res1) );
	ASSERT_EQ(0, strcmp(r[1],res2) );
	ASSERT_EQ(0, strcmp(r[2],res3) );
}


int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
