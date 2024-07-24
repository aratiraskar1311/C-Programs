/*
    I/P : Enter th string : hello

    O/p :   h
            e
            l
            l
            o
*/


#include<stdio.h>

void Display(char * str)      
{
    int iCnt = 0;

    for(iCnt = 0; str[iCnt] != '\0'; iCnt++)
    {
        printf("%c\n",str[iCnt]);
    }
    
}

int main()
{
    char Arr[20];

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);                

    return 0;
}