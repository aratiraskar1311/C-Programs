/*

BITWISE &(AND)

I/P  -  Enter first number :11
        Enter second number :15

O/P  -  Result of bitwise & :11
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

    iRet = iNo1 & iNo2;

    printf("Result of bitwise & :%u\n",iRet);

    return 0;
}

/*

OP1     OP2     RESULT(&)                   
1       1       1
1       0       0
0       0       0
0       1       0


iNo1        11          0   0   0   0   1   0   1   1
iNo2        15          0   0   0   0   1   1   1   1
----------------------------------------------------------------&
                        0   0   0   0   1   0   1   1                11

            67          0   1   0   0   0   0   1   1
            34          0   0   1   0   0   0   1   0
----------------------------------------------------------------&
                        0   0   0   0   0   0   1   0                2


                        2   11              2   15                  2   67                      2   34
                        2   5   1           2   7   1               2   33  1                   2   17  0
                        2   2   1           2   3   1               2   16  1                   2   8   1
                        2   1   0           2   1   1               2   8   0                   2   4   0
                        2   0   1           2   0   1               2   4   0                   2   2   0
                                                                    2   2   0                   2   1   0
                                                                    2   1   0                   2   0   1
                                                                    2   0   1
*/
