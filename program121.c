#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iCount = 0;
    int i = 0;
    int *Brr = NULL;

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
    //missing


    //step 5 : After using that memory free it explicitely
    free(Brr);

    return 0;
}

