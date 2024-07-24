/*
    I/P : Enter th string : Marvellous
          Enter the character thar you want to search : a

    O/p : character is present is string

    Error yenar aahe not display output
*/


#include<stdio.h>
#include<stdbool.h>

bool CheckOccurance(char * str, char ch)      
{
    bool bFlag = false;

    while(* str != '\0')
    {
        if(* str == ch)
        {
            bFlag = true;
            break;
        }
        str++;
    }
    return bFlag;

}

int main()
{
    char Arr[100];
    char cValue;
    bool bRet = false;

    printf("Enter th string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character thar you want to search : \n");
    scanf("%c",&cValue);                                            //this line error

    bRet = CheckOccurance(Arr, cValue);                //Strlenx(100)

    if(bRet == true)
    {
        printf("character is present is string \n");
    }
    else
    {
       printf("character is not present is string \n");
    }

    return 0;
}