/*
check 13th bit is ON ya OFF

I/P  -  Enter number :4987
O/P  -  13th bit is ON

I/P  -  Enter number :9999
O/P  -  13th bit is OFF
*/

#include<stdio.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 4096;      //(2*12)
    unsigned int iResult = 0;
    
    printf("Enter number : \n");
    scanf("%u",&iNo);

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        printf("13th bit is ON\n");
    }
    else
    {
        printf("13th bit is OFF\n");
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
