/*
    I/P : Enter th string : marvellous

     O/p :  m
            a
            r
            v
            e
            l
            l
            o
            u
            s
   
*/


#include<stdio.h>

void Display(char * str)      
{

    while(* str != '\0')
    {
        printf("%c\n",*str);
        str++;
    }
    
}

int main()
{
    char Arr[20];

    printf("Enter th string : \n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);                

    return 0;
}