#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("| %d |->",First->data);
        First = First -> next;
    }
    printf("NULL\n");
} 

int Count(PNODE First)
{
    int iCnt = 0;

    while(First != NULL)
    {
        iCnt++;
        First = First -> next;
    }
    return iCnt;
} 

int Addition(PNODE First)
{
    int iSum = 0;

    while(First != NULL)
    {
        iSum = iSum + (First -> data);
        First = First -> next;
    }
    return iSum;
}

int EvenCount(PNODE First)
{
    int iCount = 0;

    while(First != NULL)
    {
        if((First -> data) % 2 == 0)
        {
            iCount++;
        }
         First = First -> next;
    }
    return iCount;
} 

int OddCount(PNODE First)
{
    int iCount = 0;

    while(First != NULL)
    {
        if((First -> data) % 2 != 0)
        {
            iCount++;
        }
         First = First -> next;
    }
    return iCount;
} 

int Frequency(PNODE First, int No)
{
    int iCount = 0;

    while(First != NULL)
    {
        if(First -> data == No)
        {
            iCount++;
        }
        First = First -> next;
    }
    return iCount;
}

bool Search(PNODE First, int No)
{
    bool bFlag = false;

    while(First != NULL)
    {
        if((First -> data) == No)
        {
            bFlag = true;
            break;
        }
        First = First -> next;
    }
    return bFlag;
}

int FirstOccurance(PNODE First, int No)
{
    int iCount = 1;
    int iPos = -1;

    while(First != NULL)
    {
        if((First -> data) == No)
        {
            iPos = iCount;
            break;
        }
        iCount++;
        First = First -> next;
    }
    return iPos;
}

int LastOccurance(PNODE First, int No)
{
    int iCount = 1;
    int iPos = -1;

    while(First != NULL)
    {
        if((First -> data) == No)
        {
            iPos = iCount;
        }
        iCount++;
        First = First -> next;
    }
    return iPos;
}

void SumDigits(PNODE First)
{
    int iDigit = 0;
    int iSum = 0;
    int iNo = 0;

    while(First != NULL)
    {
        iNo = First -> data;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
        printf("%d\n",iSum);
        iSum = 0;

        First = First -> next;    
    }
    
    
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    bool bRet = false;
    
    InsertFirst(&Head,42);
    InsertFirst(&Head,10);
    InsertFirst(&Head,50);
    InsertFirst(&Head,21);
    InsertFirst(&Head,10);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);
    
    Display(Head);

    iRet = Addition(Head);
    printf("Addition of all element : %d\n",iRet);

    iRet = EvenCount(Head);
    printf("Even number of element are  : %d\n",iRet);

    iRet = OddCount(Head);
    printf("Odd number of element are  : %d\n",iRet);

    iRet = Frequency(Head,10);
    printf("Frequency is  : %d\n",iRet);

    bRet = Search(Head,10);
    if(bRet == true)
    {
        printf("Element is present in LL\n");
    }
    else
    {
        printf("There is no such elements in LL\n");
    }
    

    iRet = FirstOccurance(Head,10);
    if(iRet == -1)
    {
        printf("There is no such element\n");
    }
    else
    {
        printf("First Occurance of element is at %d\n",iRet);
    }

    iRet = LastOccurance(Head,10);
    if(iRet == -1)
    {
        printf("There is no such element\n");
    }
    else
    {
        printf("Last Occurance of element is at %d\n",iRet);
    }

    SumDigits(Head);

    return 0;
}
