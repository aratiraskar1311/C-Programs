/*
    I/P : Enter th string  : hello

    O/p : Reverse string is : olleh
*/


#include<stdio.h>

void Strrevx(char *str)      
{
    char *start = str;
    char *end = str;
    char temp;

    while(*end !='\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char Arr[100];

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    Strrevx(Arr);    

    printf("Reverse string is : %s\n",Arr);        

    return 0;
}