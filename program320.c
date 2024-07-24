/*
check 6th and 9th bit is ON ya OFF

I/P  -  Enter number :288
O/P  -  6th and 9th bit is ON

I/P  -  Enter number :340
O/P  -  6th and 9th bit is OFF
*/

//1 0 0 1 0 0 0 0 0         6 & 9 bit check on ya off

#include<stdio.h>


int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 288;           //(2^5 = 32  and  2^8 = 256  ==> 256+32 = 288)
    unsigned int iResult = 0;
    
    printf("Enter number : \n");
    scanf("%u",&iNo);

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        printf("6th and 9th bit is ON\n");
    }
    else
    {
        printf("6th and 9th bit is OFF\n");
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


