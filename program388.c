//Doubly Circular LinkedList using C

/*

<-| 11 |-><-| 21 |-><-| 51 |->
Number of elements are :3
<-| 11 |-><-| 21 |-><-| 51 |-><-| 101 |-><-| 111 |-><-| 121 |->
Number of elements are :6
<-| 11 |-><-| 21 |-><-| 51 |-><-| 101 |-><-| 105 |-><-| 111 |-><-| 121 |->
Number of elements are :7
<-| 11 |-><-| 21 |-><-| 51 |-><-| 101 |-><-| 111 |-><-| 121 |->
Number of elements are :6

*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE First, PNODE Last)
{
    PNODE temp = NULL;

    if((First == NULL) && (Last == NULL))
    {
        printf("LL is empty\n");
        return;
    }
    
    temp = First;
    do
    {
        printf("<-| %d |->",temp -> data);
        temp = temp -> next;
    }while(temp != First);

    printf("\n");
    
}

int Count(PNODE First, PNODE Last)
{
    int iCount = 0;

    if((First == NULL) && (Last == NULL))
    {
        return 0;
    }
    
    do
    {
        iCount++;
        First = First -> next;
    }while(First != (Last -> next));

    return iCount;
    
}

void InsertFirst(PPNODE First, PPNODE Last, int No)
{
    PNODE newn = NULL;

    newn =(PNODE)malloc(sizeof(NODE));

    newn -> data = No;
    newn -> next = NULL;
    newn -> prev = NULL;

    if((*First == NULL) && (*Last == NULL))
    {
        *First = newn;
        *Last = newn;
        newn -> next = newn;
        newn -> prev = newn;
    }
    else
    {
        newn -> next = *First;
        (*First) -> prev = newn;
        (*Last) -> next = newn;
        newn -> prev = *Last;
        *First = newn;
    }
}

void InsertLast(PPNODE First, PPNODE Last, int No)
{
    PNODE newn = NULL;

    newn =(PNODE)malloc(sizeof(NODE));

    newn -> data = No;
    newn -> next = NULL;
    newn -> prev = NULL;

    if((*First == NULL) && (*Last == NULL))
    {
        *First = newn;
        *Last = newn;
        newn -> next = newn;
        newn -> prev = newn;
    }
    else
    {
        (*Last) -> next = newn;
        newn -> prev = *Last;
        newn -> next = *First;
        *Last = newn;
    }
}

void DeleteFirst(PPNODE First, PPNODE Last)
{
    PNODE temp = NULL;

    if((*First == NULL) && (*Last == NULL))
    {
        return;
    }

    else if(*First == *Last)
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else
    {
        temp = (*First) -> next;
        temp -> prev = *Last;
        (*Last) -> next = temp;
        free(*First);
        *First = temp;
    }
}

void DeleteLast(PPNODE First, PPNODE Last)
{
    PNODE temp = NULL;

    if((*First == NULL) && (*Last == NULL))
    {
        return;
    }

    else if(*First == *Last)
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else
    {
        temp = *First;
        
        while((temp -> next) != (*Last))
        {
            temp = temp -> next;           
        }
        temp -> next = *First;
        (*First) -> prev = temp;
        free(*Last);
        *Last = temp;
    }
}

void InsertAtPos(PPNODE First, PPNODE Last, int No, int iPos)
{
    int iLength = 0;
    int i = 0;
    PNODE newn = NULL;
    PNODE temp = NULL;

    iLength = Count(*First, *Last);

    if((iPos < 1) || (iPos > iLength + 1))
    {
        printf("Invalid Position\n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(First, Last, No);
    }
    else if(iPos == iLength + 1)
    {
        InsertLast(First, Last, No);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn -> data = No;
        newn -> next = NULL;
        newn -> prev = NULL;

        temp = *First;

        for(i = 1; i < iPos-1; i++)
        {
            temp = temp -> next;
        }
        temp -> next -> prev = newn;
        newn -> prev = temp;
        newn -> next = temp -> next;
        temp -> next = newn;

    }

}

void DeleteAtPos(PPNODE First, PPNODE Last, int iPos)
{
    int iLength = 0;
    int i = 0;
    PNODE temp1 = NULL;
    PNODE temp2 = NULL;

    iLength = Count(*First, *Last);

    if((iPos < 1) || (iPos > iLength))
    {
        printf("Invalid Position\n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst(First, Last);
    }
    else if(iPos == iLength)
    {
        DeleteLast(First, Last);
    }
    else
    {

        temp1 = *First;
       

        for(i = 1; i < iPos-1; i++)
        {
            temp1 = temp1 -> next;
        }
         temp2 = temp1 -> next;
         temp2 -> next -> prev = temp1;
         temp1 -> next = temp2 -> next;
         free(temp2);

    }
}


int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;
    int iRet = 0;

    InsertFirst(&Head, &Tail, 51);
    InsertFirst(&Head, &Tail, 21);
    InsertFirst(&Head, &Tail, 11);

    Display(Head, Tail);

    iRet = Count(Head, Tail);
    printf("Number of elements are :%d\n",iRet);

    InsertLast(&Head, &Tail, 101);
    InsertLast(&Head, &Tail, 111);
    InsertLast(&Head, &Tail, 121);

    Display(Head, Tail);

    iRet = Count(Head, Tail);
    printf("Number of elements are :%d\n",iRet);  

    InsertAtPos(&Head, &Tail, 105, 5);
    Display(Head, Tail);

    iRet = Count(Head, Tail);
    printf("Number of elements are :%d\n",iRet);

    DeleteAtPos(&Head, &Tail,5);
    Display(Head, Tail);

    iRet = Count(Head, Tail);
    printf("Number of elements are :%d\n",iRet);


    return 0;
}