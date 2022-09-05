#include "pch.h"


TEST(testString, Constructor) {


	String S1("Hello World!");
	EXPECT_TRUE(strcmp("Hello World!", S1.getMystr()) == 0);

	String S2(S1);
	EXPECT_TRUE(strcmp(S2.getMystr(), S1.getMystr()) == 0);

	String S3(10);
	EXPECT_TRUE(S3.getSize() == 10);


}



TEST(testString, Operator_plus) {

	String S1("Hello");
	String str("World");
	S1 = S1 + str;
	EXPECT_TRUE(strcmp("HelloWorld", S1.getMystr()) == 0);



	String S3("Hello");
	char * s = "123";
	S3 = S3 + s;
	EXPECT_TRUE(strcmp("Hello123", S3.getMystr()) == 0);

}


TEST(testString, Operator_equal) {

	String S1("Hello");
	String str("World");
	S1 = str;
	EXPECT_TRUE(strcmp("World", S1.getMystr()) == 0);



	String S3("Hello");
	char * s = "123";
	S3 =  s;
	EXPECT_TRUE(strcmp("123", S3.getMystr()) == 0);

}

TEST(testString, Operator_equal_equal) {

	String S1("Hello");
	String str("Hello");
	EXPECT_TRUE(S1==str);

	EXPECT_TRUE((S1 == "Hello"));

	char * s = "Hello";
	EXPECT_TRUE(S1 == s);

}

TEST(testString, Operator_index) {

	String S1("Hello");
	EXPECT_EQ(S1('o'),4);

	String S2("e");
	EXPECT_EQ(S1(S2), 1);

	string s3 = "H";
	EXPECT_EQ(S1(s3), 0);

	char * s4 = "H";
	EXPECT_EQ(S1(s4), 0);
}

TEST(testString, Operator_Mul) {

	String S1("Hello");
	S1 = S1 * 4;
	EXPECT_TRUE(strcmp("HelloHelloHelloHello", S1.getMystr()) == 0);;
}

