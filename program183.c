/*
    I/P : Enter th string : marvellous
          Enter the character thar you want to search : l

    O/p : Last occurrance of the letter is 7
*/


#include<stdio.h>
#include<stdbool.h>

int CheckOccurance(char * str, char ch)      
{
    int iCnt = 1;
    int iPos = -1;

    while(* str != '\0')
    {
        if(* str == ch)
        {
           iPos = iCnt;
        }
        iCnt++;
        str++;
    }
    return iPos;
}

int main()
{
    char Arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter th string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character thar you want to search : \n");
    scanf(" %c",&cValue);                                       //entre space before %c

    iRet = CheckOccurance(Arr, cValue);                //Strlenx(100)

    if(iRet != -1)
    {
        printf("Last occurrance of the letter is %d\n",iRet);
    }
    else
    {
       printf("This is no such letter\n");
    }

    return 0;
}