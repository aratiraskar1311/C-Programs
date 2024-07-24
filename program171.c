/*
    I/P : Enter th string : mArvellous mUlti
        
    O/p : Number of vowels are : 2
*/


#include<stdio.h>

int CountVowel(char * str)      //Case sensitive
{
    int iCnt = 0;
    while(* str != '\0')
    {
        if((* str == 'A') || (* str == 'I') || (* str == 'O') || (* str == 'U') || (* str == 'E'))
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

    iRet = CountVowel(Arr);                //Strlenx(100)

    printf("Number of vowels are : %d\n",iRet);

    return 0;
}