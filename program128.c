/*	
	Enter the elements :
	67
	34
	20
	88
	12
	Addition of odd elements are : 67
*/



#include<stdio.h>
#include<stdlib.h>

int  AdditionOdd(int Arr[], int iSize)
{
    int i = 0;
    int iSum = 0;

    for(i = 0; i < iSize; i++)
    {
        if((Arr[i] % 2) != 0)
        {
            iSum = iSum + Arr[i];        
        }
        
    }
    return iSum;
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
    
    iRet = AdditionOdd(Brr, iCount); 
    printf("Addition of odd elements are : %d\n ",iRet); 

    free(Brr);                              //free(100)

    return 0;
}

