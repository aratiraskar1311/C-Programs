// problem statement - Dispaly Jay Hanuman on screen in 5 times using while loops.

#include<stdio.h>

void Display()
{
   int iCnt = 0;
   
    iCnt = 1; 
    while(iCnt <= 5)
    {
        printf("Jay Hanuman...... \n");
        iCnt++;
    }
    
}

int main()
{

    Display();
    
    return 0;
}