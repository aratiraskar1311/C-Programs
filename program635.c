//Accept two string and check string is anagram => 
//String1 -  hello   CAT
//string2 - olhel    ACT

#include<stdio.h>
#include<stdbool.h>

bool CheckAnagram(char str1[], char str2[])
{
    return true;
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