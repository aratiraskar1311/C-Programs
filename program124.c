#include<stdio.h>
#include<stdlib.h>

___ ___(int Arr[], int iSize)
{
    //Logic
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
    
    iRet = ___(Brr, iCount);   

    free(Brr);                              //free(100)

    return 0;
}

