#include<stdio.h>

int CountsDigits(int iNo)
{
    int iCount = 0;

    if(iNo < 0)                 //updator
    {
        iNo = - iNo;
    }
    while(iNo > 0)
    {
         iNo = iNo / 10;
         iCount++;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = CountsDigits(iValue);

    printf("Number of digits are : %d\n",iRet);
    
    return 0;
}