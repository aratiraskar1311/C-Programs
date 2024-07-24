

#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    if(iNo < 0)             //updator
    {
        iNo = -iNo;         //- value ghetli tr positive mdhe convert(- - = +)
    }
    //    1            2             3
    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)       //4
        {
            iCount++;
            break;
        }
    }
    if(iCount == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);
    if(bRet == true)
    {
        printf("%d is prime number \n",iValue);
    }
    else
    {
        printf("%d is not prime number \n",iValue);
    }
    

    return 0;
}