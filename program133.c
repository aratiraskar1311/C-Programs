/*
	Enter number of elements that you want :
	5
	Enter the elements :
	34
	57
	8
	23	
	77
	Enter the element that you want to search :
	8
	Frequency of that number is : 1
*/



#include<stdio.h>
#include<stdlib.h>

int  Search(int Arr[], int iSize, int iNo)
{
    int i = 0;
    int iFrequency = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == iNo)
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
    int iValue = 0;
    int *Brr = NULL;

    printf("Enter number of elements that you want : \n");
    scanf("%d",&iCount);

     
    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements :\n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }
    
    printf("Enter the element that you want to search : \n");
    scanf("%d",&iValue); 

    iRet = Search(Brr, iCount,iValue); 
    printf("Frequency of that number is : %d\n ",iRet); 

    free(Brr);                              //free(100)

    return 0;
}

