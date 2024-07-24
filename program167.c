/*
   I/P : Enter th string : Marvellous Multi OS
       
    O/p : Number of capital letters are : 13
*/


#include<stdio.h>

int StrlenCapx(char * str)
{
    int iCnt = 0;
    while(* str != '\0')
    {
        if((* str >= 65) && (* str <= 90))
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
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = StrlenCapx(Arr);                //Strlenx(100)

    printf("Number of capital letters are : %d\n",iRet);

    return 0;
}