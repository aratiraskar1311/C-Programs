
/*
    I/P :  Enter th string :  marvellous pune
          
    O/P :  Length of string is : 15
*/
#include<stdio.h>

int Strlenx(char * str)
{
    int iCnt = 0;
    while(* str != '\0')
    {
        iCnt++;
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

    iRet = Strlenx(Arr);                //Strlenx(100)

    printf("Length of string is : %d\n",iRet);

    return 0;
}