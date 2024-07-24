// problem statement - Dispaly Jay Hanuman on screen in 5 times using for loops.(way3)

#include<stdio.h>

void Display(int iNo)
{
   int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("Jay Hanuman...... \n");
    }
    
}
int main()
{
    int iValue = 0;
   
    printf("Enter number of times you want to display Jay Hanuman on screen :");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}