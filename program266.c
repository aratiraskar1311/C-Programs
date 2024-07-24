/*
I/P  -  Enter string :marvellous
	Enter string: MARVELLOUS

O/P  -  Display string is : MARVELLOUS
	Display string is : MARVELLOUS
*/

#include<stdio.h>

void struprX(char * str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            (*str) = (*str) - 32;
        }
        str++;
    }
}

int main()
{
    char Arr[30];

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    struprX(Arr);

    printf("Entered string is : %s\n",Arr);


    return 0;
}