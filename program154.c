#include<stdio.h>
#include<stdbool.h>

void CheckCapital(char ch)
{
    if((ch >= 65) && (ch <= 90))            //not used ASCII value
    {
        printf("It is a capital letter\n");
    }
    else
    {
        printf("It is not a capital letter\n");
    }

}
int main()
{
    char cValue;

    printf("Enter one character : \n");
    scanf("%c",&cValue);

    CheckCapital(cValue);

    
    return 0;
}