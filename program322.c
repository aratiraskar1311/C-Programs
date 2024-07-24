/*

I/P  - Enter number :5
I/P  - 4th bit is OFF

I/P  - Enter number :8
I/P  - 4th bit is ON

*/

#include<stdio.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 0X00000008;
    unsigned int iResult = 0;
    
    printf("Enter number : \n");
    scanf("%u",&iNo);

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        printf("4th bit is ON\n");
    }
    else
    {
        printf("4th bit is OFF\n");
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


Decimal         Binary          Hexadecimal

0               0000                0
1               0001                1
2               0010                2
3               0011                3
4               0100                4
5               0101                5
6               0110                6
7               0111                7
8               1000                8
9               1001                9
10              1010                a
11              1011                b
12              1100                c
13              1101                d        
14              1110                e
15              1111                f


    0000    0000    0000    0000    0000    0000    0000    1000
     0       0       0       0       0        0      0       8          ==>(4th bit 1) 1000 cha hexadecimal 8 => 0x00000008
*/
