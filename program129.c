/*
	Enter the elements :
	34
	23
	88
	6
	4
	number of even elements are : 4
*/


#include<stdio.h>
#include<stdlib.h>

int  CheckEven(int Arr[], int iSize)
{
    int i = 0;
    int iFrequency = 0;

    for(i = 0; i < iSize; i++)
    {
        if((Arr[i] % 2) == 0)
        {
            iFrequency++;        
        }
        
    }
    return iFrequency;
}

int main()
{
    int iCount = 0;
    int i = 0;
    int iRet = 0; 
    int *Brr = NULL;

    printf("Enter number of elements that you want : \n");
    scanf("%d",&iCount);

     
    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements :\n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }
    
    iRet = CheckEven(Brr, iCount); 
    printf("number of even elements are : %d\n ",iRet); 

    free(Brr);                              //free(100)

    return 0;
}

