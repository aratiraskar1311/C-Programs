/*
    I/P : Enter th string : marvellous multi
         Enter the character thar you want to search : m

    O/p : Frequency is 2
*/


#include<stdio.h>
#include<stdbool.h>

int CountFrequency(char * str, char ch)      
{
    int iCnt = 0;

    while(* str != '\0')
    {
        if(* str == ch)
        {
           iCnt++;
        }
        
        str++;
    }
    return iCnt;

}

int main()
{
    char Arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character thar you want to search : \n");
    scanf(" %c",&cValue);                                       //entre space before %c

    iRet = CountFrequency(Arr, cValue);                //Strlenx(100)

    
    printf("Frequency is %d\n",iRet);
    

    return 0;
}