#include<stdio.h>
#include<stdbool.h>


//Problem statement : number is divisible by 3 and 5 (interview imp)

// User is going to enter only positive inputs

//Algorithm
/*
    START 
       Accept one number as No
       Divide the number No by 3
       If remainder is 0
       Divide the number No by 3
        If remainder is 0
        then print number is divisible by 3 and 5
       otherwise display the it is not divisible by 3 , 5
       STOP
*/

///////////////////////////////////////////////////////////////
//
//   Function Name :   CheckDivisible
//   Description :      Used to check whether number is divisible by 3 & 5
//   Input :            Integer
//   Output :           Boolean
//   Author :           Aarti Ramesh Raskar
//   Date :             16/04/2024
/////////////////////////////////////////////////////////




bool CheckDivisible(unsigned int iNo)
{
    if(((iNo % 3)== 0) && ((iNo % 5) == 0))
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
    unsigned int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);

    if(bRet == true)
    {
        printf("%d is divisible by 3 and 5\n",iValue);
    }
    else
    {
        printf("%d is not divisible by either 3 or 5\n",iValue);
    }

   return 0;
}




/*
Logical && operator 

First       second      &&            ||

true        true        true         true
false       false       false        false
true        false       false        true
false       true        false        true
*/