/*
check 6th bit is ON ya OFF

I/P  -  Enter number :34
O/P  -  6th bit is ON

I/P  -  Enter number :11
O/P  -  6th bit is OFF
*/

#include<stdio.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 32;      //(2*5)
    unsigned int iResult = 0;
    
    printf("Enter number : \n");
    scanf("%u",&iNo);

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        printf("6th bit is ON\n");
    }
    else
    {
        printf("6th bit is OFF\n");
    }


    return 0;
}

/*
-------------------------------------------
OP1     OP2    &        |       ^ 
--------------------------------------------
1       1      1        1       0
1       0      0        1       1
0       1      0        1       1
0       0      0        0       0



*/
