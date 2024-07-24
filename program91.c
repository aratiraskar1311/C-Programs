//I/P : 5      
//O/P : A  *  B  *  C  *  D  *  E  *

#include<stdio.h>

void Display(char iNo)
{
    int iCnt = 0;
    char ch = '\0';

    for(iCnt =1, ch = 'A'; iCnt <= iNo; iCnt++,ch++)              
    {
        printf("%c\t*\t",ch);

    }

    printf("\n");
    
}
 

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    Display(iValue);


    return 0;
}

