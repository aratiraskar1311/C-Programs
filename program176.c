/*
    I/P :  Enter the string : Hello world
    O/p :  l is present is string
*/


#include<stdio.h>
#include<stdbool.h>

bool CheckOccurance(char * str)      
{
    bool bFlag = false;
    while(* str != '\0')
    {
        if(* str == 'l')
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
    char Arr[20];
    bool bRet = false;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    bRet = CheckOccurance(Arr);                //Strlenx(100)

    if(bRet == true)
    {
        printf("l is present is string \n");
    }
    else
    {
       printf("l is not present is string \n");
    }

    return 0;
}