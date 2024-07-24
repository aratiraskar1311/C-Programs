//problem statement - student is pass or fail (way 3)

#include<stdio.h>
#include<stdbool.h>

bool DisplayResult(float fMarks)
{   if((fMarks < 0.0f) || (fMarks > 100.0f))       //Filter input validation
    {
        printf("Invalid Input\n");                 //add printf as per previous prog
        return false;
    }
    if((fMarks >= 0.0f) && (fMarks < 35.0f))
    {
        return false;
    }
    else
    {
         return true;
    }

}

int main()
{
    float fValue = 0.0f;
    bool bRet = false;

    printf("Please eneter your percentage :");
    scanf("%f",&fValue);

    bRet = DisplayResult(fValue);
    if(bRet == true)
    {
        printf("student is pass in the exam \n");
    }
    else
    {
        printf("student is fail in the exam \n");
    }

    return 0;
}