#include<stdio.h>


int Addition(int iNo1, int iNo2)
{
    int iAns = 0;           //variable to store result
    iAns = iNo1 + iNo2;         
    return iAns;
}


int main()
{
    int iValue1 = 0;        //variable to store first input
    int iValue2 = 0;        //variable to store second input
    int iResult = 0;        //variable to store  the return value

    printf("Enter the first number: \n");
    scanf("%d",&iValue1);

    printf("Enter the second number: \n");
    scanf("%d",&iValue2);

     iResult = Addition(iValue1, iValue2);

    printf("Addition is : %d\n",iResult);

    return 0;
}