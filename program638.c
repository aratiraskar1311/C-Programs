//Accept two string and check string is anagram => 
//String1 -  hello   CAT
//string2 - olhel    ACT

//Count frequency of each letter
/*
Enter First string : marvellous
Frequency of a is 1
Frequency of e is 1
Frequency of l is 2
Frequency of m is 1
Frequency of o is 1
Frequency of r is 1
Frequency of s is 1
Frequency of u is 1
Frequency of v is 1
*/


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
        if(Count[i] != 0)
        {
            printf("Frequency of %c is %d \n",'a'+i,Count[i]);
        }
        
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