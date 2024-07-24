/*
Enter number :45
Number of 1 are :4

    2   45
    2   22  1
    2   11  0
    2   5   1
    2   2   1
    2   1   0
    2   0   1


    (1+0+1+1+0+1 = 4)
*/

#include<stdio.h>

int Count1(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 2;
        iSum = iSum + iDigit;
        iNo = iNo / 2;
        
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Count1(iValue);

    printf("Addition is:%d",iRet);

    return 0;
}


