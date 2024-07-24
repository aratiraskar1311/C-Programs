// problem statement -  Diplay on screen 1,2,3,4,5 using for loop with Dynamic.

 #include<stdio.h>

void Display(int iNo)
{
    
    int iCnt = 0;

    iCnt = 1;

    while( iCnt <= iNo)
    {
        printf("%d\n",iCnt);
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of times you want to display numbers on screen :");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}




