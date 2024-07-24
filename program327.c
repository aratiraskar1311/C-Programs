/*
4th bit off krun updated number print

I/P  - Enter number :12
O/P  - Updated number is : 4

I/P  - Enter number :11
O/P  - Updated number is : 3


*/

#include<stdio.h>


int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 0xfffffff7;
    unsigned int iResult = 0;
    
    printf("Enter number : \n");
    scanf("%u",&iNo);

    iResult = iNo & iMask;

    
        printf("Updated number is : %u\n",iResult);



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

    I/p : 12                        0  0  0  0  1  1  0  0

    O/P : 4 (4 bit off kraychi)     0  0  0  0  0  1  0  0
    -----------------------------------------------------------------


                      0   0   0   0  1  1  0  0
                      1   1   1   1  0  1  1  1
                      ---------------------------------&
                      0   0   0   0  0  1  0  0


             

    mask  -  
    1111   1111   1111   1111    1111   1111    1111    0111
    f       f       f     f       f      f        f       7


    oxfffffff7



*/