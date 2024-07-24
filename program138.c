#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iSize)
{
    int i = 0;
    int iMin = Arr[0];

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] < iMin)
        {
           iMin = Arr[i];
        }
    }
    return iMin;
}

int main()
{
    int iCount = 0;
    int i = 0;
    int iRet = 0;
    int *Brr = NULL;

    printf("Enter the number of element that you want to enter:\n");
    scanf("%d",&iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the element : \n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

    iRet = Minimum(Brr, iCount);

    printf("Miniimum number is : %d\n",iRet);

    free(Brr);

    return 0;
}