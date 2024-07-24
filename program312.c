/*

BITWISE |(OR)

I/P  -  Enter first number : 11
        Enter second number :15

O/P  -  Result of bitwise | :15

*/

#include<stdio.h>



int main()
{
    unsigned int iNo1 = 0;
    unsigned int iNo2 = 0;
    unsigned int iRet = 0;

    printf("Enter first number : \n");
    scanf("%u",&iNo1);

    printf("Enter second number : \n");
    scanf("%u",&iNo2);

    iRet = iNo1 | iNo2;

    printf("Result of bitwise | :%u\n",iRet);

    return 0;
}

/*

OP1     OP2     RESULT
1       1       1
1       0       1
0       0       0
0       1       1


iNo1        11          0   0   0   0   1   0   1   1
iNo2        15          0   0   0   0   1   1   1   1
----------------------------------------------------------------|
                        0   0   0   0   1   1   1   1               15

            67          0   1   0   0   0   0   1   1
            34          0   0   1   0   0   0   1   0
----------------------------------------------------------------|
                        0   1   1   0   0   0   1   1               99

*/
