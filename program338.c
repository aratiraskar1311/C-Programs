//call by address

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
    PNODE newn = NULL;          //newn means new node pointer

    newn = (PNODE)malloc(sizeof(NODE));     //12 bytes         

    newn->data = No;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else    
    {
        newn->next = *First;
        *First = newn;
    }
}

int main()
{
    PNODE Head = NULL;              //Head pointer create
    
    InsertFirst(&Head,51);      //InsertFirst(60,51)        call by address
    InsertFirst(&Head,21);      //InsertFirst(60,21)
    InsertFirst(&Head,11);      //InsertFirst(60,11)



    return 0;
}