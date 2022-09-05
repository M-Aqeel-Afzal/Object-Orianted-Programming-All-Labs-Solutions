#include "submission.cpp"

#include <gtest/gtest.h>
#include<string>
//test case Q1
TEST(Q1, recursiveCombination) { 
    ASSERT_EQ(3, rec_ncr(3,2));
    ASSERT_EQ(3, rec_ncr(3,1));
    ASSERT_EQ(4, rec_ncr(4,3));
    }


//testcase Q2
TEST(Q2,equalitychecking ) { 
  
 int row=3,column=3;
    int **matrix1 = new int*[3];
    for (int i = 0; i < 3; i++)
    {
        matrix1[i] = new int[3];
    }
    int **matrix2 = new int*[3];
    for (int i = 0; i < 3; i++)
    {
        matrix2[i] = new int[3];
    }
   int **matrix3 = new int*[3];
    for (int i = 0; i < 3; i++)
    {
        matrix3[i] = new int[3];
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrix1[i][j]=1;
	    matrix2[i][j]=1;
	   matrix3[i][j]=1;
        }
    }
    
    ASSERT_EQ(1, equal(matrix1, matrix2,matrix3, 2, 2));
 //FOR NOT EQUAL
      int **matrix4= new int*[4];

	for (int i = 0; i < 4; i++)
	matrix4[i] = new int[4];

	int **matrix5 = new int*[4];
	for (int i = 0; i < 4; i++)
	matrix5[i] = new int[4];
       int **matrix6= new int*[4];

	for (int i = 0; i < 4; i++)
	matrix6[i] = new int[4];

	for (int i = 0; i < 4; i++)
	{
	for (int j = 0; j < 4; j++)
	{
        matrix4[i][j]=i;
	matrix5[i][j]=j;
	matrix6[i][j]=i;
	}
	}
	
      ASSERT_EQ(0, equal(matrix4, matrix5,matrix6, 3, 3));


    }

//testcase Q3

TEST(Q3, perfectnumber) 
{ 
int sum=0;
int result=0;
int *ptr;
int arr[]={2,3,6,1};
ptr=arr;
/*ptr[0]=6;
ptr[1]=1;
ptr[2]=4;
ptr[3]=2;
ptr[4]=3;*/

for(int i=0;i<3;i++)
    {
	int num= *(ptr+i);
	result= sum_of_Perfect(num,num/2);
	if(result==num){
		sum=sum+result;
}
   
     
    }
ASSERT_EQ(6,sum);
}
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
