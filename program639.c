//Accept two string and check string is anagram => 
//String1 -  hello   CAT
//string2 - olhel    ACT

#include<stdio.h>
#include<stdbool.h>

bool CheckAnagram(char str1[], char str2[])
{
    int Count1[26] = {0};
    int Count2[26] = {0};
    int i = 0;

    while(*str1 != '\0')
    {
        Count1[*str1 - 'a']++;
        str1++;
    }

    while(*str2 != '\0')
    {
        Count2[*str2 - 'a']++;
        str2++;
    }

    for(i = 0; i < 26; i++)
    {
        if(Count1[i] != Count2[i])
        {
            break;
        }
    }

    if(i == 26)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    char Arr[30];
    char Brr[30];
    bool bRet = false;
    
    printf("Enter First string : \n");
    scanf("%s",Arr);

    printf("Enter second string : \n");
    scanf("%s",Brr);

    bRet = CheckAnagram(Arr,Brr);

    if(bRet == true)
    {
        printf("String are anagram\n");
    }
    else
    {
        printf("String are not anagram\n");
    }

    return 0;
}