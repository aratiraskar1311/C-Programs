#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[], int iSize, int iNo)
{
    int i = 0;
    bool bFlag = false;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == iNo)
        {
            bFlag = true;
            break;        
        }
        
    }
    return bFlag;
}

int main()
{
    int iCount = 0;
    int i = 0;
    bool bRet = 0; 
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

    bRet = Search(Brr, iCount,iValue); 
    if(bRet == true)
    {
        printf("Eements is present in the array",bRet);
    }
    else
    {
        printf("Eements is not present in the array",bRet);
    }

    free(Brr);                              //free(100)

    return 0;
}

