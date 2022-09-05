
#include "q1.cpp"
#include <gtest/gtest.h>

//-------------------Q1_3-----------------
TEST(Question1_3, First) {
	char t1[]="This World";
	char t2[]="Test String";
	char act_res[]="Test World";
	char* r=Strncpy(t1,t2,4);

	ASSERT_EQ( 0, strcmp(act_res,r) );

}

//-------------------Q1_3-----------------
TEST(Question1_3, Second) {
	char t1[]="My World";
	char t2[]="Hi";
	char act_res[]="Hi World";
	char* r=Strncpy(t1,t2,4);

	ASSERT_EQ( 0, strcmp(act_res,r) );

}



int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
