/*	
	Enter the elements :
	34
	67
	88
	90
	12
	number of odd elements are : 1
*/

#include<stdio.h>
#include<stdlib.h>

int  CheckOdd(int Arr[], int iSize)
{
    int i = 0;
    int iFrequency = 0;

    for(i = 0; i < iSize; i++)
    {
        if((Arr[i] % 2) != 0)
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
    
    iRet = CheckOdd(Brr, iCount); 
    printf("number of odd elements are : %d\n ",iRet); 

    free(Brr);                              //free(100)

    return 0;
}

