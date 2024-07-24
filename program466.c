//Singly Linear LinkedList using C

/*

| 11 |->| 21 |->| 51 |->| 101 |->| 111 |->| 121 |->NULL
Number of elements are : 6
| 11 |->| 21 |->| 51 |->| 101 |->| 105 |->| 111 |->| 121 |->NULL
Number of elements are : 7
| 11 |->| 21 |->| 51 |->| 101 |->| 105 |->| 121 |->NULL
Number of elements are : 6

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

void InsertFirst(PPNODE First, int No)
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
}   //time complexity O(1) => Order of 1

void InsertLast(PPNODE First, int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = No;
    newn -> next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        temp = *First;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp -> next = newn;
    }
}//time complexity O(N) => Order of N


/*
void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("| %d |->",First->data);
        First = First -> next;
    }
    printf("NULL\n");
}//time complexity O(N) => Order of N
*/


void Display(PNODE First)
{
    if(First != NULL)
    {
        Display(First -> next);                     //Head Recursion
        printf("%d\t",First -> data);
        
    }
}

/*
int Count(PNODE First)
{
    int iCnt = 0;

    while(First != NULL)
    {
        iCnt++;
        First = First -> next;
    }
    return iCnt;
}//time complexity O(N) => Order of N
*/

int Count(PNODE First)
{
    static int iCnt = 0;
    if(First != NULL)
    {
        iCnt++;
        First = First -> next;
        Count(First);
    }
    return iCnt;
}

void DeleteFirst(PPNODE First)
{
    PNODE temp = NULL;

    if(*First == NULL)                                    //case 1
    {
        printf("Unable to delete as LL is empty");
        return;
    }
    else if((*First) -> next == NULL)                               //case 2
    {
        free(*First);
        *First = NULL;
    }
    else                                                    //case 3
    {
        temp = *First;
        *First = (*First) -> next;
        free(temp);
    }
}

void DeleteLast(PPNODE First)
{
    PNODE temp = NULL;

    if(*First == NULL)                                    //case 1
    {
        printf("Unable to delete as LL is empty");
        return;
    }
    else if((*First) -> next == NULL)                               //case 2
    {
        free(*First);
        *First = NULL;
    }
    else                                                    //case 3
    {
        temp = *First;

        while(temp->next->next != NULL)
        {
            temp = temp -> next;

        }
        free(temp->next);
        temp->next = NULL;
    }
}

void InsertAtPos(PPNODE First, int No, int iPos)
{
    int iLength = 0;
    int i = 0;

    PNODE temp = NULL;
    PNODE newn = NULL;


    iLength = Count(*First);

    if((iPos < 1) || (iPos > iLength+1))
    {
        printf("Invalid position\n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(First,No);
    }
    else if(iPos == iLength+1)
    {
        InsertLast(First,No);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn -> data = No;
        newn -> next = NULL;

        temp = *First;

        for(i = 1; i < iPos-1; i++)    
        {
            temp = temp -> next;    
        }
        newn -> next = temp -> next;
        temp -> next = newn;
    }
}

void DeleteAtPos(PPNODE First, int iPos)
{
    int iLength = 0;
    int i = 0;

    PNODE temp1 = NULL;
    PNODE temp2 = NULL;

    iLength = Count(*First);

    if((iPos < 1) || (iPos > iLength))
    {
        printf("Invalid position\n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst(First);
    }
    else if(iPos == iLength)
    {
        DeleteLast(First);
    }
    else
    {
        temp1 = *First;

        for(i = 0; i< iPos-1; i++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;

        temp1 -> next = temp2 -> next;
        free(temp2);
    }
}



int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    InsertLast(&Head,101);
    InsertLast(&Head,111);
    InsertLast(&Head,121);
    InsertLast(&Head,151);

    Display(Head);
    iRet = Count(Head);

    printf("\nNumber of elements are : %d\n",iRet);
    
    
    return 0;
}

