/*
    I/P : Enter the string : Marvellous
          Enter the character thar you want to search : l
    O/p : Letter occurs at the position : 6

     I/P : Enter the string : hello
          Enter the character thar you want to search : p
    O/p : This is no such letter
*/


#include<stdio.h>
#include<stdbool.h>

int CheckOccurance(char * str, char ch)      
{
    int iCnt = 1;
    bool bFlag = false;

    while(* str != '\0')
    {
        if(* str == ch)
        {
            bFlag = true;
            break;
        }
        iCnt++;
        str++;
    }
    if(bFlag == true)
    {
        return iCnt;
    }
    else
    {
        return -1;
    }

}

int main()
{
    char Arr[100];
    char cValue;
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character thar you want to search : \n");
    scanf(" %c",&cValue);                                       //entre space before %c

    iRet = CheckOccurance(Arr, cValue);                //Strlenx(100)

    if(iRet != -1)
    {
        printf("Letter occurs at the position : %d\n",iRet);
    }
    else
    {
       printf("This is no such letter\n");
    }

    return 0;
}