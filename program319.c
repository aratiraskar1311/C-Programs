/*
check 4th and 8th bit is ON ya OFF

I/P  -  Enter number :234
O/P  -  4th and 8th bit is ON

I/P  -  Enter number :178
O/P  -  4th and 8th bit is OFF
*/

#include<stdio.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 136;      //(2*3 - 8  and   2^7 = 128  => 129+8 = 136)
    unsigned int iResult = 0;
    
    printf("Enter number : \n");
    scanf("%u",&iNo);

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        printf("4th and 8th bit is ON\n");
    }
    else
    {
        printf("4th and 8th bit is OFF\n");
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
