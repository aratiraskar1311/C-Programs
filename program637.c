//Accept two string and check string is anagram => 
//String1 -  hello   CAT
//string2 - olhel    ACT

#include<stdio.h>
#include<stdbool.h>

void Calculatefreaquency(char str[])
{
    int Count[26] = {0};
    int i = 0;

    while(*str != '\0')
    {
        Count[*str - 'a']++;
        str++;
    }

    for(i = 0; i < 26; i++)
    {
        printf("Frequency of %c is %d \n",'a'+i,Count[i]);
    }

}

int main()
{
    char Arr[30];
   
    printf("Enter First string : \n");
    scanf("%s",Arr);

    Calculatefreaquency(Arr);

    return 0;
}