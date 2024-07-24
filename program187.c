/*
    I/P :  I/P : Enter th string : india is my country
    
    O/p :  Updated string is is india_is_my_country
*/


#include<stdio.h>

void UpdateString(char * str)      
{

    while(* str != '\0')
    {
        if(* str == ' ')
        {
            * str = '_';
        }
        str++;
    }
    
}

int main()
{
    char Arr[20];

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);


    UpdateString(Arr);                

    printf("Updated string is :  %s\n",Arr);

    return 0;
}