/*
	O/P : 	10
		20
		30
		40
		50
	
*/

#include<stdio.h>

void Display(int *ptr, int iSize)
{
    int i = 0;

    for(i = 0; i < iSize; i++,ptr++)
    {
        printf("%d\n",*ptr);
    }
}
int main()
{
    int Arr[5] = {10,20,30,40,50};          //no used for this syntax
    

    Display(Arr,5);           //Display(100,5);   address jato so pointer mdhe ghetat

    return 0;
}