/*
check 4th bit is ON ya OFF
    Logic with helper function

    I/P -  Enter number :11     (11 -> 00001011)
    O/P -  4th bit is ON

    I/P -  Enter number :67     (67 -> 01000011)
    O/P -  4th bit is OFF

iNo         11      0 0 0 0 1 0 1 1             (binary)
         Mask       0 0 0 0 1 0 0 0             (8)(4th bit check on ya off)
                    -----------------------&
                    0 0 0 0 1 0 0 0               (8) Result

iNo         20      0 0 0 1 0 1 0 0
         Mask       0 0 0 0 1 0 0 0
                    -----------------------&
                    0 0 0 0 0 0 0 0             Result

*/

#include<stdio.h>
#include<stdbool.h>

bool CheckBit(int iNo)
{

    unsigned int iMask = 8;         //(2^3)
    unsigned int iResult = 0;
    

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    unsigned int iValue = 0;
    bool bRet = false;
    
    printf("Enter number : \n");
    scanf("%u",&iValue);

    bRet = CheckBit(iValue);

    if(bRet == true)
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
