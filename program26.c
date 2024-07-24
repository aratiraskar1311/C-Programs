// problem statement -  Diplay on screen 1,2,3,4,5 using for loop with Dynamic.

#include<stdio.h>

void Display()
{
    
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 4; iCnt++)
    {
        printf("%d\n",iCnt);
    }
}

int main()
{

    Display();
    
    return 0;
}