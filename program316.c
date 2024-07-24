/*
check 9th bit is ON ya OFF

I/ P  - Enter number :512           1000000000
O/P   - 9th bit is OFF

I/ P  - Enter number :256           100000000
O/P   - 9th bit is ON

I/ P  - Enter number :257            100000001
O/P   - 9th bit is ON



0 0 1 0 0 0 0 0 0 0 0    9th bit
2^8 = 256
*/

#include<stdio.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 256;                   //(2^8)
    unsigned int iResult = 0;
    
    printf("Enter number : \n");
    scanf("%u",&iNo);

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        printf("9th bit is ON\n");
    }
    else
    {
        printf("9th bit is OFF\n");
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


