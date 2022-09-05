/#include "lab2.cpp"
#include "gtest/gtest.h"

/* ******************************************* */
/* ****************  Lab 2_Session-I ******************* */
/* ******************************************* */

 /* ****************  Task 1******************* */
TEST(Task1, First)
{   						

int a1[]={4,8,6,3,2};
int b[]={4,6,2,6,3,2};
for(int i=0;i<6;i++)
{
    ASSERT_EQ(b[i],split(a1,5,i));
}
   

}
/* ****************  Task 1 Case 2******************* */
TEST(Task1, Second)
{   						

int a1[]={4,-8,6,3,2};
int b[]={4,-8,4,2,3,};
for(int i=0;i<5;i++)
{
    ASSERT_EQ(b[i],split(a1,5,i));
}

}
/* ****************  Task 2******************* */
TEST(Task2, First)
{
	int a1[]={2, 4, -6, 5, 8, -1};

	ASSERT_EQ(12 , sum(a1,6)); 
}
/* ****************  Task 3 ******************* */

/*TEST(Task3,First)
{
 int arr[8]={ 2, 5, 4, 10, 8, 0, 16, 40 };
 int* found=find(arr,arr, 20,8);
   if(*found==20)
   {
   	ASSERT_EQ(20, *(found+5));
   }
   else if(*found==40)
   {
   	ASSERT_EQ(40, *(found+7));
   }
 	
	
}*/
/* ****************  Task 3 ******************* */

TEST(Task3,First)
{  int arr[8]={ 2, 5, 4, 10, 8, 0, 16, 40 };
   int *end=arr;
     end=end+7;
	   ASSERT_EQ(1, find(arr,end,10,8) );

}
TEST(Task3,Second)
{ 
  int arr[8]={ 2, 5, 4, 10, 8, 0, 16, 40 };
  int *end=arr;
     end=end+7;
	   ASSERT_EQ(0, find(arr,end,20,8) );


}
/* ****************  Task 4******************* */
TEST(Task4, First)
{
	int a1[]={1,2,3,4};
	int b[]={4,3,2,1};
       
	for(int i=0;i<=3;i++)
	{
	    ASSERT_EQ(b[i],reverse(a1,4,i));
	}

}
/* ****************  Task 5******************* */
TEST(Task6, First)
{   						
     char* t="This is a test String";	
	   ASSERT_EQ(21, myStrLen(t) );
}
int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);	
    return RUN_ALL_TESTS();
}








