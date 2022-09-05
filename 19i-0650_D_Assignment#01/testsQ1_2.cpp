#include "q1.cpp"
#include <gtest/gtest.h>

//-------------------Q1_2-----------------
TEST(Question1_2, First) {
	char t1[12]="Hello World";
	char t2[12]="Test";
	char act_res[5]="Test";
	char* r=Strcpy(t1,t2);

	ASSERT_EQ( 0, strcmp(act_res, r) );
}

TEST(Question1_2, Second) {
	char t1[12]="Hello World";
	char t2[12]="Test";
	char act_res[5]="Test";
	Strcpy(t1,t2);

	ASSERT_EQ( 0, strcmp(act_res, t1) );
}

TEST(Question1_2, Third) {
	char t1[12]="Hello World";
	char t2[12]="Test";
	char act_res[5]="Test";
	char* r=Strcpy(t1,t2);

	ASSERT_EQ( t1, r); // r and t1 have the same address
}

TEST(Question1_2, Fourth) {
	char t1[5]="Test";
	char t2[12]="Hello World";
	char act_res[5]="";
	char* r=Strcpy(t1,t2);

	ASSERT_EQ( 0, strcmp(act_res, r) ); // if the length of t1 is less than t2, then nothing is copied and an empty string is returned.
}



int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
