//Linear LinkedList - Stack using C

/*

Elements of stack are :
40
30
20
10

Number of elements are : 4
Pop elements are : 40
Pop elements are : 30
Elements of stack are :
20
10

Number of elements are : 2

*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Push(PPNODE First,int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = No;
    newn -> next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }     
    else
    {
        newn -> next = *First;
        *First = newn;
    }
}

int Pop(PPNODE First)
{
    PNODE temp = NULL;
    int iValue = 0;

    if(*First == NULL)
    {
        printf("Unable to pop the element as stack is empty\n");
        return -1;
    }
    else
    {
        temp = *First;

        iValue = temp -> data;
        *First = (*First) -> next;
        free(temp);
    }
    return iValue;
}

void Display(PNODE First)
{
    PNODE temp = NULL;

    temp = First;

    printf("Elements of stack are :\n");
    while(temp != NULL)
    {
        printf("%d\n",temp -> data);
        temp = temp -> next;
    }
    printf("\n");
}

int Count(PNODE First)
{
    int iCount = 0;

    PNODE temp = NULL;
    
    temp = First;
    while(temp != NULL)
    {
        iCount++;
        temp = temp -> next;

    }
    return iCount;
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    Push(&Head,10);
    Push(&Head,20);
    Push(&Head,30);
    Push(&Head,40);

    Display(Head);

    iRet = Count(Head);
    printf("Number of elements are : %d\n",iRet);

    iRet = Pop(&Head);
    printf("Pop elements are : %d\n",iRet);

    iRet = Pop(&Head);
    printf("Pop elements are : %d\n",iRet);

    Display(Head);

    iRet = Count(Head);
    printf("Number of elements are : %d\n",iRet);


    return 0;
}