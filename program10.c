
//problem statement - number is in range between 30 and 50.(way1)

#include<stdio.h>
#include<stdbool.h>

/*Algorithm 
    START 
        Accept one number as No
        If the number is greate than 30 and if it is less then 50
        than display the messange as number is in range
        otherwise 
        display the message as number is not in the range
    STOP
*/

bool CheckRange(int iNo)
{
    if((iNo >= 30) && (iNo <= 50))
    {
        return true;
    }
    else
    {
        return false;  
    }

}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number :");
    scanf("%d",&iValue);

    bRet = CheckRange(iValue);

    if(bRet == true)
    {
        printf("YES\n");
    }
    else
    {
         printf("NO\n");
    }

    return 0;
}