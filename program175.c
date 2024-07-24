/*
    I/P :  Enter the string : Hello world
    O/p :  w is present is string
*/


#include<stdio.h>
#include<stdbool.h>

bool CheckOccurance(char * str)      
{
    bool bFlag = false;
    while(* str != '\0')
    {
        if((* str == 'w') || (* str == 'W'))
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
    bool bRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    bRet = CheckOccurance(Arr);                //Strlenx(100)

    if(bRet == true)
    {
        printf("w is present is string \n");
    }
    else
    {
       printf("w is not present is string \n");
    }

    return 0;
}