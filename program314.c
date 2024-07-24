/*
I/P -  Enter number :11
O/P -  4th bit is ON

I/P -  Enter number :67
O/P -  4th bit is OFF



iNo         11      0 0 0 0 1 0 1 1             (binary)
         Mask       0 0 0 0 1 0 0 0             (8)(4th bit check on ya off)
                    -----------------------&
                    0 0 0 0 1 0 0 0               Result

iNo         20      0 0 0 1 0 1 0 0
         Mask       0 0 0 0 0 0 0 0
                    -----------------------&
                    0 0 0 0 0 0 0 0             Result
*/

#include<stdio.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 8;
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



*/
