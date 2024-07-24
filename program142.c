#include<stdio.h>
#include<stdlib.h>

void Updator(int Arr[], int iSize)
{
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] > 100)
        {
            Arr[i] = 0;
        }
        
    }
}

int main()
{
    int iCount = 0;
    int i = 0;
    int *Brr = NULL;

    printf("Enter the number of element that you want to enter:\n");
    scanf("%d",&iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the element : \n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

    Updator(Brr, iCount);

    printf("Data after updation is : \n");
    for(i = 0; i < iCount; i++)
    {
        printf("%d\n",Brr[i]);
    }

    free(Brr);

    return 0;
}