#include<stdio.h>

int CountEvenDigits(int iNo)
{
    int iCount = 0;
    int iDigit = 0;

    if(iNo < 0)                 //updator
    {
        iNo = - iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if(iDigit % 2 == 0)
         {
            iCount++;
         }
         
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = CountEvenDigits(iValue);

    printf("Number of even digits are : %d\n",iRet);
    
    return 0;
}