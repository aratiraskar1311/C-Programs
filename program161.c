#include<stdio.h>

void Display(char *str)
{
    printf("%c\n",*str);
    str++;

    printf("%c\n",*str);
    str++;

    printf("%c\n",*str);
    str++;
}

int main()
{
    char Arr[50];

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);                 //[^'\n']  ==>  regular expression ==>  short form -- regx

    Display(Arr);           //Display(100)

    return 0;
}