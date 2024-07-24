/*
    I/P :  Enter the string : Arti Krunal Badhe
    O/p :  2
*/


#include<stdio.h>

int CountSpace(char * str)     
{
    int iCnt = 0;
    while(* str != '\0')
    {
        if(* str == ' ')
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

    iRet = CountSpace(Arr);                //Strlenx(100)

    printf("Number of vowels are : %d\n",iRet);

    return 0;
}