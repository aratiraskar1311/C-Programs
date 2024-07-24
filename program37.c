#include<stdio.h>
#include<stdbool.h>

int Countactors(int iNo)
{
    int iCnt = 0;
    int iCount = 0;
    
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
       if((iNo % iCnt) == 0)
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
    
    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Countactors(iValue);
    printf("numbers of factors : %d\n",iRet);

    return 0;
}


