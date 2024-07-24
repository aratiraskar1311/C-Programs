/*
Enter number :24
Binary conversion is :00011


   2   24
   2   12   0
   2   6    0
   2   3    0
   2   1    1
   2   0    1



*/

#include<stdio.h>

void DisplayBinary(int iNo)
{
    int iDigit = 0;

    printf("Binary conversion is :\n");

    while(iNo != 0)
    {
        iDigit = iNo % 2;
        printf("%d",iDigit);
        iNo = iNo / 2;
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayBinary(iValue);

    return 0;
}