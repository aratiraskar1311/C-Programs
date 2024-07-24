/*
	Enter number of elements that you want :
	5
	Enter the elements :
	45
	15
	34
	78
	9
	number of elements which are divisible by 3 & 5 are : 2
*/

#include<stdio.h>
#include<stdlib.h>

int  Divisible(int Arr[], int iSize)
{
    int i = 0;
    int iFrequency = 0;

    for(i = 0; i < iSize; i++)
    {
        if(((Arr[i] % 5) == 0) && ((Arr[i] % 3) == 0))
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
    
    iRet = Divisible(Brr, iCount); 
    printf("number of elements which are divisible by 3 & 5 are : %d\n ",iRet); 

    free(Brr);                              //free(100)

    return 0;
}

