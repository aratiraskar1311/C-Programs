/*
	Addition is : 
*/

#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[], int iSize)
{
    int i = 0;
    int iSum = 0;

    for(i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
        
    }
    return iSum;
}

int main()
{
    int iCount = 0;
    int i = 0;
    int *Brr = NULL;
    int iRet = 0;

    //step 1 : Accept number of elements from user
    printf("Enter number of elements that you want : \n");
    scanf("%d",&iCount);

     
    //step 2 : Allocate dynamic memory for that number of elements
    Brr = (int *)malloc(iCount * sizeof(int));

    // step 3 : Accept the values from user nd store into that memory
    printf("Enter the elements :\n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }
    printf("Entered elements are :\n");
    for(i = 0; i < iCount; i++)
    {
        printf("%d\n",Brr[i]);
    }

    //step 4 : Pass the address of that memory to the function (Any)
    iRet = Addition(Brr, iCount);
    printf("Addition is : %d\n",iRet);


    //step 5 : After using that memory free it explicitely
    free(Brr);

    return 0;
}

