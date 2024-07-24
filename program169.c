/*
    I/P : Enter th string : MarvellousO Multi OS
       
    O/p : Number of small letters are : 4
*/


#include<stdio.h>

int StrlenSmallx(char * str)
{
    int iCnt = 0;
    while(* str != '\0')
    {
        if((* str >= 97) && (* str <= 122))
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

    iRet = StrlenSmallx(Arr);                //Strlenx(100)

    printf("Number of capital letters are : %d\n",iRet);

    return 0;
}