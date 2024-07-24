/*
    iRow = 6
    iCol = 6

1
2       2
3       3       3
4       4       4       4
5       5       5       5       5
6       6       6       6       6       6

       
       
*/

#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i = 0, j = 0;

    if(iRow != iCol)
    {
        printf("Number of rows and column should be same");
        return;
    }

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
        if(i >= j)
        {
            printf("%d\t",i);     
        }
        
    }
       printf("\n");
    }
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows : \n");
    scanf("%d",&iValue1);

    printf("Enter number of columns : \n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}




