#include<stdio.h>

void Display(char *str)
{
    while(*str != '\0')
    {
        printf("%c\n",*str);
        str++;
    }
}

int main()
{
    char Arr[50];

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);                 //[^'\n']  ==>  regular expression ==>  short form -- regx

    Display(Arr);           //Display(100)

    return 0;
}