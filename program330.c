/*
I/P  - Enter number :12
O/P  - Updated numver is : 4

I/P  - Enter number :21
O/P  - Updated numver is : 29
*/

#include<stdio.h>


int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 0x00000008;            //4 bit toggle
    unsigned int iResult = 0;
    
    printf("Enter number : \n");
    scanf("%u",&iNo);

    iResult = iNo ^ iMask;

    
        printf("Updated numver is : %u\n",iResult);



    return 0;
}




/*
    position 4th off cha on and on cha off

    I/P  :  12            0     0    0    0    1   1   0   0
    O/P  : 4              0     0    0    0    0   1   0   0   (toggle)

        0     0    0    0    1   1   0   0
        0     0    0    0    0   1   0   0
        --------------------------------------- ^
        0     0    0     0    1   0   0   0


        0     0    0    0    0   1   0   0
        0     0    0    0    1   0   0   0
        ---------------------------------------- ^
        0    0    0     0    1   1    0   0



    I/P  :  21            0     0     0    1    0    1   0   1
    O/P  :  29            0     0     0    1    1    1   0   1    (toggle)


        
    mask  -  0x00000008
    0000    0000    0000    0000    0000    0000    0000    1000
     0       0       0       0       0       0       0       8


    


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




practice ex:
//   0100   0110   1111   0000  1101   1100   1110  0011
//     4     6      15     0      13     12      14    3
//     4     6      f      0      d       c      e     3
//  0x46f0dce3
*/