#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)                 //updator
    {
        iNo = - iNo;
    }
    while(iNo > 0)
    {
        iDigit = iNo % 10;
         
         if(iDigit > 5)
         {
           iCount++;
         }
         iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = Count(iValue);

    printf("number of digits greater than 5 are : %d\n",iRet);

    
    return 0;
}