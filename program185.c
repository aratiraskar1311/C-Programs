/*
    I/P : Enter th string :hello
 
    O/p : updated string is : hello
*/


#include<stdio.h>

void UpdateString(char * str)      
{

    while(* str != '\0')
    {
        
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